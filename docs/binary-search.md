# binary-search

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LIS via patience: each pile holds the smallest tail of length k.

Edit distance is LCS with a twist: substitution is a third option at each cell.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Morris traversal threads predecessors back to current node — O(1) extra space.

Monotonic stack pops while the new element violates the invariant.

Heap when you only need top-k; full sort is wasted work.

In-place compaction uses two pointers: read advances always, write only on keep.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Union-Find with path compression amortizes to near-O(1) per op.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3

Stable sort matters when a secondary key was set in a prior pass.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

State compression: bitmask + integer encodes a small subset cheaply.

## entry 7

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 8

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 11

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 14

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 15

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 16

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

Articulation points: same DFS as bridges, with a slightly different test.

## entry 18

StringBuilder: amortize allocation by doubling on grow.

## entry 19

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

Euler tour flattens a tree into an array for range-query LCA.

## entry 21

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 22

Walk both pointers from each end inward; advance the smaller side.

## entry 23

Walk both pointers from each end inward; advance the smaller side.

## entry 24

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 25

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 26

Walk both pointers from each end inward; advance the smaller side.

## entry 27

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 28

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 29

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 32

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 33

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 34

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 35

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 36

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 39

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 40

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 41

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 42

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 45

Splay tree: every access splays to the root; amortized O(log n).

## entry 46

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 47

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 48

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 49

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 50

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 51

Walk both pointers from each end inward; advance the smaller side.

## entry 52

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 53

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 54

StringBuilder: amortize allocation by doubling on grow.

## entry 55

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 56

Greedy by end-time picks the most non-overlapping intervals.

## entry 57

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 59

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 60

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 61

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 62

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 63

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 64

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 65

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 66

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 67

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 68

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 69

Heap when you only need top-k; full sort is wasted work.

## entry 70

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 71

Monotonic stack pops while the new element violates the invariant.

## entry 72

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 73

Wavelet tree: range k-th element in O(log Σ) time.

## entry 74

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 75

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 76

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 77

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 78

StringBuilder: amortize allocation by doubling on grow.

## entry 79

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 80

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 81

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 82

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 83

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 84

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 85

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 86

Stable sort matters when a secondary key was set in a prior pass.

## entry 87

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 88

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 89

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 90

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 92

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 93

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 94

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 95

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 96

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 97

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 98

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 99

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 100

Walk both pointers from each end inward; advance the smaller side.

## entry 101

LIS via patience: each pile holds the smallest tail of length k.

## entry 102

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 104

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 105

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 106

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 108

Walk both pointers from each end inward; advance the smaller side.

## entry 109

Euler tour flattens a tree into an array for range-query LCA.

## entry 110

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 111

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 112

Splay tree: every access splays to the root; amortized O(log n).

## entry 113

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 115

Wavelet tree: range k-th element in O(log Σ) time.

## entry 116

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 117

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 118

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 119

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 120

Greedy by end-time picks the most non-overlapping intervals.

## entry 121

StringBuilder: amortize allocation by doubling on grow.

## entry 122

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 123

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 124

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 125

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 126

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 127

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 128

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 129

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 130

Union-Find with path compression amortizes to near-O(1) per op.

## entry 131

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 132

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 133

Greedy by end-time picks the most non-overlapping intervals.

## entry 134

State compression: bitmask + integer encodes a small subset cheaply.

## entry 135

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 136

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 137

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 138

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 139

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 140

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 141

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 142

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 143

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 144

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 145

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 146

Walk both pointers from each end inward; advance the smaller side.

## entry 147

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 148

Splay tree: every access splays to the root; amortized O(log n).

## entry 149

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 150

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 151

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 152

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 153

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 154

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 155

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 156

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 157

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 158

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 159

Heap when you only need top-k; full sort is wasted work.

## entry 160

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 161

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 162

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 163

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 164

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 165

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 166

Splay tree: every access splays to the root; amortized O(log n).

## entry 167

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 168

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 169

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 170

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 171

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 172

StringBuilder: amortize allocation by doubling on grow.

## entry 173

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 174

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 175

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 176

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 177

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 178

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 179

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 180

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 181

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 182

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 183

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 184

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 185

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 186

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 187

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 188

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 189

Splay tree: every access splays to the root; amortized O(log n).

## entry 190

Monotonic stack pops while the new element violates the invariant.

## entry 191

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 192

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 193

Stable sort matters when a secondary key was set in a prior pass.

## entry 194

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 195

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 196

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 197

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 198

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 199

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 200

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 201

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 202

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 203

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 204

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 205

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 206

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 207

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 208

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 209

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 210

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 211

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 212

Stable sort matters when a secondary key was set in a prior pass.

## entry 213

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 214

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 215

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 216

Articulation points: same DFS as bridges, with a slightly different test.

## entry 217

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 218

Heap when you only need top-k; full sort is wasted work.

## entry 219

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 220

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 221

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 222

Articulation points: same DFS as bridges, with a slightly different test.

## entry 223

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 224

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 225

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 226

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 227

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 228

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 229

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 230

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 231

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 232

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 233

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 234

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 235

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 236

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 237

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 238

Walk both pointers from each end inward; advance the smaller side.

## entry 239

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 240

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 241

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 242

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 243

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 244

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 245

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 246

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 247

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 248

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 249

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 250

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 251

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 252

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 253

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 254

StringBuilder: amortize allocation by doubling on grow.

## entry 255

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 256

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 257

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 258

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 259

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 260

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 261

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 262

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 263

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 264

Walk both pointers from each end inward; advance the smaller side.

## entry 265

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 266

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 267

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 268

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 269

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 270

Monotonic stack pops while the new element violates the invariant.

## entry 271

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 272

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 273

Wavelet tree: range k-th element in O(log Σ) time.

## entry 274

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 275

Stable sort matters when a secondary key was set in a prior pass.

## entry 276

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 277

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 278

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 279

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 280

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 281

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 282

Wavelet tree: range k-th element in O(log Σ) time.

## entry 283

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 284

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 285

Monotonic stack pops while the new element violates the invariant.

## entry 286

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 287

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 288

Euler tour flattens a tree into an array for range-query LCA.

## entry 289

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 290

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 291

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 292

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 293

Stable sort matters when a secondary key was set in a prior pass.

## entry 294

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 295

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 296

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 297

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 298

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 299

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 300

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 301

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 302

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 303

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 304

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 305

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 306

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 307

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 308

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 309

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 310

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 311

LIS via patience: each pile holds the smallest tail of length k.

## entry 312

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 313

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 314

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 315

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 316

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 317

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 318

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 319

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 320

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 321

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 322

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 323

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 324

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 325

Euler tour flattens a tree into an array for range-query LCA.

## entry 326

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 327

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 328

Stable sort matters when a secondary key was set in a prior pass.

## entry 329

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 330

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 331

Articulation points: same DFS as bridges, with a slightly different test.

## entry 332

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 333

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 334

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 335

Splay tree: every access splays to the root; amortized O(log n).

## entry 336

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 337

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 338

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 339

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 340

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 341

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 342

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 343

Walk both pointers from each end inward; advance the smaller side.

## entry 344

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 345

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 346

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 347

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 348

Heap when you only need top-k; full sort is wasted work.

## entry 349

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 350

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 351

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 352

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 353

Greedy by end-time picks the most non-overlapping intervals.

## entry 354

Union-Find with path compression amortizes to near-O(1) per op.

## entry 355

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 356

Euler tour flattens a tree into an array for range-query LCA.

## entry 357

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 358

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 359

Greedy by end-time picks the most non-overlapping intervals.

## entry 360

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 361

Union-Find with path compression amortizes to near-O(1) per op.

## entry 362

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 363

StringBuilder: amortize allocation by doubling on grow.

## entry 364

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 365

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 366

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 367

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 368

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 369

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 370

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 371

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 372

Heap when you only need top-k; full sort is wasted work.

## entry 373

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 374

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 375

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 376

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 377

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 378

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 379

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 380

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 381

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 382

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 383

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 384

Monotonic stack pops while the new element violates the invariant.

## entry 385

LIS via patience: each pile holds the smallest tail of length k.

## entry 386

Stable sort matters when a secondary key was set in a prior pass.

## entry 387

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 388

Heap when you only need top-k; full sort is wasted work.

## entry 389

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 390

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 391

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 392

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 393

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 394

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 395

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 396

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 397

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 398

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 399

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 400

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 401

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 402

Heap when you only need top-k; full sort is wasted work.

## entry 403

Walk both pointers from each end inward; advance the smaller side.

## entry 404

State compression: bitmask + integer encodes a small subset cheaply.

## entry 405

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 406

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 407

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 408

Stable sort matters when a secondary key was set in a prior pass.

## entry 409

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 410

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 411

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 412

Greedy by end-time picks the most non-overlapping intervals.

## entry 413

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 414

Articulation points: same DFS as bridges, with a slightly different test.

## entry 415

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 416

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 417

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 418

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 419

Wavelet tree: range k-th element in O(log Σ) time.

## entry 420

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 421

Stable sort matters when a secondary key was set in a prior pass.
