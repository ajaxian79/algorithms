# quickselect

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Monotonic stack pops while the new element violates the invariant.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Morris traversal threads predecessors back to current node — O(1) extra space.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Unbounded knapsack: capacity inner ascending allows item reuse.

Greedy by end-time picks the most non-overlapping intervals.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Merge intervals: sort by start; extend the running interval while overlapping.

Manacher expands around each center, reusing prior radii via mirror reflection.

In-place compaction uses two pointers: read advances always, write only on keep.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Heap when you only need top-k; full sort is wasted work.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Union-Find with path compression amortizes to near-O(1) per op.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4

Greedy by end-time picks the most non-overlapping intervals.

## entry 5

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

Greedy by end-time picks the most non-overlapping intervals.

## entry 7

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 8

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 10

Stable sort matters when a secondary key was set in a prior pass.

## entry 11

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 12

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 13

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 14

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 15

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 16

Euler tour flattens a tree into an array for range-query LCA.

## entry 17

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 19

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 20

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 21

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 22

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 25

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 27

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 28

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 29

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 30

Greedy by end-time picks the most non-overlapping intervals.

## entry 31

Greedy by end-time picks the most non-overlapping intervals.

## entry 32

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 33

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 34

Articulation points: same DFS as bridges, with a slightly different test.

## entry 35

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 37

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 38

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 39

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 40

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 41

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 42

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 43

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 44

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 45

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 46

Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 48

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 49

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 50

Heap when you only need top-k; full sort is wasted work.

## entry 51

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 52

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 53

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 54

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 55

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 56

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 58

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 59

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 60

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 63

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 64

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 65

State compression: bitmask + integer encodes a small subset cheaply.

## entry 66

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 67

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 69

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 70

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 71

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 72

Monotonic stack pops while the new element violates the invariant.

## entry 73

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 74

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 75

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 76

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 77

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 78

Euler tour flattens a tree into an array for range-query LCA.

## entry 79

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 80

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 81

Splay tree: every access splays to the root; amortized O(log n).

## entry 82

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 83

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 84

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 85

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 86

Monotonic stack pops while the new element violates the invariant.

## entry 87

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 88

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 89

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 90

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 91

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 92

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 93

Monotonic stack pops while the new element violates the invariant.

## entry 94

Euler tour flattens a tree into an array for range-query LCA.

## entry 95

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 96

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 97

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 98

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 99

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 100

Stable sort matters when a secondary key was set in a prior pass.

## entry 101

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 102

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 103

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 105

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 106

Heap when you only need top-k; full sort is wasted work.

## entry 107

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 108

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 109

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 110

Heap when you only need top-k; full sort is wasted work.

## entry 111

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 112

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 113

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 114

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 115

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 116

Wavelet tree: range k-th element in O(log Σ) time.

## entry 117

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 118

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 119

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 120

StringBuilder: amortize allocation by doubling on grow.

## entry 121

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 122

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 123

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 124

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 125

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 126

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 127

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 128

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 129

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 130

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 131

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 132

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 133

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 134

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 135

State compression: bitmask + integer encodes a small subset cheaply.

## entry 136

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 137

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 138

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 139

Euler tour flattens a tree into an array for range-query LCA.

## entry 140

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 141

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 142

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 143

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 144

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 145

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 146

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 147

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 148

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 149

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 150

State compression: bitmask + integer encodes a small subset cheaply.

## entry 151

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 152

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 153

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 154

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 155

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 156

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 157

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 158

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 159

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 160

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 161

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 162

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 163

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 164

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 165

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 166

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 167

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 168

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 169

Monotonic stack pops while the new element violates the invariant.

## entry 170

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 171

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 172

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 173

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 174

Euler tour flattens a tree into an array for range-query LCA.

## entry 175

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 176

Walk both pointers from each end inward; advance the smaller side.

## entry 177

StringBuilder: amortize allocation by doubling on grow.

## entry 178

State compression: bitmask + integer encodes a small subset cheaply.

## entry 179

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 180

Articulation points: same DFS as bridges, with a slightly different test.

## entry 181

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 182

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 183

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 184

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 185

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 186

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 187

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 188

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 189

Euler tour flattens a tree into an array for range-query LCA.

## entry 190

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 191

Articulation points: same DFS as bridges, with a slightly different test.

## entry 192

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 193

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 194

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 195

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 196

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 197

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 198

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 199

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 200

Heap when you only need top-k; full sort is wasted work.

## entry 201

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 202

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 203

StringBuilder: amortize allocation by doubling on grow.

## entry 204

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 205

Euler tour flattens a tree into an array for range-query LCA.

## entry 206

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 207

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 208

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 209

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 210

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 211

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 212

LIS via patience: each pile holds the smallest tail of length k.

## entry 213

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 214

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 215

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 216

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 217

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 218

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 219

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 220

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 221

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 222

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 223

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 224

Monotonic stack pops while the new element violates the invariant.

## entry 225

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 226

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 227

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 228

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 229

Walk both pointers from each end inward; advance the smaller side.

## entry 230

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 231

Heap when you only need top-k; full sort is wasted work.

## entry 232

Union-Find with path compression amortizes to near-O(1) per op.

## entry 233

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 234

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 235

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 236

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 237

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 238

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 239

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 240

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 241

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 242

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 243

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 244

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 245

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 246

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 247

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 248

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 249

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 250

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 251

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 252

Heap when you only need top-k; full sort is wasted work.

## entry 253

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 254

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 255

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 256

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 257

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 258

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 259

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 260

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 261

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 262

Articulation points: same DFS as bridges, with a slightly different test.

## entry 263

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 264

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 265

State compression: bitmask + integer encodes a small subset cheaply.

## entry 266

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 267

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 268

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 269

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 270

Stable sort matters when a secondary key was set in a prior pass.

## entry 271

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 272

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 273

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 274

Splay tree: every access splays to the root; amortized O(log n).

## entry 275

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 276

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 277

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 278

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 279

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 280

Euler tour flattens a tree into an array for range-query LCA.

## entry 281

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 282

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 283

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 284

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 285

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 286

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 287

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 288

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 289

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 290

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 291

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 292

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 293

Wavelet tree: range k-th element in O(log Σ) time.

## entry 294

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 295

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 296

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 297

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 298

Greedy by end-time picks the most non-overlapping intervals.

## entry 299

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 300

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 301

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 302

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 303

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 304

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 305

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 306

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 307

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 308

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 309

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 310

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 311

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 312

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 313

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 314

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 315

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 316

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 317

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 318

Euler tour flattens a tree into an array for range-query LCA.

## entry 319

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 320

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 321

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 322

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 323

Articulation points: same DFS as bridges, with a slightly different test.

## entry 324

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 325

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 326

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 327

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 328

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 329

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 330

Heap when you only need top-k; full sort is wasted work.

## entry 331

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 332

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 333

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 334

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 335

Greedy by end-time picks the most non-overlapping intervals.

## entry 336

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 337

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 338

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 339

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 340

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 341

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 342

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 343

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 344

Walk both pointers from each end inward; advance the smaller side.

## entry 345

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 346

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 347

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 348

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 349

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 350

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 351

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 352

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 353

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 354

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 355

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 356

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 357

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 358

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 359

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 360

Monotonic stack pops while the new element violates the invariant.

## entry 361

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 362

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 363

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 364

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 365

Walk both pointers from each end inward; advance the smaller side.

## entry 366

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 367

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 368

State compression: bitmask + integer encodes a small subset cheaply.

## entry 369

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 370

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 371

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 372

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 373

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 374

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 375

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 376

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 377

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 378

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 379

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 380

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 381

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 382

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 383

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 384

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 385

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 386

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 387

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 388

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 389

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 390

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 391

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 392

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 393

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 394

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 395

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 396

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 397

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 398

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 399

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 400

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 401

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 402

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 403

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 404

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 405

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 406

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 407

Wavelet tree: range k-th element in O(log Σ) time.

## entry 408

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 409

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 410

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 411

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 412

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 413

Monotonic stack pops while the new element violates the invariant.

## entry 414

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 415

State compression: bitmask + integer encodes a small subset cheaply.

## entry 416

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 417

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 418

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 419

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 420

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 421

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 422

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 423

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 424

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 425

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 426

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 427

StringBuilder: amortize allocation by doubling on grow.

## entry 428

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 429

StringBuilder: amortize allocation by doubling on grow.

## entry 430

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 431

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 432

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 433

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 434

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 435

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 436

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 437

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 438

Euler tour flattens a tree into an array for range-query LCA.

## entry 439

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 440

Articulation points: same DFS as bridges, with a slightly different test.

## entry 441

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 442

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 443

Stable sort matters when a secondary key was set in a prior pass.

## entry 444

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 445

Stable sort matters when a secondary key was set in a prior pass.

## entry 446

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 447

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 448

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 449

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 450

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 451

Articulation points: same DFS as bridges, with a slightly different test.

## entry 452

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 453

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 454

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 455

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 456

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 457

Euler tour flattens a tree into an array for range-query LCA.

## entry 458

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 459

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 460

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 461

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 462

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 463

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 464

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 465

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 466

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 467

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 468

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 469

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 470

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 471

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 472

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 473

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 474

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 475

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 476

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 477

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 478

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
