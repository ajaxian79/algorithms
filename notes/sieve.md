# sieve

- LIS via patience: each pile holds the smallest tail of length k.

- Union-Find with path compression amortizes to near-O(1) per op.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Heap when you only need top-k; full sort is wasted work.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Greedy by end-time picks the most non-overlapping intervals.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Stable sort matters when a secondary key was set in a prior pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

- Stable sort matters when a secondary key was set in a prior pass.

## entry 7

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 8

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 10

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 11

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 12

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 13

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 14

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 15

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 18

- Splay tree: every access splays to the root; amortized O(log n).

## entry 19

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 20

- Stable sort matters when a secondary key was set in a prior pass.

## entry 21

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 22

- Euler tour flattens a tree into an array for range-query LCA.

## entry 23

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 24

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 25

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 26

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 27

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 28

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 30

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 31

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 32

- Greedy by end-time picks the most non-overlapping intervals.

## entry 33

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 34

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 35

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 36

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 37

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 38

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 39

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 40

- Walk both pointers from each end inward; advance the smaller side.

## entry 41

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 42

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 43

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 44

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 47

- Stable sort matters when a secondary key was set in a prior pass.

## entry 48

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 49

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 50

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 51

- Walk both pointers from each end inward; advance the smaller side.

## entry 52

- Monotonic stack pops while the new element violates the invariant.

## entry 53

- Greedy by end-time picks the most non-overlapping intervals.

## entry 54

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 55

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 56

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 57

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 58

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 59

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 60

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 61

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 62

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 64

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 65

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 66

- Euler tour flattens a tree into an array for range-query LCA.

## entry 67

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 68

- Monotonic stack pops while the new element violates the invariant.

## entry 69

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 70

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 71

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 72

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 73

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 74

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 75

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 76

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 77

- Euler tour flattens a tree into an array for range-query LCA.

## entry 78

- StringBuilder: amortize allocation by doubling on grow.

## entry 79

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 80

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 81

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 82

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 83

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 84

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 85

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 87

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 88

- Stable sort matters when a secondary key was set in a prior pass.

## entry 89

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 90

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 91

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 92

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 93

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 94

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 95

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 96

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 97

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 98

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 99

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 100

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 101

- LIS via patience: each pile holds the smallest tail of length k.

## entry 102

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 103

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 104

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 105

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 106

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 107

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 108

- Euler tour flattens a tree into an array for range-query LCA.

## entry 109

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 112

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 113

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 114

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 115

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 116

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 117

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 118

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 119

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 120

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 121

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 122

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 123

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 124

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 125

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 126

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 127

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 128

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 129

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 130

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 131

- Heap when you only need top-k; full sort is wasted work.

## entry 132

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 133

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 134

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 135

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 136

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 137

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 138

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 139

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 140

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 141

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 142

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 143

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 144

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 145

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 146

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 147

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 148

- Greedy by end-time picks the most non-overlapping intervals.

## entry 149

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 150

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 151

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 152

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 153

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 154

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 155

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 156

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 157

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 158

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 159

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 160

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 161

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 162

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 163

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 164

- StringBuilder: amortize allocation by doubling on grow.

## entry 165

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 166

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 167

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 168

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 169

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 170

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 171

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 172

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 173

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 174

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 175

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 176

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 177

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 178

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 179

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 180

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 181

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 182

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 183

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 184

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 185

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 186

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 187

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 188

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 189

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 190

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 191

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 192

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 193

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 194

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 195

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 196

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 197

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 198

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 199

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 200

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 201

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 202

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 203

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 204

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 205

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 206

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 207

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 208

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 209

- Euler tour flattens a tree into an array for range-query LCA.

## entry 210

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 211

- Walk both pointers from each end inward; advance the smaller side.

## entry 212

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 213

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 214

- Euler tour flattens a tree into an array for range-query LCA.

## entry 215

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 216

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 217

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 218

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 219

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 220

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 221

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 222

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 223

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 224

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 225

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 226

- Splay tree: every access splays to the root; amortized O(log n).

## entry 227

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 228

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 229

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 230

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 231

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 232

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 233

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 234

- Walk both pointers from each end inward; advance the smaller side.

## entry 235

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 236

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 237

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 238

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 239

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 240

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 241

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 242

- Splay tree: every access splays to the root; amortized O(log n).

## entry 243

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 244

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 245

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 246

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 247

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 248

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 249

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 250

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 251

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 252

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 253

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 254

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 255

- Greedy by end-time picks the most non-overlapping intervals.

## entry 256

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 257

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 258

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 259

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 260

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 261

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 262

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 263

- StringBuilder: amortize allocation by doubling on grow.

## entry 264

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 265

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 266

- Monotonic stack pops while the new element violates the invariant.

## entry 267

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 268

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 269

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 270

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 271

- Euler tour flattens a tree into an array for range-query LCA.

## entry 272

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 273

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 274

- Euler tour flattens a tree into an array for range-query LCA.

## entry 275

- StringBuilder: amortize allocation by doubling on grow.

## entry 276

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 277

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 278

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 279

- StringBuilder: amortize allocation by doubling on grow.

## entry 280

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 281

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 282

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 283

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 284

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 285

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 286

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 287

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 288

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 289

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 290

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 291

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 292

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 293

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 294

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 295

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 296

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 297

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 298

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 299

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 300

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 301

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 302

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 303

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 304

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 305

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 306

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 307

- LIS via patience: each pile holds the smallest tail of length k.

## entry 308

- Heap when you only need top-k; full sort is wasted work.

## entry 309

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 310

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 311

- Splay tree: every access splays to the root; amortized O(log n).

## entry 312

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 313

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 314

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 315

- StringBuilder: amortize allocation by doubling on grow.

## entry 316

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 317

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 318

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 319

- Euler tour flattens a tree into an array for range-query LCA.

## entry 320

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 321

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 322

- Heap when you only need top-k; full sort is wasted work.

## entry 323

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 324

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 325

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 326

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 327

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 328

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 329

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 330

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 331

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 332

- Monotonic stack pops while the new element violates the invariant.

## entry 333

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 334

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 335

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 336

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 337

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 338

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 339

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 340

- Walk both pointers from each end inward; advance the smaller side.

## entry 341

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 342

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 343

- LIS via patience: each pile holds the smallest tail of length k.

## entry 344

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 345

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 346

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 347

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 348

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 349

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 350

- Monotonic stack pops while the new element violates the invariant.

## entry 351

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 352

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 353

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 354

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
