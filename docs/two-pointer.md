# two-pointer

Monotonic stack pops while the new element violates the invariant.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Stable sort matters when a secondary key was set in a prior pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

Walk both pointers from each end inward; advance the smaller side.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Heap when you only need top-k; full sort is wasted work.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Unbounded knapsack: capacity inner ascending allows item reuse.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

In-place compaction uses two pointers: read advances always, write only on keep.

Merge intervals: sort by start; extend the running interval while overlapping.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Manacher expands around each center, reusing prior radii via mirror reflection.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Union-Find with path compression amortizes to near-O(1) per op.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1

Walk both pointers from each end inward; advance the smaller side.

## entry 2

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 7

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 8

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 9

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 10

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 11

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

Stable sort matters when a secondary key was set in a prior pass.

## entry 14

Stable sort matters when a secondary key was set in a prior pass.

## entry 15

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 16

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 17

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 18

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 19

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 20

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 21

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 23

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 24

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

Euler tour flattens a tree into an array for range-query LCA.

## entry 27

Heap when you only need top-k; full sort is wasted work.

## entry 28

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 29

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 30

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 31

Greedy by end-time picks the most non-overlapping intervals.

## entry 32

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 33

Euler tour flattens a tree into an array for range-query LCA.

## entry 34

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 35

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 36

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 37

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 38

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 39

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 40

Heap when you only need top-k; full sort is wasted work.

## entry 41

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 42

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 43

State compression: bitmask + integer encodes a small subset cheaply.

## entry 44

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 45

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 47

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 48

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 49

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 50

Walk both pointers from each end inward; advance the smaller side.

## entry 51

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 52

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 53

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 54

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 55

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 56

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 58

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 59

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 60

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 61

Articulation points: same DFS as bridges, with a slightly different test.

## entry 62

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 63

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 64

Monotonic stack pops while the new element violates the invariant.

## entry 65

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 66

Monotonic stack pops while the new element violates the invariant.

## entry 67

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 68

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 69

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 71

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 72

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 73

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 74

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 75

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 76

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 77

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 78

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 79

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 80

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 81

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 82

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 83

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 84

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 86

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 87

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 88

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 89

Union-Find with path compression amortizes to near-O(1) per op.

## entry 90

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 91

State compression: bitmask + integer encodes a small subset cheaply.

## entry 92

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 93

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 94

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 95

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 96

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 97

Monotonic stack pops while the new element violates the invariant.

## entry 98

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 99

Union-Find with path compression amortizes to near-O(1) per op.

## entry 100

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 101

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 102

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 103

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 104

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 105

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 106

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 107

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 108

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 109

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 110

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 111

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 112

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 113

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 114

Union-Find with path compression amortizes to near-O(1) per op.

## entry 115

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 116

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 117

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 118

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 119

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 120

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 121

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 122

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 123

Wavelet tree: range k-th element in O(log Σ) time.

## entry 124

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 125

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 126

Monotonic stack pops while the new element violates the invariant.

## entry 127

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 128

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 129

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 130

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 131

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 132

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 133

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 134

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 135

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 136

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 137

Heap when you only need top-k; full sort is wasted work.

## entry 138

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 139

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 140

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 141

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 142

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 143

Greedy by end-time picks the most non-overlapping intervals.

## entry 144

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 145

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 146

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 147

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 148

Greedy by end-time picks the most non-overlapping intervals.

## entry 149

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 150

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 151

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 152

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 153

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 154

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 155

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 156

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 157

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 158

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 159

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 160

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 161

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 162

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 163

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 164

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 165

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 166

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 167

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 168

Walk both pointers from each end inward; advance the smaller side.

## entry 169

StringBuilder: amortize allocation by doubling on grow.

## entry 170

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 171

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 172

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 173

Stable sort matters when a secondary key was set in a prior pass.

## entry 174

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 175

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 176

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 177

Articulation points: same DFS as bridges, with a slightly different test.

## entry 178

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 179

Walk both pointers from each end inward; advance the smaller side.

## entry 180

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 181

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 182

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 183

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 184

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 185

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 186

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 187

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 188

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 189

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 190

Wavelet tree: range k-th element in O(log Σ) time.

## entry 191

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 192

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 193

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 194

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 195

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 196

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 197

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 198

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 199

Euler tour flattens a tree into an array for range-query LCA.

## entry 200

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 201

Stable sort matters when a secondary key was set in a prior pass.

## entry 202

Greedy by end-time picks the most non-overlapping intervals.

## entry 203

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 204

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 205

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 206

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 207

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 208

StringBuilder: amortize allocation by doubling on grow.

## entry 209

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 210

Walk both pointers from each end inward; advance the smaller side.

## entry 211

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 212

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 213

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 214

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 215

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 216

Splay tree: every access splays to the root; amortized O(log n).

## entry 217

Walk both pointers from each end inward; advance the smaller side.

## entry 218

Splay tree: every access splays to the root; amortized O(log n).

## entry 219

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 220

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 221

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 222

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 223

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 224

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 225

LIS via patience: each pile holds the smallest tail of length k.

## entry 226

Union-Find with path compression amortizes to near-O(1) per op.

## entry 227

Union-Find with path compression amortizes to near-O(1) per op.

## entry 228

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 229

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 230

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 231

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 232

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 233

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 234

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 235

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 236

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 237

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 238

State compression: bitmask + integer encodes a small subset cheaply.

## entry 239

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 240

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 241

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 242

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 243

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 244

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 245

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 246

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 247

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 248

Walk both pointers from each end inward; advance the smaller side.

## entry 249

StringBuilder: amortize allocation by doubling on grow.

## entry 250

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 251

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 252

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 253

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 254

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 255

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 256

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 257

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 258

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 259

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 260

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 261

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 262

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 263

Articulation points: same DFS as bridges, with a slightly different test.

## entry 264

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 265

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 266

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 267

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 268

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 269

Monotonic stack pops while the new element violates the invariant.

## entry 270

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 271

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 272

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 273

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 274

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 275

Stable sort matters when a secondary key was set in a prior pass.

## entry 276

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 277

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 278

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 279

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 280

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 281

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 282

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 283

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 284

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 285

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 286

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 287

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 288

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 289

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 290

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 291

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 292

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 293

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 294

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 295

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 296

StringBuilder: amortize allocation by doubling on grow.

## entry 297

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 298

Union-Find with path compression amortizes to near-O(1) per op.

## entry 299

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 300

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 301

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 302

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 303

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 304

Greedy by end-time picks the most non-overlapping intervals.

## entry 305

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 306

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 307

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 308

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 309

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 310

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 311

State compression: bitmask + integer encodes a small subset cheaply.

## entry 312

Stable sort matters when a secondary key was set in a prior pass.

## entry 313

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 314

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 315

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 316

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 317

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 318

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 319

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 320

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 321

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 322

Stable sort matters when a secondary key was set in a prior pass.

## entry 323

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 324

Greedy by end-time picks the most non-overlapping intervals.

## entry 325

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 326

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 327

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 328

Heap when you only need top-k; full sort is wasted work.

## entry 329

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 330

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 331

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 332

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 333

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 334

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 335

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 336

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 337

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 338

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 339

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 340

Euler tour flattens a tree into an array for range-query LCA.

## entry 341

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 342

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 343

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 344

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 345

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 346

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 347

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 348

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 349

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 350

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 351

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 352

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 353

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 354

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 355

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 356

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 357

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 358

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 359

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 360

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 361

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 362

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 363

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 364

Wavelet tree: range k-th element in O(log Σ) time.

## entry 365

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 366

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 367

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 368

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 369

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 370

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
