# floyd-warshall

## entry 1

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3

- Heap when you only need top-k; full sort is wasted work.

## entry 4

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 6

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 7

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 9

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 10

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

- StringBuilder: amortize allocation by doubling on grow.

## entry 12

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 13

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 14

- Heap when you only need top-k; full sort is wasted work.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 17

- Walk both pointers from each end inward; advance the smaller side.

## entry 18

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 19

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 20

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 21

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 22

- Stable sort matters when a secondary key was set in a prior pass.

## entry 23

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 25

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 28

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 29

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 30

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 31

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 32

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 33

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 34

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 35

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 36

- StringBuilder: amortize allocation by doubling on grow.

## entry 37

- Monotonic stack pops while the new element violates the invariant.

## entry 38

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 39

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 41

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 42

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 43

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 44

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 46

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 47

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 48

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

- LIS via patience: each pile holds the smallest tail of length k.

## entry 50

- Heap when you only need top-k; full sort is wasted work.

## entry 51

- Stable sort matters when a secondary key was set in a prior pass.

## entry 52

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 53

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 54

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 55

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 56

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 57

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 58

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 59

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 60

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 61

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 62

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 63

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 64

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 65

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 66

- Stable sort matters when a secondary key was set in a prior pass.

## entry 67

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 68

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 69

- Splay tree: every access splays to the root; amortized O(log n).

## entry 70

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 71

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 72

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 73

- Greedy by end-time picks the most non-overlapping intervals.

## entry 74

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 75

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 76

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 77

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 78

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 79

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 80

- Stable sort matters when a secondary key was set in a prior pass.

## entry 81

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 82

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 83

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 84

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 85

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 86

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 87

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 88

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 89

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 90

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 91

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 92

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 93

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 94

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 95

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 96

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 97

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 98

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 99

- Stable sort matters when a secondary key was set in a prior pass.

## entry 100

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 101

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 102

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 103

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 104

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 105

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 106

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 107

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 108

- Monotonic stack pops while the new element violates the invariant.

## entry 109

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 110

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 111

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 112

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 113

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 114

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 115

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 116

- Splay tree: every access splays to the root; amortized O(log n).

## entry 117

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 118

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 119

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 120

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 121

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 122

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 123

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 124

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 125

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 126

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 127

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 128

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 129

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 130

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 131

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 132

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 133

- Monotonic stack pops while the new element violates the invariant.

## entry 134

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 135

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 136

- LIS via patience: each pile holds the smallest tail of length k.

## entry 137

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 138

- LIS via patience: each pile holds the smallest tail of length k.

## entry 139

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 140

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 141

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 142

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 143

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 144

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 145

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 146

- Splay tree: every access splays to the root; amortized O(log n).

## entry 147

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 148

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 149

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 150

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 151

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 152

- StringBuilder: amortize allocation by doubling on grow.

## entry 153

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 154

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 155

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 156

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 157

- Euler tour flattens a tree into an array for range-query LCA.

## entry 158

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 159

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 160

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 161

- Euler tour flattens a tree into an array for range-query LCA.

## entry 162

- Heap when you only need top-k; full sort is wasted work.

## entry 163

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 164

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 165

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 166

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 167

- StringBuilder: amortize allocation by doubling on grow.

## entry 168

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 169

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 170

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 171

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 172

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 173

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 174

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 175

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 176

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 177

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 178

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 179

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 180

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 181

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 182

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 183

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 184

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 185

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 186

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 187

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 188

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 189

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 190

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 191

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 192

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 193

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 194

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 195

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 196

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 197

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 198

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 199

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 200

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 201

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 202

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 203

- Monotonic stack pops while the new element violates the invariant.

## entry 204

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 205

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 206

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 207

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 208

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 209

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 210

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 211

- Greedy by end-time picks the most non-overlapping intervals.

## entry 212

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 213

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 214

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 215

- Euler tour flattens a tree into an array for range-query LCA.

## entry 216

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 217

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 218

- LIS via patience: each pile holds the smallest tail of length k.

## entry 219

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 220

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 221

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 222

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 223

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 224

- LIS via patience: each pile holds the smallest tail of length k.

## entry 225

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 226

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 227

- Euler tour flattens a tree into an array for range-query LCA.

## entry 228

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 229

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 230

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 231

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 232

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 233

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 234

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 235

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 236

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 237

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 238

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 239

- Walk both pointers from each end inward; advance the smaller side.

## entry 240

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 241

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 242

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 243

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 244

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 245

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 246

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 247

- Heap when you only need top-k; full sort is wasted work.

## entry 248

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 249

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 250

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 251

- Walk both pointers from each end inward; advance the smaller side.

## entry 252

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 253

- Stable sort matters when a secondary key was set in a prior pass.

## entry 254

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 255

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 256

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 257

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 258

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 259

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 260

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 261

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 262

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 263

- Stable sort matters when a secondary key was set in a prior pass.

## entry 264

- Monotonic stack pops while the new element violates the invariant.

## entry 265

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 266

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 267

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 268

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 269

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 270

- Monotonic stack pops while the new element violates the invariant.

## entry 271

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 272

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 273

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 274

- Heap when you only need top-k; full sort is wasted work.

## entry 275

- Euler tour flattens a tree into an array for range-query LCA.

## entry 276

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 277

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 278

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 279

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 280

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 281

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 282

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 283

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 284

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 285

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 286

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 287

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 288

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 289

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 290

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 291

- Splay tree: every access splays to the root; amortized O(log n).

## entry 292

- Splay tree: every access splays to the root; amortized O(log n).

## entry 293

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 294

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 295

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 296

- Greedy by end-time picks the most non-overlapping intervals.

## entry 297

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 298

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 299

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 300

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 301

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 302

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 303

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 304

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 305

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 306

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 307

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 308

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 309

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 310

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 311

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 312

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 313

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 314

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 315

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 316

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 317

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 318

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 319

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 320

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 321

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 322

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 323

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 324

- Greedy by end-time picks the most non-overlapping intervals.

## entry 325

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 326

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 327

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 328

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 329

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 330

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 331

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 332

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 333

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 334

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 335

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 336

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 337

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 338

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 339

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 340

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 341

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 342

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 343

- Walk both pointers from each end inward; advance the smaller side.

## entry 344

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 345

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 346

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 347

- StringBuilder: amortize allocation by doubling on grow.

## entry 348

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 349

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 350

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 351

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 352

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 353

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 354

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 355

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 356

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 357

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 358

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 359

- Monotonic stack pops while the new element violates the invariant.

## entry 360

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 361

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 362

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 363

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 364

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 365

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 366

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 367

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 368

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 369

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 370

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 371

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 372

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 373

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 374

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 375

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 376

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 377

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 378

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 379

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 380

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 381

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 382

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 383

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 384

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 385

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 386

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 387

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 388

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 389

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 390

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 391

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 392

- Greedy by end-time picks the most non-overlapping intervals.

## entry 393

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 394

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 395

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 396

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 397

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 398

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 399

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 400

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 401

- Stable sort matters when a secondary key was set in a prior pass.

## entry 402

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 403

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 404

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 405

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 406

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 407

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 408

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 409

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 410

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 411

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 412

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 413

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 414

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 415

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 416

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 417

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 418

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 419

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 420

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 421

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 422

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 423

- Splay tree: every access splays to the root; amortized O(log n).

## entry 424

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 425

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 426

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 427

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 428

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 429

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 430

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 431

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 432

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 433

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 434

- Greedy by end-time picks the most non-overlapping intervals.

## entry 435

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 436

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 437

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 438

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 439

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 440

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 441

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 442

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 443

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 444

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 445

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 446

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 447

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 448

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 449

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 450

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 451

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 452

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 453

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 454

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 455

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 456

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 457

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 458

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 459

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 460

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 461

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 462

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 463

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 464

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 465

- Stable sort matters when a secondary key was set in a prior pass.

## entry 466

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 467

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 468

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 469

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 470

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 471

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 472

- Walk both pointers from each end inward; advance the smaller side.

## entry 473

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 474

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 475

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 476

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 477

- LIS via patience: each pile holds the smallest tail of length k.

## entry 478

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 479

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 480

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 481

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 482

- Greedy by end-time picks the most non-overlapping intervals.

## entry 483

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 484

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 485

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
