# bitmask

Morris traversal threads predecessors back to current node — O(1) extra space.

Union-Find with path compression amortizes to near-O(1) per op.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LIS via patience: each pile holds the smallest tail of length k.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Walk both pointers from each end inward; advance the smaller side.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Manacher expands around each center, reusing prior radii via mirror reflection.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Merge intervals: sort by start; extend the running interval while overlapping.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Heap when you only need top-k; full sort is wasted work.

In-place compaction uses two pointers: read advances always, write only on keep.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Greedy by end-time picks the most non-overlapping intervals.

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Greedy by end-time picks the most non-overlapping intervals.

## entry 3

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 8

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 9

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 10

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 11

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 13

Wavelet tree: range k-th element in O(log Σ) time.

## entry 14

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 15

LIS via patience: each pile holds the smallest tail of length k.

## entry 16

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 17

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 18

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 19

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 20

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 21

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 22

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 23

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 25

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 27

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 28

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 32

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 33

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 34

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 35

Stable sort matters when a secondary key was set in a prior pass.

## entry 36

LIS via patience: each pile holds the smallest tail of length k.

## entry 37

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 38

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 39

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 40

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 41

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 42

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 43

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 44

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 45

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 47

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 48

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 49

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 50

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 51

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 53

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 54

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 56

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 57

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 59

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 60

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 61

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 62

Stable sort matters when a secondary key was set in a prior pass.

## entry 63

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 64

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 66

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 67

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 69

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 70

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 71

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 72

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 73

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 74

Monotonic stack pops while the new element violates the invariant.

## entry 75

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 76

Union-Find with path compression amortizes to near-O(1) per op.

## entry 77

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 78

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 79

Walk both pointers from each end inward; advance the smaller side.

## entry 80

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 81

Wavelet tree: range k-th element in O(log Σ) time.

## entry 82

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 83

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 84

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 85

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 86

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 87

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 88

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 89

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 90

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 91

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 92

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 93

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 94

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 96

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 97

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 98

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 99

Monotonic stack pops while the new element violates the invariant.

## entry 100

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 101

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 102

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 103

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 104

StringBuilder: amortize allocation by doubling on grow.

## entry 105

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 106

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 107

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 108

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 109

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 110

Articulation points: same DFS as bridges, with a slightly different test.

## entry 111

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

Articulation points: same DFS as bridges, with a slightly different test.

## entry 113

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 114

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 115

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 116

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 117

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 118

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 119

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 120

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 121

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 122

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 123

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 124

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 125

Union-Find with path compression amortizes to near-O(1) per op.

## entry 126

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 127

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 128

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 129

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 130

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 131

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 132

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 133

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 134

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 135

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 136

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 137

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 138

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 139

State compression: bitmask + integer encodes a small subset cheaply.

## entry 140

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 141

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 142

State compression: bitmask + integer encodes a small subset cheaply.

## entry 143

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 144

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 145

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 146

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 147

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 148

Stable sort matters when a secondary key was set in a prior pass.

## entry 149

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 150

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 151

Heap when you only need top-k; full sort is wasted work.

## entry 152

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 153

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 154

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 155

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 156

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 157

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 158

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 159

LIS via patience: each pile holds the smallest tail of length k.

## entry 160

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 161

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 162

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 163

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 164

Wavelet tree: range k-th element in O(log Σ) time.

## entry 165

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 166

Stable sort matters when a secondary key was set in a prior pass.

## entry 167

Articulation points: same DFS as bridges, with a slightly different test.

## entry 168

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 169

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 170

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 171

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 172

Heap when you only need top-k; full sort is wasted work.

## entry 173

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 174

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 175

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 176

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 177

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 178

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 179

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 180

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 181

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 182

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 183

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 184

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 185

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 186

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 187

Splay tree: every access splays to the root; amortized O(log n).

## entry 188

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 189

Articulation points: same DFS as bridges, with a slightly different test.

## entry 190

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 191

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 192

Union-Find with path compression amortizes to near-O(1) per op.

## entry 193

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 194

StringBuilder: amortize allocation by doubling on grow.

## entry 195

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 196

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 197

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 198

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 199

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 200

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 201

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 202

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 203

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 204

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 205

Union-Find with path compression amortizes to near-O(1) per op.

## entry 206

Heap when you only need top-k; full sort is wasted work.

## entry 207

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 208

LIS via patience: each pile holds the smallest tail of length k.

## entry 209

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 210

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 211

Union-Find with path compression amortizes to near-O(1) per op.

## entry 212

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 213

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 214

Walk both pointers from each end inward; advance the smaller side.

## entry 215

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 216

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 217

State compression: bitmask + integer encodes a small subset cheaply.

## entry 218

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 219

Union-Find with path compression amortizes to near-O(1) per op.

## entry 220

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 221

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 222

Walk both pointers from each end inward; advance the smaller side.

## entry 223

Articulation points: same DFS as bridges, with a slightly different test.

## entry 224

Heap when you only need top-k; full sort is wasted work.

## entry 225

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 226

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 227

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 228

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 229

Greedy by end-time picks the most non-overlapping intervals.

## entry 230

Walk both pointers from each end inward; advance the smaller side.

## entry 231

Greedy by end-time picks the most non-overlapping intervals.

## entry 232

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 233

StringBuilder: amortize allocation by doubling on grow.

## entry 234

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 235

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 236

Walk both pointers from each end inward; advance the smaller side.

## entry 237

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 238

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 239

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 240

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 241

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 242

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 243

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 244

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 245

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 246

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 247

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 248

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 249

Euler tour flattens a tree into an array for range-query LCA.

## entry 250

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 251

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 252

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 253

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 254

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 255

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 256

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 257

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 258

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 259

Articulation points: same DFS as bridges, with a slightly different test.

## entry 260

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 261

StringBuilder: amortize allocation by doubling on grow.

## entry 262

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 263

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 264

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 265

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 266

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 267

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 268

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 269

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 270

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 271

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 272

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 273

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 274

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 275

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 276

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 277

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 278

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 279

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 280

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 281

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 282

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 283

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 284

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 285

StringBuilder: amortize allocation by doubling on grow.

## entry 286

State compression: bitmask + integer encodes a small subset cheaply.

## entry 287

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 288

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 289

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 290

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 291

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 292

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 293

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 294

Walk both pointers from each end inward; advance the smaller side.

## entry 295

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 296

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 297

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 298

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 299

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 300

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 301

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 302

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 303

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 304

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 305

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 306

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 307

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 308

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 309

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 310

State compression: bitmask + integer encodes a small subset cheaply.

## entry 311

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 312

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 313

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 314

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 315

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 316

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 317

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 318

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 319

Wavelet tree: range k-th element in O(log Σ) time.

## entry 320

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 321

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 322

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 323

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 324

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 325

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 326

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 327

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 328

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 329

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 330

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 331

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 332

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 333

StringBuilder: amortize allocation by doubling on grow.

## entry 334

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 335

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 336

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 337

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 338

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 339

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 340

Union-Find with path compression amortizes to near-O(1) per op.

## entry 341

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 342

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 343

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 344

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 345

State compression: bitmask + integer encodes a small subset cheaply.

## entry 346

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 347

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 348

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 349

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 350

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 351

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 352

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 353

State compression: bitmask + integer encodes a small subset cheaply.

## entry 354

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 355

Articulation points: same DFS as bridges, with a slightly different test.

## entry 356

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 357

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 358

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 359

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 360

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 361

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 362

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 363

Union-Find with path compression amortizes to near-O(1) per op.

## entry 364

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 365

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 366

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 367

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 368

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 369

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 370

Heap when you only need top-k; full sort is wasted work.

## entry 371

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 372

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 373

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 374

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 375

LIS via patience: each pile holds the smallest tail of length k.

## entry 376

Splay tree: every access splays to the root; amortized O(log n).

## entry 377

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 378

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 379

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 380

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 381

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 382

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 383

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 384

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 385

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 386

StringBuilder: amortize allocation by doubling on grow.

## entry 387

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 388

Greedy by end-time picks the most non-overlapping intervals.

## entry 389

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 390

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 391

State compression: bitmask + integer encodes a small subset cheaply.

## entry 392

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 393

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 394

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 395

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 396

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 397

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 398

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 399

Wavelet tree: range k-th element in O(log Σ) time.

## entry 400

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 401

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 402

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 403

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 404

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 405

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 406

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 407

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 408

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 409

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 410

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 411

StringBuilder: amortize allocation by doubling on grow.

## entry 412

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 413

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 414

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 415

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 416

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 417

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 418

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 419

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 420

Wavelet tree: range k-th element in O(log Σ) time.

## entry 421

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 422

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 423

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 424

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 425

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 426

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 427

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 428

LIS via patience: each pile holds the smallest tail of length k.

## entry 429

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 430

Greedy by end-time picks the most non-overlapping intervals.

## entry 431

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 432

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 433

Stable sort matters when a secondary key was set in a prior pass.

## entry 434

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 435

Articulation points: same DFS as bridges, with a slightly different test.

## entry 436

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 437

Walk both pointers from each end inward; advance the smaller side.

## entry 438

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 439

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 440

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 441

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 442

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 443

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 444

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 445

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 446

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 447

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 448

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 449

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 450

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 451

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 452

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 453

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 454

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 455

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 456

State compression: bitmask + integer encodes a small subset cheaply.

## entry 457

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 458

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 459

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 460

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 461

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 462

Wavelet tree: range k-th element in O(log Σ) time.

## entry 463

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 464

Heap when you only need top-k; full sort is wasted work.

## entry 465

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 466

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 467

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 468

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 469

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 470

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 471

Euler tour flattens a tree into an array for range-query LCA.

## entry 472

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 473

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 474

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 475

Wavelet tree: range k-th element in O(log Σ) time.

## entry 476

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 477

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 478

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 479

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 480

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 481

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 482

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 483

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 484

Euler tour flattens a tree into an array for range-query LCA.

## entry 485

LIS via patience: each pile holds the smallest tail of length k.

## entry 486

Union-Find with path compression amortizes to near-O(1) per op.

## entry 487

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 488

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 489

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 490

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 491

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 492

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 493

LIS via patience: each pile holds the smallest tail of length k.

## entry 494

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 495

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 496

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
