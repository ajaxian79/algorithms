# tabulation

## entry 1

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5

- StringBuilder: amortize allocation by doubling on grow.

## entry 6

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 7

- Stable sort matters when a secondary key was set in a prior pass.

## entry 8

- Monotonic stack pops while the new element violates the invariant.

## entry 9

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 10

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 11

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 12

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 14

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 17

- Heap when you only need top-k; full sort is wasted work.

## entry 18

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 20

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 21

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 22

- Stable sort matters when a secondary key was set in a prior pass.

## entry 23

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 24

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 28

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 30

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 31

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 32

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 33

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 34

- Stable sort matters when a secondary key was set in a prior pass.

## entry 35

- Greedy by end-time picks the most non-overlapping intervals.

## entry 36

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 39

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 40

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 41

- Stable sort matters when a secondary key was set in a prior pass.

## entry 42

- Splay tree: every access splays to the root; amortized O(log n).

## entry 43

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 45

- Euler tour flattens a tree into an array for range-query LCA.

## entry 46

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 47

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 48

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 49

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 50

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 51

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 52

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 53

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 54

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 55

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 56

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 57

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 58

- Heap when you only need top-k; full sort is wasted work.

## entry 59

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 60

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 61

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 62

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 63

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 64

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 65

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 66

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 67

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 68

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 69

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 71

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 73

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 74

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 75

- Heap when you only need top-k; full sort is wasted work.

## entry 76

- Stable sort matters when a secondary key was set in a prior pass.

## entry 77

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 78

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 79

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 80

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 82

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 83

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 84

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 85

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 86

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 87

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 88

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 89

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 90

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 91

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 92

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 93

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 94

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 95

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 96

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 97

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 98

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 99

- Euler tour flattens a tree into an array for range-query LCA.

## entry 100

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 101

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 102

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 103

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 104

- Greedy by end-time picks the most non-overlapping intervals.

## entry 105

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 106

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 107

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 108

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 109

- Walk both pointers from each end inward; advance the smaller side.

## entry 110

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 111

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 112

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 113

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 115

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 116

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 117

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 118

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 119

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 120

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 121

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 122

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 123

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 124

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 125

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 126

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 127

- Euler tour flattens a tree into an array for range-query LCA.

## entry 128

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 129

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 130

- Stable sort matters when a secondary key was set in a prior pass.

## entry 131

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 132

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 133

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 134

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 135

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 136

- LIS via patience: each pile holds the smallest tail of length k.

## entry 137

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 138

- StringBuilder: amortize allocation by doubling on grow.

## entry 139

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 140

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 141

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 142

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 143

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 144

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 145

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 146

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 147

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 148

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 149

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 150

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 151

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 152

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 153

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 154

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 155

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 156

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 157

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 158

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 159

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 160

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 161

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 162

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 163

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 164

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 165

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 166

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 167

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 168

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 169

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 170

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 171

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 172

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 173

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 174

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 175

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 176

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 177

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 178

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 179

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 180

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 181

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 182

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 183

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 184

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 185

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 186

- Greedy by end-time picks the most non-overlapping intervals.

## entry 187

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 188

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 189

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 190

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 191

- Heap when you only need top-k; full sort is wasted work.

## entry 192

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 193

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 194

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 195

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 196

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 197

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 198

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 199

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 200

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 201

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 202

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 203

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 204

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 205

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 206

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 207

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 208

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 209

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 210

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 211

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 212

- Euler tour flattens a tree into an array for range-query LCA.

## entry 213

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 214

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 215

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 216

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 217

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 218

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 219

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 220

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 221

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 222

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 223

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 224

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 225

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 226

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 227

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 228

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 229

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 230

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 231

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 232

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 233

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 234

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 235

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 236

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 237

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 238

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 239

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 240

- Splay tree: every access splays to the root; amortized O(log n).

## entry 241

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 242

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 243

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 244

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 245

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 246

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 247

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 248

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 249

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 250

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 251

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 252

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 253

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 254

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 255

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 256

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 257

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 258

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 259

- StringBuilder: amortize allocation by doubling on grow.

## entry 260

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 261

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 262

- Monotonic stack pops while the new element violates the invariant.

## entry 263

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 264

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 265

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 266

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 267

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 268

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 269

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 270

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 271

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 272

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 273

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 274

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 275

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 276

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 277

- Greedy by end-time picks the most non-overlapping intervals.

## entry 278

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 279

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 280

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 281

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 282

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 283

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 284

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 285

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 286

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 287

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 288

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 289

- StringBuilder: amortize allocation by doubling on grow.

## entry 290

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 291

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 292

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 293

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 294

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 295

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 296

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 297

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 298

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 299

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 300

- Monotonic stack pops while the new element violates the invariant.

## entry 301

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 302

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 303

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 304

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 305

- Euler tour flattens a tree into an array for range-query LCA.

## entry 306

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 307

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 308

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 309

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 310

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 311

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 312

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 313

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 314

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 315

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 316

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 317

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 318

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 319

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 320

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 321

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 322

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 323

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 324

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 325

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 326

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 327

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 328

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 329

- LIS via patience: each pile holds the smallest tail of length k.

## entry 330

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 331

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 332

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 333

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 334

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 335

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 336

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 337

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 338

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 339

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 340

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 341

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 342

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 343

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 344

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 345

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 346

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 347

- Monotonic stack pops while the new element violates the invariant.

## entry 348

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 349

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 350

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 351

- Walk both pointers from each end inward; advance the smaller side.

## entry 352

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 353

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 354

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 355

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 356

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 357

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 358

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 359

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 360

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 361

- Stable sort matters when a secondary key was set in a prior pass.

## entry 362

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 363

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 364

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 365

- Monotonic stack pops while the new element violates the invariant.

## entry 366

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 367

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 368

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 369

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 370

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 371

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 372

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 373

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 374

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 375

- Euler tour flattens a tree into an array for range-query LCA.

## entry 376

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 377

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 378

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 379

- Stable sort matters when a secondary key was set in a prior pass.

## entry 380

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 381

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 382

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 383

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 384

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 385

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 386

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 387

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 388

- Graph DP on DAGs: topological order makes the dependency direction explicit.
