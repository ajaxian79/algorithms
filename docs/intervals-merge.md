# intervals-merge

LIS via patience: each pile holds the smallest tail of length k.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Union-Find with path compression amortizes to near-O(1) per op.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Morris traversal threads predecessors back to current node — O(1) extra space.

In-place compaction uses two pointers: read advances always, write only on keep.

Walk both pointers from each end inward; advance the smaller side.

Heap when you only need top-k; full sort is wasted work.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Merge intervals: sort by start; extend the running interval while overlapping.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Manacher expands around each center, reusing prior radii via mirror reflection.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Unbounded knapsack: capacity inner ascending allows item reuse.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Stable sort matters when a secondary key was set in a prior pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1

Splay tree: every access splays to the root; amortized O(log n).

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Articulation points: same DFS as bridges, with a slightly different test.

## entry 4

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 7

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 8

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 9

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 10

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 11

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 12

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 13

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 14

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 15

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 17

Monotonic stack pops while the new element violates the invariant.

## entry 18

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 21

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 22

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 23

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 26

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 27

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 28

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 31

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 32

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

State compression: bitmask + integer encodes a small subset cheaply.

## entry 34

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 35

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 36

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 37

Euler tour flattens a tree into an array for range-query LCA.

## entry 38

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 39

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 40

Wavelet tree: range k-th element in O(log Σ) time.

## entry 41

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 42

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 43

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 44

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 45

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 46

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 47

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 48

State compression: bitmask + integer encodes a small subset cheaply.

## entry 49

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 50

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 51

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 52

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 53

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 54

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 55

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 56

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 57

Union-Find with path compression amortizes to near-O(1) per op.

## entry 58

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 59

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 60

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 61

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 62

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 63

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 64

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 65

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 66

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 67

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 68

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 69

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 70

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 71

Wavelet tree: range k-th element in O(log Σ) time.

## entry 72

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 73

LIS via patience: each pile holds the smallest tail of length k.

## entry 74

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 75

Euler tour flattens a tree into an array for range-query LCA.

## entry 76

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 77

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 78

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 81

State compression: bitmask + integer encodes a small subset cheaply.

## entry 82

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 83

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 84

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 85

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 86

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 87

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 88

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 89

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 90

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

Euler tour flattens a tree into an array for range-query LCA.

## entry 92

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 93

Wavelet tree: range k-th element in O(log Σ) time.

## entry 94

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 96

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 97

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 98

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 99

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 100

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 101

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 102

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 103

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 104

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 105

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 106

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 107

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 108

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 109

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 110

Monotonic stack pops while the new element violates the invariant.

## entry 111

Euler tour flattens a tree into an array for range-query LCA.

## entry 112

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 113

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 114

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 115

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 116

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 117

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 118

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 119

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 120

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 121

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 122

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 123

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 124

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 125

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 126

State compression: bitmask + integer encodes a small subset cheaply.

## entry 127

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 128

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 129

State compression: bitmask + integer encodes a small subset cheaply.

## entry 130

Walk both pointers from each end inward; advance the smaller side.

## entry 131

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 132

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 133

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 134

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 135

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 136

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 137

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 138

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 139

Splay tree: every access splays to the root; amortized O(log n).

## entry 140

LIS via patience: each pile holds the smallest tail of length k.

## entry 141

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 142

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 143

Stable sort matters when a secondary key was set in a prior pass.

## entry 144

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 145

Union-Find with path compression amortizes to near-O(1) per op.

## entry 146

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 147

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 148

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 149

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 150

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 151

Walk both pointers from each end inward; advance the smaller side.

## entry 152

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 153

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 154

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 155

Walk both pointers from each end inward; advance the smaller side.

## entry 156

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 157

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 158

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 159

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 160

Splay tree: every access splays to the root; amortized O(log n).

## entry 161

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 162

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 163

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 164

Walk both pointers from each end inward; advance the smaller side.

## entry 165

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 166

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 167

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 168

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 169

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 170

Heap when you only need top-k; full sort is wasted work.

## entry 171

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 172

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 173

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 174

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 175

Heap when you only need top-k; full sort is wasted work.

## entry 176

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 177

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 178

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 179

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 180

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 181

LIS via patience: each pile holds the smallest tail of length k.

## entry 182

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 183

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 184

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 185

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 186

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 187

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 188

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 189

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 190

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 191

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 192

Heap when you only need top-k; full sort is wasted work.

## entry 193

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 194

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 195

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 196

Articulation points: same DFS as bridges, with a slightly different test.

## entry 197

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 198

Wavelet tree: range k-th element in O(log Σ) time.

## entry 199

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 200

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 201

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 202

Union-Find with path compression amortizes to near-O(1) per op.

## entry 203

Greedy by end-time picks the most non-overlapping intervals.

## entry 204

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 205

Union-Find with path compression amortizes to near-O(1) per op.

## entry 206

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 207

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 208

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 209

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 210

Wavelet tree: range k-th element in O(log Σ) time.

## entry 211

Union-Find with path compression amortizes to near-O(1) per op.

## entry 212

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 213

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 214

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 215

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 216

StringBuilder: amortize allocation by doubling on grow.

## entry 217

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 218

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 219

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 220

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 221

Greedy by end-time picks the most non-overlapping intervals.

## entry 222

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 223

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 224

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 225

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 226

State compression: bitmask + integer encodes a small subset cheaply.

## entry 227

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 228

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 229

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 230

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 231

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 232

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 233

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 234

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 235

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 236

Union-Find with path compression amortizes to near-O(1) per op.

## entry 237

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 238

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 239

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 240

Monotonic stack pops while the new element violates the invariant.

## entry 241

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 242

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 243

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 244

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 245

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 246

Walk both pointers from each end inward; advance the smaller side.

## entry 247

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 248

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 249

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 250

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 251

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 252

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 253

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 254

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 255

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 256

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 257

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 258

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 259

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 260

Heap when you only need top-k; full sort is wasted work.

## entry 261

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 262

Articulation points: same DFS as bridges, with a slightly different test.

## entry 263

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 264

Wavelet tree: range k-th element in O(log Σ) time.

## entry 265

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 266

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 267

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 268

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 269

Heap when you only need top-k; full sort is wasted work.

## entry 270

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 271

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 272

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 273

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 274

StringBuilder: amortize allocation by doubling on grow.

## entry 275

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 276

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 277

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 278

Monotonic stack pops while the new element violates the invariant.

## entry 279

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 280

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 281

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 282

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 283

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 284

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 285

Wavelet tree: range k-th element in O(log Σ) time.

## entry 286

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 287

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 288

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 289

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 290

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 291

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 292

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 293

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 294

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 295

Heap when you only need top-k; full sort is wasted work.

## entry 296

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 297

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 298

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 299

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 300

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 301

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 302

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 303

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 304

Splay tree: every access splays to the root; amortized O(log n).

## entry 305

Wavelet tree: range k-th element in O(log Σ) time.

## entry 306

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 307

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 308

Greedy by end-time picks the most non-overlapping intervals.

## entry 309

State compression: bitmask + integer encodes a small subset cheaply.

## entry 310

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 311

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 312

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 313

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 314

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 315

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 316

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 317

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 318

Articulation points: same DFS as bridges, with a slightly different test.

## entry 319

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 320

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 321

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 322

LIS via patience: each pile holds the smallest tail of length k.

## entry 323

Monotonic stack pops while the new element violates the invariant.

## entry 324

Union-Find with path compression amortizes to near-O(1) per op.

## entry 325

State compression: bitmask + integer encodes a small subset cheaply.

## entry 326

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 327

State compression: bitmask + integer encodes a small subset cheaply.

## entry 328

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 329

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 330

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 331

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 332

Euler tour flattens a tree into an array for range-query LCA.

## entry 333

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 334

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 335

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 336

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 337

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 338

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 339

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 340

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 341

Walk both pointers from each end inward; advance the smaller side.

## entry 342

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 343

LIS via patience: each pile holds the smallest tail of length k.

## entry 344

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 345

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 346

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 347

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 348

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 349

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 350

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 351

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 352

Wavelet tree: range k-th element in O(log Σ) time.

## entry 353

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 354

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 355

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 356

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 357

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 358

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 359

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 360

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 361

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 362

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 363

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 364

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 365

Wavelet tree: range k-th element in O(log Σ) time.

## entry 366

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 367

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 368

Stable sort matters when a secondary key was set in a prior pass.

## entry 369

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 370

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 371

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 372

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 373

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 374

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 375

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 376

Splay tree: every access splays to the root; amortized O(log n).

## entry 377

Wavelet tree: range k-th element in O(log Σ) time.

## entry 378

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 379

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 380

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 381

Splay tree: every access splays to the root; amortized O(log n).

## entry 382

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 383

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 384

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 385

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 386

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 387

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 388

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 389

StringBuilder: amortize allocation by doubling on grow.

## entry 390

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 391

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 392

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 393

State compression: bitmask + integer encodes a small subset cheaply.

## entry 394

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 395

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 396

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 397

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 398

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 399

Articulation points: same DFS as bridges, with a slightly different test.

## entry 400

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 401

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 402

Euler tour flattens a tree into an array for range-query LCA.

## entry 403

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 404

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 405

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
