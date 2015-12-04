# manacher

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

In-place compaction uses two pointers: read advances always, write only on keep.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Merge intervals: sort by start; extend the running interval while overlapping.

Union-Find with path compression amortizes to near-O(1) per op.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Edit distance is LCS with a twist: substitution is a third option at each cell.

LIS via patience: each pile holds the smallest tail of length k.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Morris traversal threads predecessors back to current node — O(1) extra space.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Greedy by end-time picks the most non-overlapping intervals.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Unbounded knapsack: capacity inner ascending allows item reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Stable sort matters when a secondary key was set in a prior pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Heap when you only need top-k; full sort is wasted work.

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5

Euler tour flattens a tree into an array for range-query LCA.

## entry 6

Stable sort matters when a secondary key was set in a prior pass.

## entry 7

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 8

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 12

Wavelet tree: range k-th element in O(log Σ) time.

## entry 13

StringBuilder: amortize allocation by doubling on grow.

## entry 14

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 15

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 16

Greedy by end-time picks the most non-overlapping intervals.

## entry 17

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 18

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 19

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 21

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

Walk both pointers from each end inward; advance the smaller side.

## entry 23

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 25

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 26

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 27

Splay tree: every access splays to the root; amortized O(log n).

## entry 28

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 29

Splay tree: every access splays to the root; amortized O(log n).

## entry 30

Union-Find with path compression amortizes to near-O(1) per op.

## entry 31

State compression: bitmask + integer encodes a small subset cheaply.

## entry 32

Greedy by end-time picks the most non-overlapping intervals.

## entry 33

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 34

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 35

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 36

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 37

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 38

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 39

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 40

Union-Find with path compression amortizes to near-O(1) per op.

## entry 41

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 42

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 43

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 44

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 45

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 46

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 47

Union-Find with path compression amortizes to near-O(1) per op.

## entry 48

Monotonic stack pops while the new element violates the invariant.

## entry 49

Heap when you only need top-k; full sort is wasted work.

## entry 50

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 51

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 52

State compression: bitmask + integer encodes a small subset cheaply.

## entry 53

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 55

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 56

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 57

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 58

Stable sort matters when a secondary key was set in a prior pass.

## entry 59

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 60

Euler tour flattens a tree into an array for range-query LCA.

## entry 61

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 62

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 63

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 64

Euler tour flattens a tree into an array for range-query LCA.

## entry 65

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 66

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 67

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 68

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 69

Union-Find with path compression amortizes to near-O(1) per op.

## entry 70

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 71

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 72

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 73

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 74

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 75

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 76

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 77

Union-Find with path compression amortizes to near-O(1) per op.

## entry 78

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 79

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 80

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 81

Euler tour flattens a tree into an array for range-query LCA.

## entry 82

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 83

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 84

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 85

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 86

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 87

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 88

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 89

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 90

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 91

Euler tour flattens a tree into an array for range-query LCA.

## entry 92

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 93

Splay tree: every access splays to the root; amortized O(log n).

## entry 94

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 95

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 96

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 97

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 98

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 99

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 100

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 101

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 102

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 103

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 104

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 105

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 106

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 107

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 108

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 109

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 110

Monotonic stack pops while the new element violates the invariant.

## entry 111

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 112

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 113

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 114

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 115

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 116

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 117

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 118

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 119

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 120

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 121

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 122

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 123

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 124

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 125

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 126

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 127

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 128

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 129

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 130

Wavelet tree: range k-th element in O(log Σ) time.

## entry 131

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 132

Wavelet tree: range k-th element in O(log Σ) time.

## entry 133

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 134

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 135

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 136

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 137

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 138

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 139

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 140

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 141

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 142

Articulation points: same DFS as bridges, with a slightly different test.

## entry 143

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 144

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 145

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 146

Wavelet tree: range k-th element in O(log Σ) time.

## entry 147

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 148

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 149

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 150

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 151

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 152

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 153

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 154

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 155

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 156

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 157

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 158

Wavelet tree: range k-th element in O(log Σ) time.

## entry 159

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 160

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 161

Wavelet tree: range k-th element in O(log Σ) time.

## entry 162

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 163

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 164

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 165

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 166

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 167

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 168

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 169

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 170

Articulation points: same DFS as bridges, with a slightly different test.

## entry 171

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 172

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 173

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 174

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 175

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 176

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 177

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 178

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 179

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 180

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 181

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 182

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 183

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 184

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 185

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 186

State compression: bitmask + integer encodes a small subset cheaply.

## entry 187

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 188

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 189

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 190

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 191

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 192

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 193

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 194

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 195

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 196

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 197

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 198

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 199

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 200

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 201

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 202

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 203

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 204

State compression: bitmask + integer encodes a small subset cheaply.

## entry 205

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 206

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 207

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 208

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 209

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 210

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 211

Heap when you only need top-k; full sort is wasted work.

## entry 212

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 213

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 214

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 215

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 216

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 217

Splay tree: every access splays to the root; amortized O(log n).

## entry 218

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 219

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 220

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 221

Splay tree: every access splays to the root; amortized O(log n).

## entry 222

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 223

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 224

Monotonic stack pops while the new element violates the invariant.

## entry 225

Articulation points: same DFS as bridges, with a slightly different test.

## entry 226

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 227

Articulation points: same DFS as bridges, with a slightly different test.

## entry 228

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 229

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 230

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 231

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 232

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 233

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 234

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 235

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 236

StringBuilder: amortize allocation by doubling on grow.

## entry 237

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 238

Wavelet tree: range k-th element in O(log Σ) time.

## entry 239

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 240

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 241

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 242

State compression: bitmask + integer encodes a small subset cheaply.

## entry 243

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 244

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 245

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 246

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 247

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 248

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 249

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 250

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 251

Walk both pointers from each end inward; advance the smaller side.

## entry 252

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 253

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 254

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 255

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 256

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 257

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 258

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 259

Articulation points: same DFS as bridges, with a slightly different test.

## entry 260

Articulation points: same DFS as bridges, with a slightly different test.

## entry 261

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 262

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 263

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 264

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 265

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 266

Splay tree: every access splays to the root; amortized O(log n).

## entry 267

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 268

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 269

Splay tree: every access splays to the root; amortized O(log n).

## entry 270

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 271

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 272

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 273

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 274

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 275

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 276

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 277

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 278

Articulation points: same DFS as bridges, with a slightly different test.

## entry 279

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 280

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 281

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 282

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 283

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 284

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 285

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 286

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 287

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 288

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 289

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 290

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 291

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 292

Articulation points: same DFS as bridges, with a slightly different test.

## entry 293

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 294

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 295

LIS via patience: each pile holds the smallest tail of length k.

## entry 296

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 297

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 298

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 299

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 300

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 301

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 302

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 303

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 304

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 305

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 306

Articulation points: same DFS as bridges, with a slightly different test.

## entry 307

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 308

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 309

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 310

Walk both pointers from each end inward; advance the smaller side.

## entry 311

Monotonic stack pops while the new element violates the invariant.

## entry 312

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 313

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 314

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 315

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 316

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 317

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 318

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 319

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 320

Stable sort matters when a secondary key was set in a prior pass.

## entry 321

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 322

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 323

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 324

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 325

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 326

Stable sort matters when a secondary key was set in a prior pass.

## entry 327

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 328

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 329

LIS via patience: each pile holds the smallest tail of length k.

## entry 330

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 331

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 332

Euler tour flattens a tree into an array for range-query LCA.

## entry 333

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 334

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 335

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 336

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 337

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 338

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 339

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 340

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 341

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 342

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 343

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 344

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 345

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 346

StringBuilder: amortize allocation by doubling on grow.

## entry 347

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 348

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 349

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 350

Greedy by end-time picks the most non-overlapping intervals.

## entry 351

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 352

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 353

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 354

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 355

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 356

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 357

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 358

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 359

Walk both pointers from each end inward; advance the smaller side.

## entry 360

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 361

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 362

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 363

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 364

StringBuilder: amortize allocation by doubling on grow.

## entry 365

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 366

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 367

Union-Find with path compression amortizes to near-O(1) per op.

## entry 368

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 369

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 370

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 371

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 372

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 373

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 374

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 375

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 376

Wavelet tree: range k-th element in O(log Σ) time.

## entry 377

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 378

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 379

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 380

Articulation points: same DFS as bridges, with a slightly different test.

## entry 381

Monotonic stack pops while the new element violates the invariant.

## entry 382

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 383

Union-Find with path compression amortizes to near-O(1) per op.

## entry 384

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 385

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 386

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 387

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 388

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 389

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 390

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 391

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 392

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 393

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 394

Union-Find with path compression amortizes to near-O(1) per op.

## entry 395

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 396

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 397

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 398

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 399

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 400

State compression: bitmask + integer encodes a small subset cheaply.

## entry 401

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 402

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 403

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 404

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 405

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 406

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 407

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 408

Stable sort matters when a secondary key was set in a prior pass.

## entry 409

Stable sort matters when a secondary key was set in a prior pass.

## entry 410

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 411

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 412

LIS via patience: each pile holds the smallest tail of length k.

## entry 413

Union-Find with path compression amortizes to near-O(1) per op.

## entry 414

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 415

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 416

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 417

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 418

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 419

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 420

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 421

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 422

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 423

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 424

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 425

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 426

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 427

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 428

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 429

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 430

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 431

LIS via patience: each pile holds the smallest tail of length k.

## entry 432

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 433

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 434

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 435

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 436

Splay tree: every access splays to the root; amortized O(log n).

## entry 437

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 438

StringBuilder: amortize allocation by doubling on grow.

## entry 439

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 440

State compression: bitmask + integer encodes a small subset cheaply.

## entry 441

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 442

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 443

Stable sort matters when a secondary key was set in a prior pass.

## entry 444

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 445

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 446

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 447

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 448

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 449

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 450

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 451

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 452

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 453

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 454

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 455

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 456

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 457

Greedy by end-time picks the most non-overlapping intervals.

## entry 458

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 459

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 460

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 461

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 462

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 463

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 464

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 465

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 466

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 467

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 468

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 469

Union-Find with path compression amortizes to near-O(1) per op.

## entry 470

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 471

Stable sort matters when a secondary key was set in a prior pass.

## entry 472

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 473

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 474

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 475

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 476

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 477

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 478

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 479

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 480

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 481

Walk both pointers from each end inward; advance the smaller side.

## entry 482

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 483

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 484

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 485

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 486

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 487

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 488

Union-Find with path compression amortizes to near-O(1) per op.

## entry 489

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 490

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
