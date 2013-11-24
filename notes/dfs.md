# dfs

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Union-Find with path compression amortizes to near-O(1) per op.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Greedy by end-time picks the most non-overlapping intervals.

- Stable sort matters when a secondary key was set in a prior pass.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- In-place compaction uses two pointers: read advances always, write only on keep.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- LIS via patience: each pile holds the smallest tail of length k.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Walk both pointers from each end inward; advance the smaller side.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Monotonic stack pops while the new element violates the invariant.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 7

- LIS via patience: each pile holds the smallest tail of length k.

## entry 8

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 9

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 10

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 11

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 14

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 15

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 16

- StringBuilder: amortize allocation by doubling on grow.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 19

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 20

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 23

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 24

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 25

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 26

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 27

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 29

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

- Walk both pointers from each end inward; advance the smaller side.

## entry 31

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 32

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 33

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 34

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 36

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 37

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 38

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 39

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 42

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 44

- Splay tree: every access splays to the root; amortized O(log n).

## entry 45

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 46

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 47

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 48

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 49

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 50

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 51

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 52

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 53

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 55

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 56

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 57

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 58

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 59

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 60

- Euler tour flattens a tree into an array for range-query LCA.

## entry 61

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 62

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 64

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 65

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 66

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 67

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 68

- Walk both pointers from each end inward; advance the smaller side.

## entry 69

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 70

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 71

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 72

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 73

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 74

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 75

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 76

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 77

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 78

- StringBuilder: amortize allocation by doubling on grow.

## entry 79

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 80

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 81

- Heap when you only need top-k; full sort is wasted work.

## entry 82

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 83

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 84

- Heap when you only need top-k; full sort is wasted work.

## entry 85

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 86

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 87

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 88

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 89

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 90

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 91

- StringBuilder: amortize allocation by doubling on grow.

## entry 92

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 93

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 94

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 95

- Greedy by end-time picks the most non-overlapping intervals.

## entry 96

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 97

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 98

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 99

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 100

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 101

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 102

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 103

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 104

- LIS via patience: each pile holds the smallest tail of length k.

## entry 105

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 106

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 107

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 108

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 109

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 110

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 112

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 113

- Heap when you only need top-k; full sort is wasted work.

## entry 114

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 115

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 116

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 117

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 118

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 119

- Splay tree: every access splays to the root; amortized O(log n).

## entry 120

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 121

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 122

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 123

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 124

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 125

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 126

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 127

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 128

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 129

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 130

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 131

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 132

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 133

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 134

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 135

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 136

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 137

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 138

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 139

- Heap when you only need top-k; full sort is wasted work.

## entry 140

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 141

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 142

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 143

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 144

- Euler tour flattens a tree into an array for range-query LCA.

## entry 145

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 146

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 147

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 148

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 149

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 150

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 151

- Splay tree: every access splays to the root; amortized O(log n).

## entry 152

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 153

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 154

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 155

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 156

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 157

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 158

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 159

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 160

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 161

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 162

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 163

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 164

- Splay tree: every access splays to the root; amortized O(log n).

## entry 165

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 166

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 167

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 168

- StringBuilder: amortize allocation by doubling on grow.

## entry 169

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 170

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 171

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 172

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 173

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 174

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 175

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 176

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 177

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 178

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 179

- Walk both pointers from each end inward; advance the smaller side.

## entry 180

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 181

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 182

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 183

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 184

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 185

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 186

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 187

- Euler tour flattens a tree into an array for range-query LCA.

## entry 188

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 189

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 190

- Walk both pointers from each end inward; advance the smaller side.

## entry 191

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 192

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 193

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 194

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 195

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 196

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 197

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 198

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 199

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 200

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 201

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 202

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 203

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 204

- Monotonic stack pops while the new element violates the invariant.

## entry 205

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 206

- Monotonic stack pops while the new element violates the invariant.

## entry 207

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 208

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 209

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 210

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 211

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 212

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 213

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 214

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 215

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 216

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 217

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 218

- Splay tree: every access splays to the root; amortized O(log n).

## entry 219

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 220

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 221

- Monotonic stack pops while the new element violates the invariant.

## entry 222

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 223

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 224

- Heap when you only need top-k; full sort is wasted work.

## entry 225

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 226

- Greedy by end-time picks the most non-overlapping intervals.

## entry 227

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 228

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 229

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 230

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 231

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 232

- StringBuilder: amortize allocation by doubling on grow.

## entry 233

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 234

- Heap when you only need top-k; full sort is wasted work.

## entry 235

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 236

- Monotonic stack pops while the new element violates the invariant.

## entry 237

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 238

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 239

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 240

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 241

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 242

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 243

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 244

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 245

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 246

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 247

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 248

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 249

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 250

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 251

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 252

- Euler tour flattens a tree into an array for range-query LCA.

## entry 253

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 254

- Splay tree: every access splays to the root; amortized O(log n).

## entry 255

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 256

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 257

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 258

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 259

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 260

- Splay tree: every access splays to the root; amortized O(log n).

## entry 261

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 262

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 263

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 264

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 265

- StringBuilder: amortize allocation by doubling on grow.

## entry 266

- Walk both pointers from each end inward; advance the smaller side.

## entry 267

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 268

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 269

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 270

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 271

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 272

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 273

- StringBuilder: amortize allocation by doubling on grow.

## entry 274

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 275

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 276

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 277

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 278

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 279

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 280

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 281

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 282

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 283

- LIS via patience: each pile holds the smallest tail of length k.

## entry 284

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 285

- Stable sort matters when a secondary key was set in a prior pass.

## entry 286

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 287

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 288

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 289

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 290

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 291

- Walk both pointers from each end inward; advance the smaller side.

## entry 292

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 293

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 294

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 295

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 296

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 297

- LIS via patience: each pile holds the smallest tail of length k.

## entry 298

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 299

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 300

- Greedy by end-time picks the most non-overlapping intervals.

## entry 301

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 302

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 303

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 304

- Greedy by end-time picks the most non-overlapping intervals.

## entry 305

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 306

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 307

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 308

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 309

- LIS via patience: each pile holds the smallest tail of length k.

## entry 310

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 311

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 312

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 313

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 314

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 315

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 316

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 317

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 318

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 319

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 320

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 321

- Euler tour flattens a tree into an array for range-query LCA.

## entry 322

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 323

- Walk both pointers from each end inward; advance the smaller side.

## entry 324

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 325

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 326

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 327

- Splay tree: every access splays to the root; amortized O(log n).

## entry 328

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 329

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 330

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 331

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 332

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 333

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 334

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 335

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 336

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 337

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 338

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 339

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 340

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 341

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 342

- Euler tour flattens a tree into an array for range-query LCA.

## entry 343

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 344

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 345

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 346

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 347

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 348

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 349

- LIS via patience: each pile holds the smallest tail of length k.

## entry 350

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 351

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 352

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 353

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 354

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 355

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 356

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 357

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 358

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 359

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 360

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 361

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 362

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 363

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 364

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 365

- Splay tree: every access splays to the root; amortized O(log n).

## entry 366

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 367

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 368

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 369

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 370

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 371

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 372

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 373

- Splay tree: every access splays to the root; amortized O(log n).

## entry 374

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 375

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 376

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 377

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 378

- Walk both pointers from each end inward; advance the smaller side.

## entry 379

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 380

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 381

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 382

- Stable sort matters when a secondary key was set in a prior pass.

## entry 383

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 384

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 385

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 386

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 387

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 388

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 389

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 390

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 391

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 392

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 393

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 394

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 395

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 396

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 397

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 398

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 399

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 400

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 401

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 402

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 403

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 404

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 405

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 406

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 407

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 408

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 409

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 410

- Euler tour flattens a tree into an array for range-query LCA.

## entry 411

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 412

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 413

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 414

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 415

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 416

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 417

- Euler tour flattens a tree into an array for range-query LCA.

## entry 418

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 419

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 420

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 421

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 422

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 423

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 424

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 425

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 426

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 427

- LIS via patience: each pile holds the smallest tail of length k.

## entry 428

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 429

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 430

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 431

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 432

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 433

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 434

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 435

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 436

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 437

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 438

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 439

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 440

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 441

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 442

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 443

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 444

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 445

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 446

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 447

- Greedy by end-time picks the most non-overlapping intervals.

## entry 448

- StringBuilder: amortize allocation by doubling on grow.

## entry 449

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 450

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 451

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 452

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 453

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 454

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 455

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 456

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 457

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 458

- Monotonic stack pops while the new element violates the invariant.

## entry 459

- Walk both pointers from each end inward; advance the smaller side.

## entry 460

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 461

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 462

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 463

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 464

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 465

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 466

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 467

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 468

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 469

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 470

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 471

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 472

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 473

- Stable sort matters when a secondary key was set in a prior pass.

## entry 474

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 475

- Greedy by end-time picks the most non-overlapping intervals.

## entry 476

- Euler tour flattens a tree into an array for range-query LCA.

## entry 477

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 478

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 479

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 480

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 481

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 482

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 483

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 484

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 485

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 486

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 487

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 488

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 489

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 490

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 491

- Walk both pointers from each end inward; advance the smaller side.

## entry 492

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 493

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 494

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 495

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 496

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 497

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 498

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 499

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 500

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 501

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 502

- Walk both pointers from each end inward; advance the smaller side.

## entry 503

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 504

- LIS via patience: each pile holds the smallest tail of length k.

## entry 505

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 506

- Heap when you only need top-k; full sort is wasted work.

## entry 507

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 508

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 509

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 510

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 511

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 512

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 513

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 514

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 515

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 516

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 517

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 518

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 519

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 520

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 521

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 522

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 523

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 524

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 525

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 526

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 527

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
