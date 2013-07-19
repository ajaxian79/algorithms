# trie

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Union-Find with path compression amortizes to near-O(1) per op.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LIS via patience: each pile holds the smallest tail of length k.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Manacher expands around each center, reusing prior radii via mirror reflection.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Heap when you only need top-k; full sort is wasted work.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Walk both pointers from each end inward; advance the smaller side.

Stable sort matters when a secondary key was set in a prior pass.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Greedy by end-time picks the most non-overlapping intervals.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 7

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

Greedy by end-time picks the most non-overlapping intervals.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 12

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 15

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 16

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 18

StringBuilder: amortize allocation by doubling on grow.

## entry 19

Stable sort matters when a secondary key was set in a prior pass.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Splay tree: every access splays to the root; amortized O(log n).

## entry 22

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 23

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 24

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 27

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 28

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

Monotonic stack pops while the new element violates the invariant.

## entry 31

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 32

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 34

StringBuilder: amortize allocation by doubling on grow.

## entry 35

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 36

State compression: bitmask + integer encodes a small subset cheaply.

## entry 37

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 39

StringBuilder: amortize allocation by doubling on grow.

## entry 40

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 41

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 43

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 44

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 45

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 46

LIS via patience: each pile holds the smallest tail of length k.

## entry 47

Union-Find with path compression amortizes to near-O(1) per op.

## entry 48

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 49

Greedy by end-time picks the most non-overlapping intervals.

## entry 50

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 51

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 52

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 53

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 54

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 55

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 56

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 58

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 59

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 60

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 63

StringBuilder: amortize allocation by doubling on grow.

## entry 64

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 65

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 66

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 67

Monotonic stack pops while the new element violates the invariant.

## entry 68

Monotonic stack pops while the new element violates the invariant.

## entry 69

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 70

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 71

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 72

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 73

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 74

Union-Find with path compression amortizes to near-O(1) per op.

## entry 75

Heap when you only need top-k; full sort is wasted work.

## entry 76

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 77

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 78

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 79

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 80

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 81

StringBuilder: amortize allocation by doubling on grow.

## entry 82

Heap when you only need top-k; full sort is wasted work.

## entry 83

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 84

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 85

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 86

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 87

Splay tree: every access splays to the root; amortized O(log n).

## entry 88

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 89

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 90

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 91

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 92

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 93

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 94

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 95

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 96

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 97

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 98

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 99

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 100

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 101

Wavelet tree: range k-th element in O(log Σ) time.

## entry 102

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 103

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 104

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 105

Articulation points: same DFS as bridges, with a slightly different test.

## entry 106

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 107

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 109

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 110

Euler tour flattens a tree into an array for range-query LCA.

## entry 111

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 112

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 113

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 114

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 115

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 116

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 117

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 118

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 119

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 120

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 121

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 122

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 123

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 124

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 125

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 126

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 127

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 128

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 129

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 130

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 131

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 132

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 133

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 134

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 135

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 136

Splay tree: every access splays to the root; amortized O(log n).

## entry 137

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 138

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 139

Union-Find with path compression amortizes to near-O(1) per op.

## entry 140

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 141

Greedy by end-time picks the most non-overlapping intervals.

## entry 142

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 143

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 144

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 145

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 146

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 147

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 148

Union-Find with path compression amortizes to near-O(1) per op.

## entry 149

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 150

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 151

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 152

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 153

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 154

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 155

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 156

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 157

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 158

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 159

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 160

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 161

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 162

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 163

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 164

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 165

Splay tree: every access splays to the root; amortized O(log n).

## entry 166

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 167

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 168

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 169

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 170

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 171

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 172

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 173

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 174

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 175

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 176

Greedy by end-time picks the most non-overlapping intervals.

## entry 177

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 178

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 179

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 180

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 181

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 182

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 183

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 184

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 185

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 186

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 187

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 188

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 189

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 190

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 191

Monotonic stack pops while the new element violates the invariant.

## entry 192

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 193

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 194

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 195

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 196

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 197

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 198

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 199

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 200

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 201

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 202

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 203

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 204

LIS via patience: each pile holds the smallest tail of length k.

## entry 205

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 206

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 207

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 208

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 209

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 210

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 211

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 212

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 213

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 214

Heap when you only need top-k; full sort is wasted work.

## entry 215

Splay tree: every access splays to the root; amortized O(log n).

## entry 216

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 217

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 218

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 219

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 220

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 221

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 222

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 223

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 224

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 225

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 226

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 227

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 228

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 229

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 230

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 231

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 232

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 233

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 234

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 235

Walk both pointers from each end inward; advance the smaller side.

## entry 236

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 237

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 238

Splay tree: every access splays to the root; amortized O(log n).

## entry 239

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 240

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 241

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 242

Union-Find with path compression amortizes to near-O(1) per op.

## entry 243

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 244

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 245

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 246

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 247

Walk both pointers from each end inward; advance the smaller side.

## entry 248

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 249

StringBuilder: amortize allocation by doubling on grow.

## entry 250

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 251

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 252

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 253

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 254

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 255

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 256

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 257

Greedy by end-time picks the most non-overlapping intervals.

## entry 258

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 259

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 260

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 261

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 262

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 263

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 264

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 265

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 266

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 267

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 268

Heap when you only need top-k; full sort is wasted work.

## entry 269

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 270

Stable sort matters when a secondary key was set in a prior pass.

## entry 271

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 272

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 273

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 274

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 275

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 276

Walk both pointers from each end inward; advance the smaller side.

## entry 277

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 278

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 279

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 280

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 281

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 282

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 283

Euler tour flattens a tree into an array for range-query LCA.

## entry 284

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 285

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 286

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 287

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 288

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 289

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 290

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 291

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 292

Splay tree: every access splays to the root; amortized O(log n).

## entry 293

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 294

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 295

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 296

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 297

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 298

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 299

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 300

State compression: bitmask + integer encodes a small subset cheaply.

## entry 301

Euler tour flattens a tree into an array for range-query LCA.

## entry 302

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 303

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 304

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 305

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 306

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 307

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 308

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 309

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 310

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 311

Wavelet tree: range k-th element in O(log Σ) time.

## entry 312

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 313

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 314

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 315

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 316

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 317

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 318

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 319

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 320

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 321

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 322

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 323

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 324

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 325

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 326

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 327

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 328

Articulation points: same DFS as bridges, with a slightly different test.

## entry 329

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 330

Splay tree: every access splays to the root; amortized O(log n).

## entry 331

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 332

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 333

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 334

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 335

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 336

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 337

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 338

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 339

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 340

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 341

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 342

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 343

LIS via patience: each pile holds the smallest tail of length k.

## entry 344

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 345

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 346

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 347

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 348

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 349

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 350

LIS via patience: each pile holds the smallest tail of length k.

## entry 351

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 352

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 353

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 354

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 355

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 356

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 357

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 358

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 359

State compression: bitmask + integer encodes a small subset cheaply.

## entry 360

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 361

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 362

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 363

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 364

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 365

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 366

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 367

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 368

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 369

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 370

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 371

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 372

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 373

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 374

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 375

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 376

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 377

Greedy by end-time picks the most non-overlapping intervals.

## entry 378

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 379

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 380

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 381

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 382

Union-Find with path compression amortizes to near-O(1) per op.

## entry 383

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 384

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 385

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 386

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 387

Greedy by end-time picks the most non-overlapping intervals.

## entry 388

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 389

Monotonic stack pops while the new element violates the invariant.

## entry 390

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 391

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 392

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 393

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 394

Union-Find with path compression amortizes to near-O(1) per op.

## entry 395

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 396

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 397

Stable sort matters when a secondary key was set in a prior pass.

## entry 398

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 399

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 400

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 401

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 402

Union-Find with path compression amortizes to near-O(1) per op.

## entry 403

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 404

Union-Find with path compression amortizes to near-O(1) per op.

## entry 405

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 406

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 407

Walk both pointers from each end inward; advance the smaller side.

## entry 408

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 409

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 410

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 411

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 412

Articulation points: same DFS as bridges, with a slightly different test.

## entry 413

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 414

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 415

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 416

Euler tour flattens a tree into an array for range-query LCA.

## entry 417

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 418

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 419

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 420

Articulation points: same DFS as bridges, with a slightly different test.

## entry 421

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 422

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 423

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 424

Stable sort matters when a secondary key was set in a prior pass.

## entry 425

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 426

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 427

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 428

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 429

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 430

Monotonic stack pops while the new element violates the invariant.

## entry 431

LIS via patience: each pile holds the smallest tail of length k.

## entry 432

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 433

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 434

Greedy by end-time picks the most non-overlapping intervals.

## entry 435

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 436

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 437

Walk both pointers from each end inward; advance the smaller side.

## entry 438

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 439

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 440

StringBuilder: amortize allocation by doubling on grow.

## entry 441

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 442

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 443

Greedy by end-time picks the most non-overlapping intervals.

## entry 444

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 445

Union-Find with path compression amortizes to near-O(1) per op.

## entry 446

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 447

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 448

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 449

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 450

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 451

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 452

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 453

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 454

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 455

State compression: bitmask + integer encodes a small subset cheaply.

## entry 456

Wavelet tree: range k-th element in O(log Σ) time.

## entry 457

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 458

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 459

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 460

Monotonic stack pops while the new element violates the invariant.

## entry 461

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 462

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 463

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 464

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 465

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 466

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 467

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 468

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 469

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 470

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 471

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 472

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 473

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 474

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 475

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 476

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 477

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 478

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 479

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 480

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 481

Euler tour flattens a tree into an array for range-query LCA.

## entry 482

Heap when you only need top-k; full sort is wasted work.

## entry 483

Euler tour flattens a tree into an array for range-query LCA.

## entry 484

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 485

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 486

State compression: bitmask + integer encodes a small subset cheaply.

## entry 487

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 488

Wavelet tree: range k-th element in O(log Σ) time.

## entry 489

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 490

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 491

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 492

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 493

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 494

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 495

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 496

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 497

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 498

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 499

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 500

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 501

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 502

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 503

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 504

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 505

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 506

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 507

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 508

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 509

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 510

Euler tour flattens a tree into an array for range-query LCA.

## entry 511

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 512

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 513

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 514

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 515

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 516

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 517

Splay tree: every access splays to the root; amortized O(log n).

## entry 518

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 519

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 520

Greedy by end-time picks the most non-overlapping intervals.

## entry 521

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 522

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 523

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 524

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 525

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 526

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 527

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 528

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 529

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 530

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 531

LIS via patience: each pile holds the smallest tail of length k.

## entry 532

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 533

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
