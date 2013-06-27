# kmp

LIS via patience: each pile holds the smallest tail of length k.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Edit distance is LCS with a twist: substitution is a third option at each cell.

In-place compaction uses two pointers: read advances always, write only on keep.

Union-Find with path compression amortizes to near-O(1) per op.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Morris traversal threads predecessors back to current node — O(1) extra space.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Walk both pointers from each end inward; advance the smaller side.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Greedy by end-time picks the most non-overlapping intervals.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Stable sort matters when a secondary key was set in a prior pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Manacher expands around each center, reusing prior radii via mirror reflection.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Heap when you only need top-k; full sort is wasted work.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Monotonic stack pops while the new element violates the invariant.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3

Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 7

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 8

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 14

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 15

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 16

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 17

Stable sort matters when a secondary key was set in a prior pass.

## entry 18

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 19

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 21

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 22

Euler tour flattens a tree into an array for range-query LCA.

## entry 23

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 24

Walk both pointers from each end inward; advance the smaller side.

## entry 25

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 27

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 28

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 29

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 30

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 31

Walk both pointers from each end inward; advance the smaller side.

## entry 32

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 33

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 34

Stable sort matters when a secondary key was set in a prior pass.

## entry 35

Wavelet tree: range k-th element in O(log Σ) time.

## entry 36

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 37

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 38

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 39

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 40

Splay tree: every access splays to the root; amortized O(log n).

## entry 41

Heap when you only need top-k; full sort is wasted work.

## entry 42

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 43

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 44

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 45

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 46

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 48

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 49

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 50

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 51

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 52

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 53

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 54

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 56

Monotonic stack pops while the new element violates the invariant.

## entry 57

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 58

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 59

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 60

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 62

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 63

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 64

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 65

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 66

Wavelet tree: range k-th element in O(log Σ) time.

## entry 67

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 68

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 69

Heap when you only need top-k; full sort is wasted work.

## entry 70

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 71

Union-Find with path compression amortizes to near-O(1) per op.

## entry 72

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 73

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 74

State compression: bitmask + integer encodes a small subset cheaply.

## entry 75

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 76

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 77

Splay tree: every access splays to the root; amortized O(log n).

## entry 78

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 80

Stable sort matters when a secondary key was set in a prior pass.

## entry 81

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 82

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 83

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 84

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 85

State compression: bitmask + integer encodes a small subset cheaply.

## entry 86

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 87

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 88

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 89

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 90

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 91

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 92

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 93

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 94

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 95

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 96

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 97

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 98

LIS via patience: each pile holds the smallest tail of length k.

## entry 99

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 100

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 101

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 102

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 103

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 104

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 105

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 106

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 107

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 108

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 109

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

State compression: bitmask + integer encodes a small subset cheaply.

## entry 111

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 112

Euler tour flattens a tree into an array for range-query LCA.

## entry 113

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 114

Splay tree: every access splays to the root; amortized O(log n).

## entry 115

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 116

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 117

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 118

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 119

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 120

Monotonic stack pops while the new element violates the invariant.

## entry 121

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 122

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 123

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 124

Euler tour flattens a tree into an array for range-query LCA.

## entry 125

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 126

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 127

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 128

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 129

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 130

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 131

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 132

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 133

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 134

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 135

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 136

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 137

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 138

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 139

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 140

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 141

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 142

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 143

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 144

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 145

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 146

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 147

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 148

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 149

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 150

Articulation points: same DFS as bridges, with a slightly different test.

## entry 151

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 152

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 153

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 154

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 155

Wavelet tree: range k-th element in O(log Σ) time.

## entry 156

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 157

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 158

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 159

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 160

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 161

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 163

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 164

Walk both pointers from each end inward; advance the smaller side.

## entry 165

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 166

LIS via patience: each pile holds the smallest tail of length k.

## entry 167

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 168

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 169

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 170

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 171

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 172

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 173

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 174

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 175

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 176

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 177

Splay tree: every access splays to the root; amortized O(log n).

## entry 178

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 179

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 180

Splay tree: every access splays to the root; amortized O(log n).

## entry 181

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 182

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 183

Stable sort matters when a secondary key was set in a prior pass.

## entry 184

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 185

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 186

State compression: bitmask + integer encodes a small subset cheaply.

## entry 187

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 188

Monotonic stack pops while the new element violates the invariant.

## entry 189

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 190

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 191

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 192

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 193

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 194

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 195

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 196

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 197

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 198

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 199

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 200

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 201

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 202

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 203

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 204

LIS via patience: each pile holds the smallest tail of length k.

## entry 205

Euler tour flattens a tree into an array for range-query LCA.

## entry 206

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 207

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 208

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 209

Euler tour flattens a tree into an array for range-query LCA.

## entry 210

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 211

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 212

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 213

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 214

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 215

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 216

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 217

Heap when you only need top-k; full sort is wasted work.

## entry 218

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 219

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 220

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 221

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 222

State compression: bitmask + integer encodes a small subset cheaply.

## entry 223

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 224

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 225

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 226

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 227

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 228

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 229

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 230

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 231

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 232

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 233

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 234

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 235

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 236

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 237

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 238

LIS via patience: each pile holds the smallest tail of length k.

## entry 239

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 240

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 241

LIS via patience: each pile holds the smallest tail of length k.

## entry 242

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 243

State compression: bitmask + integer encodes a small subset cheaply.

## entry 244

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 245

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 246

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 247

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 248

StringBuilder: amortize allocation by doubling on grow.

## entry 249

LIS via patience: each pile holds the smallest tail of length k.

## entry 250

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 251

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 252

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 253

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 254

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 255

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 256

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 257

Monotonic stack pops while the new element violates the invariant.

## entry 258

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 259

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 260

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 261

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 262

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 263

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 264

Stable sort matters when a secondary key was set in a prior pass.

## entry 265

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 266

Stable sort matters when a secondary key was set in a prior pass.

## entry 267

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 268

Walk both pointers from each end inward; advance the smaller side.

## entry 269

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 270

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 271

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 272

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 273

State compression: bitmask + integer encodes a small subset cheaply.

## entry 274

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 275

Monotonic stack pops while the new element violates the invariant.

## entry 276

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 277

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 278

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 279

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 280

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 281

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 282

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 283

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 284

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 285

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 286

Monotonic stack pops while the new element violates the invariant.

## entry 287

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 288

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 289

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 290

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 291

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 292

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 293

Greedy by end-time picks the most non-overlapping intervals.

## entry 294

LIS via patience: each pile holds the smallest tail of length k.

## entry 295

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 296

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 297

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 298

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 299

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 300

Union-Find with path compression amortizes to near-O(1) per op.

## entry 301

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 302

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 303

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 304

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 305

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 306

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 307

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 308

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 309

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 310

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 311

StringBuilder: amortize allocation by doubling on grow.

## entry 312

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 313

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 314

Union-Find with path compression amortizes to near-O(1) per op.

## entry 315

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 316

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 317

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 318

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 319

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 320

Greedy by end-time picks the most non-overlapping intervals.

## entry 321

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 322

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 323

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 324

StringBuilder: amortize allocation by doubling on grow.

## entry 325

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 326

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 327

State compression: bitmask + integer encodes a small subset cheaply.

## entry 328

LIS via patience: each pile holds the smallest tail of length k.

## entry 329

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 330

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 331

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 332

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 333

Stable sort matters when a secondary key was set in a prior pass.

## entry 334

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 335

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 336

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 337

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 338

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 339

Stable sort matters when a secondary key was set in a prior pass.

## entry 340

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 341

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 342

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 343

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 344

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 345

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 346

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 347

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 348

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 349

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 350

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 351

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 352

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 353

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 354

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 355

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 356

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 357

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 358

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 359

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 360

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 361

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 362

LIS via patience: each pile holds the smallest tail of length k.

## entry 363

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 364

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 365

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 366

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 367

Wavelet tree: range k-th element in O(log Σ) time.

## entry 368

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 369

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 370

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 371

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 372

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 373

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 374

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 375

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 376

Articulation points: same DFS as bridges, with a slightly different test.

## entry 377

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 378

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 379

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 380

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 381

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 382

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 383

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 384

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 385

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 386

Heap when you only need top-k; full sort is wasted work.

## entry 387

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 388

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 389

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 390

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 391

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 392

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 393

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 394

Wavelet tree: range k-th element in O(log Σ) time.

## entry 395

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 396

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 397

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 398

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 399

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 400

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 401

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 402

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 403

LIS via patience: each pile holds the smallest tail of length k.

## entry 404

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 405

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 406

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 407

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 408

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 409

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 410

StringBuilder: amortize allocation by doubling on grow.

## entry 411

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 412

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 413

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 414

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 415

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 416

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 417

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 418

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 419

Monotonic stack pops while the new element violates the invariant.

## entry 420

State compression: bitmask + integer encodes a small subset cheaply.

## entry 421

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 422

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 423

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 424

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 425

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 426

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 427

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 428

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 429

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 430

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 431

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 432

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 433

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 434

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 435

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 436

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 437

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 438

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 439

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 440

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 441

Walk both pointers from each end inward; advance the smaller side.

## entry 442

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 443

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 444

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 445

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 446

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 447

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 448

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 449

Union-Find with path compression amortizes to near-O(1) per op.

## entry 450

Euler tour flattens a tree into an array for range-query LCA.

## entry 451

Splay tree: every access splays to the root; amortized O(log n).

## entry 452

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 453

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 454

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 455

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 456

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 457

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 458

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 459

Articulation points: same DFS as bridges, with a slightly different test.

## entry 460

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 461

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 462

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 463

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 464

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 465

Articulation points: same DFS as bridges, with a slightly different test.

## entry 466

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 467

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 468

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 469

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 470

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 471

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 472

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 473

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 474

Heap when you only need top-k; full sort is wasted work.

## entry 475

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 476

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 477

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 478

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 479

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 480

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 481

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 482

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 483

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 484

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 485

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 486

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 487

Euler tour flattens a tree into an array for range-query LCA.

## entry 488

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 489

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 490

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 491

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 492

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 493

State compression: bitmask + integer encodes a small subset cheaply.

## entry 494

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 495

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 496

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 497

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 498

State compression: bitmask + integer encodes a small subset cheaply.

## entry 499

Greedy by end-time picks the most non-overlapping intervals.

## entry 500

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 501

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 502

Stable sort matters when a secondary key was set in a prior pass.

## entry 503

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 504

Splay tree: every access splays to the root; amortized O(log n).

## entry 505

Union-Find with path compression amortizes to near-O(1) per op.

## entry 506

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 507

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 508

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 509

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 510

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 511

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 512

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 513

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 514

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 515

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 516

Walk both pointers from each end inward; advance the smaller side.

## entry 517

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 518

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 519

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 520

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 521

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 522

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 523

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 524

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 525

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 526

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 527

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 528

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 529

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 530

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 531

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 532

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 533

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 534

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 535

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 536

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 537

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 538

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 539

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 540

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 541

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 542

Greedy by end-time picks the most non-overlapping intervals.

## entry 543

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 544

Walk both pointers from each end inward; advance the smaller side.
