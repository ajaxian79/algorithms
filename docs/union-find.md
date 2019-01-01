# union-find

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic stack pops while the new element violates the invariant.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Heap when you only need top-k; full sort is wasted work.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

In-place compaction uses two pointers: read advances always, write only on keep.

Morris traversal threads predecessors back to current node — O(1) extra space.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Manacher expands around each center, reusing prior radii via mirror reflection.

Union-Find with path compression amortizes to near-O(1) per op.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

Splay tree: every access splays to the root; amortized O(log n).

## entry 4

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 6

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 8

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 11

Wavelet tree: range k-th element in O(log Σ) time.

## entry 12

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

StringBuilder: amortize allocation by doubling on grow.

## entry 15

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 16

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 17

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 18

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 19

LIS via patience: each pile holds the smallest tail of length k.

## entry 20

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 21

Euler tour flattens a tree into an array for range-query LCA.

## entry 22

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 23

Union-Find with path compression amortizes to near-O(1) per op.

## entry 24

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 25

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 26

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 27

State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 29

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 31

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 32

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 33

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 34

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 35

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 36

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

StringBuilder: amortize allocation by doubling on grow.

## entry 38

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 39

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 41

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 43

Stable sort matters when a secondary key was set in a prior pass.

## entry 44

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

Greedy by end-time picks the most non-overlapping intervals.

## entry 46

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 47

StringBuilder: amortize allocation by doubling on grow.

## entry 48

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 49

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 50

Union-Find with path compression amortizes to near-O(1) per op.

## entry 51

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 52

Greedy by end-time picks the most non-overlapping intervals.

## entry 53

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 54

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 55

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 56

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 57

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 58

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 59

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 60

StringBuilder: amortize allocation by doubling on grow.

## entry 61

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 62

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 63

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 64

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 65

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 66

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 67

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 68

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 69

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 70

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 71

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 72

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 73

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 74

Monotonic stack pops while the new element violates the invariant.

## entry 75

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 76

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 77

Stable sort matters when a secondary key was set in a prior pass.

## entry 78

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 79

Greedy by end-time picks the most non-overlapping intervals.

## entry 80

Stable sort matters when a secondary key was set in a prior pass.

## entry 81

Monotonic stack pops while the new element violates the invariant.

## entry 82

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 83

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 84

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 85

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 86

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 87

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 88

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 89

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 90

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 91

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 92

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 93

Stable sort matters when a secondary key was set in a prior pass.

## entry 94

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 95

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 96

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 98

Heap when you only need top-k; full sort is wasted work.

## entry 99

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 100

Wavelet tree: range k-th element in O(log Σ) time.

## entry 101

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 102

Euler tour flattens a tree into an array for range-query LCA.

## entry 103

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 104

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 105

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 106

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 107

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 108

Splay tree: every access splays to the root; amortized O(log n).

## entry 109

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 110

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 111

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 112

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 113

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 114

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 115

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 116

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 117

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 118

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 119

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 120

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 121

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 122

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 123

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 124

Wavelet tree: range k-th element in O(log Σ) time.

## entry 125

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 126

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 127

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 128

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 129

Greedy by end-time picks the most non-overlapping intervals.

## entry 130

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 131

StringBuilder: amortize allocation by doubling on grow.

## entry 132

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 133

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 134

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 135

Union-Find with path compression amortizes to near-O(1) per op.

## entry 136

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 137

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 138

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 139

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 140

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 141

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 142

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 143

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 144

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 145

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 146

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 147

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 148

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 149

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 150

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 151

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 152

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 153

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 154

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 155

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 156

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 157

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 158

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 159

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 160

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 161

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 162

Heap when you only need top-k; full sort is wasted work.

## entry 163

Splay tree: every access splays to the root; amortized O(log n).

## entry 164

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 165

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 166

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 167

StringBuilder: amortize allocation by doubling on grow.

## entry 168

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 169

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 170

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 171

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 172

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 173

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 174

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 175

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 176

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 177

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 178

Walk both pointers from each end inward; advance the smaller side.

## entry 179

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 180

Greedy by end-time picks the most non-overlapping intervals.

## entry 181

State compression: bitmask + integer encodes a small subset cheaply.

## entry 182

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 183

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 184

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 185

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 186

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 187

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 188

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 189

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 190

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 191

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 192

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 193

Greedy by end-time picks the most non-overlapping intervals.

## entry 194

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 195

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 196

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 197

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 198

Heap when you only need top-k; full sort is wasted work.

## entry 199

Stable sort matters when a secondary key was set in a prior pass.

## entry 200

Union-Find with path compression amortizes to near-O(1) per op.

## entry 201

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 202

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 203

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 204

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 205

Monotonic stack pops while the new element violates the invariant.

## entry 206

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 207

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 208

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 209

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 210

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 211

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 212

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 213

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 214

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 215

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 216

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 217

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 218

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 219

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 220

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 221

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 222

Heap when you only need top-k; full sort is wasted work.

## entry 223

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 224

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 225

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 226

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 227

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 228

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 229

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 230

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 231

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 232

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 233

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 234

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 235

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 236

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 237

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 238

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 239

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 240

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 241

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 242

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 243

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 244

Euler tour flattens a tree into an array for range-query LCA.

## entry 245

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 246

Wavelet tree: range k-th element in O(log Σ) time.

## entry 247

Euler tour flattens a tree into an array for range-query LCA.

## entry 248

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 249

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 250

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 251

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 252

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 253

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 254

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 255

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 256

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 257

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 258

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 259

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 260

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 261

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 262

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 263

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 264

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 265

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 266

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 267

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 268

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 269

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 270

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 271

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 272

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 273

Monotonic stack pops while the new element violates the invariant.

## entry 274

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 275

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 276

Heap when you only need top-k; full sort is wasted work.

## entry 277

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 278

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 279

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 280

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 281

Euler tour flattens a tree into an array for range-query LCA.

## entry 282

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 283

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 284

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 285

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 286

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 287

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 288

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 289

StringBuilder: amortize allocation by doubling on grow.

## entry 290

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 291

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 292

Heap when you only need top-k; full sort is wasted work.

## entry 293

Walk both pointers from each end inward; advance the smaller side.

## entry 294

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 295

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 296

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 297

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 298

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 299

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 300

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 301

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 302

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 303

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 304

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 305

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 306

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 307

State compression: bitmask + integer encodes a small subset cheaply.

## entry 308

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 309

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 310

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 311

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 312

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 313

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 314

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 315

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 316

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
