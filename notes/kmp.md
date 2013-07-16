# kmp

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic stack pops while the new element violates the invariant.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Stable sort matters when a secondary key was set in a prior pass.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Greedy by end-time picks the most non-overlapping intervals.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- LIS via patience: each pile holds the smallest tail of length k.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Union-Find with path compression amortizes to near-O(1) per op.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Heap when you only need top-k; full sort is wasted work.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Walk both pointers from each end inward; advance the smaller side.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 8

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 9

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 10

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 11

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 12

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 14

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 18

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 19

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 20

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 21

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 23

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 24

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 26

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 27

- StringBuilder: amortize allocation by doubling on grow.

## entry 28

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 29

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 30

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 31

- Heap when you only need top-k; full sort is wasted work.

## entry 32

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 37

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 38

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 39

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 40

- Heap when you only need top-k; full sort is wasted work.

## entry 41

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 42

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 43

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 44

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 45

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 46

- Walk both pointers from each end inward; advance the smaller side.

## entry 47

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 48

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 49

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 50

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

- StringBuilder: amortize allocation by doubling on grow.

## entry 52

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 53

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 54

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 55

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 56

- Splay tree: every access splays to the root; amortized O(log n).

## entry 57

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 58

- Stable sort matters when a secondary key was set in a prior pass.

## entry 59

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 60

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 61

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 62

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 63

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 64

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 65

- Heap when you only need top-k; full sort is wasted work.

## entry 66

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 67

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 68

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 69

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 71

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 72

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 73

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 74

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 75

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 76

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 77

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 78

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 80

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 81

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 82

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 83

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 84

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 86

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 87

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 88

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 89

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 90

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 91

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 92

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 93

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 94

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 95

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 96

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 98

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 99

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 100

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 101

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 102

- Walk both pointers from each end inward; advance the smaller side.

## entry 103

- Euler tour flattens a tree into an array for range-query LCA.

## entry 104

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 105

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 106

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 107

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 108

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 109

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 110

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 111

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 112

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 113

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 114

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 115

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 116

- Heap when you only need top-k; full sort is wasted work.

## entry 117

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 118

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 119

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 120

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 121

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 122

- Monotonic stack pops while the new element violates the invariant.

## entry 123

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 124

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 125

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 126

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 127

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 128

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 129

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 130

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 131

- Splay tree: every access splays to the root; amortized O(log n).

## entry 132

- Stable sort matters when a secondary key was set in a prior pass.

## entry 133

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 134

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 135

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 136

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 137

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 138

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 139

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 140

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 141

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 142

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 143

- Walk both pointers from each end inward; advance the smaller side.

## entry 144

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 145

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 146

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 147

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 148

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 149

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 150

- Greedy by end-time picks the most non-overlapping intervals.

## entry 151

- Stable sort matters when a secondary key was set in a prior pass.

## entry 152

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 153

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 154

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 155

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 156

- Stable sort matters when a secondary key was set in a prior pass.

## entry 157

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 158

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 159

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 160

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 161

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 162

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 163

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 164

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 165

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 166

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 167

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 168

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 169

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 170

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 171

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 172

- Heap when you only need top-k; full sort is wasted work.

## entry 173

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 174

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 175

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 176

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 177

- LIS via patience: each pile holds the smallest tail of length k.

## entry 178

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 179

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 180

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 181

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 182

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 183

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 184

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 185

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 186

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 187

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 188

- StringBuilder: amortize allocation by doubling on grow.

## entry 189

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 190

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 191

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 192

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 193

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 194

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 195

- Greedy by end-time picks the most non-overlapping intervals.

## entry 196

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 197

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 198

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 199

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 200

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 201

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 202

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 203

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 204

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 205

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 206

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 207

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 208

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 209

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 210

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 211

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 212

- Monotonic stack pops while the new element violates the invariant.

## entry 213

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 214

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 215

- Splay tree: every access splays to the root; amortized O(log n).

## entry 216

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 217

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 218

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 219

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 220

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 221

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 222

- Monotonic stack pops while the new element violates the invariant.

## entry 223

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 224

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 225

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 226

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 227

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 228

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 229

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 230

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 231

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 232

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 233

- LIS via patience: each pile holds the smallest tail of length k.

## entry 234

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 235

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 236

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 237

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 238

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 239

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 240

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 241

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 242

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 243

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 244

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 245

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 246

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 247

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 248

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 249

- Stable sort matters when a secondary key was set in a prior pass.

## entry 250

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 251

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 252

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 253

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 254

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 255

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 256

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 257

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 258

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 259

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 260

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 261

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 262

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 263

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 264

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 265

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 266

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 267

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 268

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 269

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 270

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 271

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 272

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 273

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 274

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 275

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 276

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 277

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 278

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 279

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 280

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 281

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 282

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 283

- Stable sort matters when a secondary key was set in a prior pass.

## entry 284

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 285

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 286

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 287

- Walk both pointers from each end inward; advance the smaller side.

## entry 288

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 289

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 290

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 291

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 292

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 293

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 294

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 295

- Euler tour flattens a tree into an array for range-query LCA.

## entry 296

- Heap when you only need top-k; full sort is wasted work.

## entry 297

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 298

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 299

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 300

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 301

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 302

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 303

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 304

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 305

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 306

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 307

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 308

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 309

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 310

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 311

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 312

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 313

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 314

- Heap when you only need top-k; full sort is wasted work.

## entry 315

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 316

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 317

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 318

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 319

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 320

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 321

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 322

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 323

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 324

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 325

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 326

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 327

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 328

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 329

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 330

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 331

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 332

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 333

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 334

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 335

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 336

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 337

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 338

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 339

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 340

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 341

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 342

- LIS via patience: each pile holds the smallest tail of length k.

## entry 343

- Heap when you only need top-k; full sort is wasted work.

## entry 344

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 345

- Heap when you only need top-k; full sort is wasted work.

## entry 346

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 347

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 348

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 349

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 350

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 351

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 352

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 353

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 354

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 355

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 356

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 357

- Greedy by end-time picks the most non-overlapping intervals.

## entry 358

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 359

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 360

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 361

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 362

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 363

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 364

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 365

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 366

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 367

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 368

- Stable sort matters when a secondary key was set in a prior pass.

## entry 369

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 370

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 371

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 372

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 373

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 374

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 375

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 376

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 377

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 378

- Stable sort matters when a secondary key was set in a prior pass.

## entry 379

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 380

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 381

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 382

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 383

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 384

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 385

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 386

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 387

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 388

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 389

- Greedy by end-time picks the most non-overlapping intervals.

## entry 390

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 391

- Splay tree: every access splays to the root; amortized O(log n).

## entry 392

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 393

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 394

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 395

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 396

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 397

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 398

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 399

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 400

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 401

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 402

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 403

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 404

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 405

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 406

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 407

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 408

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 409

- Heap when you only need top-k; full sort is wasted work.

## entry 410

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 411

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 412

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 413

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 414

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 415

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 416

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 417

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 418

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 419

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 420

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 421

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 422

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 423

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 424

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 425

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 426

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 427

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 428

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 429

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 430

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 431

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 432

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 433

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 434

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 435

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 436

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 437

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 438

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 439

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 440

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 441

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 442

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 443

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 444

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 445

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 446

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 447

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 448

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 449

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 450

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 451

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 452

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 453

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 454

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 455

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 456

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 457

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 458

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 459

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 460

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 461

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 462

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 463

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 464

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 465

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 466

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 467

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 468

- Walk both pointers from each end inward; advance the smaller side.

## entry 469

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 470

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 471

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 472

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 473

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 474

- LIS via patience: each pile holds the smallest tail of length k.

## entry 475

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 476

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 477

- StringBuilder: amortize allocation by doubling on grow.

## entry 478

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 479

- Monotonic stack pops while the new element violates the invariant.

## entry 480

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 481

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 482

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 483

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 484

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 485

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 486

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 487

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 488

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 489

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 490

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 491

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 492

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 493

- StringBuilder: amortize allocation by doubling on grow.

## entry 494

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 495

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 496

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 497

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 498

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 499

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 500

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 501

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 502

- Euler tour flattens a tree into an array for range-query LCA.

## entry 503

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 504

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 505

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 506

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 507

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 508

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 509

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 510

- Splay tree: every access splays to the root; amortized O(log n).

## entry 511

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 512

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 513

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 514

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 515

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 516

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 517

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 518

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 519

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 520

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 521

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 522

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 523

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 524

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 525

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 526

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 527

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 528

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 529

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 530

- Monotonic stack pops while the new element violates the invariant.
