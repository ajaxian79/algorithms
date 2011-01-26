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

## entry 317

Articulation points: same DFS as bridges, with a slightly different test.

## entry 318

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 319

Euler tour flattens a tree into an array for range-query LCA.

## entry 320

Stable sort matters when a secondary key was set in a prior pass.

## entry 321

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 322

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 323

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 324

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 325

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 326

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 327

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 328

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 329

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 330

Walk both pointers from each end inward; advance the smaller side.

## entry 331

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 332

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 333

Splay tree: every access splays to the root; amortized O(log n).

## entry 334

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 335

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 336

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 337

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 338

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 339

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 340

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 341

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 342

Union-Find with path compression amortizes to near-O(1) per op.

## entry 343

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 344

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 345

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 346

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 347

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 348

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 349

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 350

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 351

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 352

Euler tour flattens a tree into an array for range-query LCA.

## entry 353

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 354

Articulation points: same DFS as bridges, with a slightly different test.

## entry 355

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 356

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 357

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 358

Union-Find with path compression amortizes to near-O(1) per op.

## entry 359

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 360

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 361

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 362

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 363

Euler tour flattens a tree into an array for range-query LCA.

## entry 364

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 365

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 366

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 367

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 368

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 369

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 370

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 371

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 372

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 373

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 374

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 375

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 376

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 377

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 378

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 379

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 380

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 381

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 382

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 383

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 384

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 385

Heap when you only need top-k; full sort is wasted work.

## entry 386

Monotonic stack pops while the new element violates the invariant.

## entry 387

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 388

Greedy by end-time picks the most non-overlapping intervals.

## entry 389

StringBuilder: amortize allocation by doubling on grow.

## entry 390

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 391

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 392

Wavelet tree: range k-th element in O(log Σ) time.

## entry 393

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 394

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 395

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 396

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 397

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 398

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 399

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 400

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 401

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 402

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 403

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 404

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 405

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 406

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 407

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 408

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 409

Union-Find with path compression amortizes to near-O(1) per op.

## entry 410

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 411

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 412

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 413

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 414

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 415

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 416

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 417

Articulation points: same DFS as bridges, with a slightly different test.

## entry 418

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 419

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 420

Euler tour flattens a tree into an array for range-query LCA.

## entry 421

Walk both pointers from each end inward; advance the smaller side.

## entry 422

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 423

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 424

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 425

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 426

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 427

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 428

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 429

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 430

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 431

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 432

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 433

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 434

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 435

Wavelet tree: range k-th element in O(log Σ) time.

## entry 436

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 437

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 438

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 439

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 440

Heap when you only need top-k; full sort is wasted work.

## entry 441

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 442

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 443

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 444

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 445

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 446

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 447

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 448

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 449

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 450

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 451

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 452

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 453

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 454

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 455

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 456

Heap when you only need top-k; full sort is wasted work.

## entry 457

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 458

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 459

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 460

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 461

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 462

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 463

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 464

StringBuilder: amortize allocation by doubling on grow.

## entry 465

Greedy by end-time picks the most non-overlapping intervals.

## entry 466

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 467

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 468

Union-Find with path compression amortizes to near-O(1) per op.

## entry 469

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 470

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 471

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 472

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 473

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 474

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 475

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 476

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 477

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 478

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 479

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 480

Walk both pointers from each end inward; advance the smaller side.

## entry 481

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 482

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 483

Euler tour flattens a tree into an array for range-query LCA.

## entry 484

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 485

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 486

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 487

Greedy by end-time picks the most non-overlapping intervals.

## entry 488

Wavelet tree: range k-th element in O(log Σ) time.

## entry 489

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 490

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 491

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 492

Wavelet tree: range k-th element in O(log Σ) time.

## entry 493

Monotonic stack pops while the new element violates the invariant.

## entry 494

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 495

Euler tour flattens a tree into an array for range-query LCA.

## entry 496

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 497

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 498

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 499

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 500

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 501

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 502

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 503

Splay tree: every access splays to the root; amortized O(log n).

## entry 504

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 505

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 506

Stable sort matters when a secondary key was set in a prior pass.

## entry 507

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 508

Union-Find with path compression amortizes to near-O(1) per op.

## entry 509

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 510

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 511

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 512

Splay tree: every access splays to the root; amortized O(log n).

## entry 513

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 514

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 515

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 516

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 517

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 518

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 519

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 520

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 521

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 522

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 523

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 524

Monotonic stack pops while the new element violates the invariant.

## entry 525

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 526

Greedy by end-time picks the most non-overlapping intervals.

## entry 527

LIS via patience: each pile holds the smallest tail of length k.

## entry 528

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 529

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 530

StringBuilder: amortize allocation by doubling on grow.

## entry 531

Greedy by end-time picks the most non-overlapping intervals.

## entry 532

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 533

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 534

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 535

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 536

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 537

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 538

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 539

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 540

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 541

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 542

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 543

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 544

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 545

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 546

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 547

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 548

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 549

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 550

StringBuilder: amortize allocation by doubling on grow.

## entry 551

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 552

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 553

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 554

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 555

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 556

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 557

StringBuilder: amortize allocation by doubling on grow.

## entry 558

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 559

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 560

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 561

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 562

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 563

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 564

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 565

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 566

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 567

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 568

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 569

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 570

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 571

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 572

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 573

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 574

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 575

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 576

Euler tour flattens a tree into an array for range-query LCA.

## entry 577

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 578

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 579

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 580

Articulation points: same DFS as bridges, with a slightly different test.

## entry 581

StringBuilder: amortize allocation by doubling on grow.

## entry 582

Union-Find with path compression amortizes to near-O(1) per op.

## entry 583

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 584

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 585

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 586

Euler tour flattens a tree into an array for range-query LCA.

## entry 587

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 588

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 589

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 590

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 591

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 592

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 593

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 594

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 595

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 596

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 597

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 598

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 599

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 600

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 601

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 602

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 603

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 604

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 605

LIS via patience: each pile holds the smallest tail of length k.

## entry 606

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 607

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 608

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 609

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 610

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 611

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 612

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 613

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 614

Greedy by end-time picks the most non-overlapping intervals.

## entry 615

Wavelet tree: range k-th element in O(log Σ) time.

## entry 616

LIS via patience: each pile holds the smallest tail of length k.

## entry 617

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 618

Splay tree: every access splays to the root; amortized O(log n).

## entry 619

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 620

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
