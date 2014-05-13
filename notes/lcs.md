# lcs

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- Greedy by end-time picks the most non-overlapping intervals.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Monotonic stack pops while the new element violates the invariant.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Union-Find with path compression amortizes to near-O(1) per op.

- Walk both pointers from each end inward; advance the smaller side.

- Heap when you only need top-k; full sort is wasted work.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Stable sort matters when a secondary key was set in a prior pass.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 4

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 7

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 9

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 10

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 11

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 12

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 14

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 15

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 16

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 18

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 19

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 20

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 21

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

- Heap when you only need top-k; full sort is wasted work.

## entry 23

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 24

- Walk both pointers from each end inward; advance the smaller side.

## entry 25

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 26

- Euler tour flattens a tree into an array for range-query LCA.

## entry 27

- Splay tree: every access splays to the root; amortized O(log n).

## entry 28

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 29

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 30

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 31

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 32

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 33

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 34

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 35

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 36

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 37

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 38

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 39

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 40

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 41

- StringBuilder: amortize allocation by doubling on grow.

## entry 42

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 43

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 45

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 46

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 47

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 48

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 49

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 50

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 51

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 52

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 53

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 54

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 55

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 56

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 57

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 58

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 59

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 60

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 63

- Walk both pointers from each end inward; advance the smaller side.

## entry 64

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 66

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 67

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

- LIS via patience: each pile holds the smallest tail of length k.

## entry 69

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 70

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 71

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 72

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 73

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 74

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 75

- Walk both pointers from each end inward; advance the smaller side.

## entry 76

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 77

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 78

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 79

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 80

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 81

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 82

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 83

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 84

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 85

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 86

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 88

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 89

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 90

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 91

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 92

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 93

- Heap when you only need top-k; full sort is wasted work.

## entry 94

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 95

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 96

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 98

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 99

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 100

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 101

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 102

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 103

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 104

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 105

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 106

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 107

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 108

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 109

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 110

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 111

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 112

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 113

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 114

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 115

- Euler tour flattens a tree into an array for range-query LCA.

## entry 116

- StringBuilder: amortize allocation by doubling on grow.

## entry 117

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 118

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 119

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 120

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 121

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 122

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 123

- LIS via patience: each pile holds the smallest tail of length k.

## entry 124

- Heap when you only need top-k; full sort is wasted work.

## entry 125

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 126

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 127

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 128

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 129

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 130

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 131

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 132

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 133

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 134

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 135

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 136

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 137

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 138

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 139

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 140

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 141

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 142

- Monotonic stack pops while the new element violates the invariant.

## entry 143

- Stable sort matters when a secondary key was set in a prior pass.

## entry 144

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 145

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 146

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 147

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 148

- Greedy by end-time picks the most non-overlapping intervals.

## entry 149

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 150

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 151

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 152

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 153

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 154

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 155

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 156

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 157

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 158

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 159

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 160

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 161

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 162

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 163

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 164

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 165

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 166

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 167

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 168

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 169

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 170

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 171

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 172

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 173

- Monotonic stack pops while the new element violates the invariant.

## entry 174

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 175

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 176

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 177

- Greedy by end-time picks the most non-overlapping intervals.

## entry 178

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 179

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 180

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 181

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 182

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 183

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 184

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 185

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 186

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 187

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 188

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 189

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 190

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 191

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 192

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 193

- Walk both pointers from each end inward; advance the smaller side.

## entry 194

- LIS via patience: each pile holds the smallest tail of length k.

## entry 195

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 196

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 197

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 198

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 199

- Euler tour flattens a tree into an array for range-query LCA.

## entry 200

- Euler tour flattens a tree into an array for range-query LCA.

## entry 201

- Euler tour flattens a tree into an array for range-query LCA.

## entry 202

- Monotonic stack pops while the new element violates the invariant.

## entry 203

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 204

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 205

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

- Euler tour flattens a tree into an array for range-query LCA.

## entry 207

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 208

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 209

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 210

- Euler tour flattens a tree into an array for range-query LCA.

## entry 211

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 212

- Greedy by end-time picks the most non-overlapping intervals.

## entry 213

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 214

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 215

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 216

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 217

- Heap when you only need top-k; full sort is wasted work.

## entry 218

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 219

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 220

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 221

- StringBuilder: amortize allocation by doubling on grow.

## entry 222

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 223

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 224

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 225

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 226

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 227

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 228

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 229

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 230

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 231

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 232

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 233

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 234

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 235

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 236

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 237

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 238

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 239

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 240

- Greedy by end-time picks the most non-overlapping intervals.

## entry 241

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 242

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 243

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 244

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 245

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 246

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 247

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 248

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 249

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 250

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 251

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 252

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 253

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 254

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 255

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 256

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 257

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 258

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 259

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 260

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 261

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 262

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 263

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 264

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 265

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 266

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 267

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 268

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 269

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 270

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 271

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 272

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 273

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 274

- Monotonic stack pops while the new element violates the invariant.

## entry 275

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 276

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 277

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 278

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 279

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 280

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 281

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 282

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 283

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 284

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 285

- Walk both pointers from each end inward; advance the smaller side.

## entry 286

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 287

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 288

- Splay tree: every access splays to the root; amortized O(log n).

## entry 289

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 290

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 291

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 292

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 293

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 294

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 295

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 296

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 297

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 298

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 299

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 300

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 301

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 302

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 303

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 304

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 305

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 306

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 307

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 308

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 309

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 310

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 311

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 312

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 313

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 314

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 315

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 316

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 317

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 318

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 319

- Greedy by end-time picks the most non-overlapping intervals.

## entry 320

- Splay tree: every access splays to the root; amortized O(log n).

## entry 321

- Stable sort matters when a secondary key was set in a prior pass.

## entry 322

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 323

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 324

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 325

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 326

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 327

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 328

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 329

- Greedy by end-time picks the most non-overlapping intervals.

## entry 330

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 331

- Monotonic stack pops while the new element violates the invariant.

## entry 332

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 333

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 334

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 335

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 336

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 337

- Greedy by end-time picks the most non-overlapping intervals.

## entry 338

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 339

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 340

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 341

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 342

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 343

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 344

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 345

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 346

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 347

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 348

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 349

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 350

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 351

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 352

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 353

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 354

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 355

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 356

- Monotonic stack pops while the new element violates the invariant.

## entry 357

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 358

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 359

- Heap when you only need top-k; full sort is wasted work.

## entry 360

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 361

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 362

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 363

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 364

- StringBuilder: amortize allocation by doubling on grow.

## entry 365

- Walk both pointers from each end inward; advance the smaller side.

## entry 366

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 367

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 368

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 369

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 370

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 371

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 372

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 373

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 374

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 375

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 376

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 377

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 378

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 379

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 380

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 381

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 382

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 383

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 384

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 385

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 386

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 387

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 388

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 389

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 390

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 391

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 392

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 393

- Euler tour flattens a tree into an array for range-query LCA.

## entry 394

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 395

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 396

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 397

- Monotonic stack pops while the new element violates the invariant.

## entry 398

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 399

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 400

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 401

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 402

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 403

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 404

- Splay tree: every access splays to the root; amortized O(log n).

## entry 405

- Heap when you only need top-k; full sort is wasted work.

## entry 406

- Euler tour flattens a tree into an array for range-query LCA.

## entry 407

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 408

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 409

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 410

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 411

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 412

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 413

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 414

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 415

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 416

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 417

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 418

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 419

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 420

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 421

- Heap when you only need top-k; full sort is wasted work.

## entry 422

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 423

- Euler tour flattens a tree into an array for range-query LCA.

## entry 424

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 425

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 426

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 427

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 428

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 429

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 430

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 431

- Greedy by end-time picks the most non-overlapping intervals.

## entry 432

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 433

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 434

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 435

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 436

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 437

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 438

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 439

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 440

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 441

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 442

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 443

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 444

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 445

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 446

- Monotonic stack pops while the new element violates the invariant.

## entry 447

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 448

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 449

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 450

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 451

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 452

- Heap when you only need top-k; full sort is wasted work.

## entry 453

- Heap when you only need top-k; full sort is wasted work.

## entry 454

- Stable sort matters when a secondary key was set in a prior pass.

## entry 455

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 456

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 457

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 458

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 459

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 460

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 461

- Walk both pointers from each end inward; advance the smaller side.

## entry 462

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 463

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 464

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 465

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 466

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 467

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 468

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 469

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 470

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 471

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 472

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 473

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 474

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 475

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 476

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 477

- Greedy by end-time picks the most non-overlapping intervals.

## entry 478

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 479

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 480

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 481

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 482

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 483

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 484

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 485

- Stable sort matters when a secondary key was set in a prior pass.

## entry 486

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 487

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 488

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 489

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 490

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 491

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 492

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 493

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 494

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 495

- Walk both pointers from each end inward; advance the smaller side.

## entry 496

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 497

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 498

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 499

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 500

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 501

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 502

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 503

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 504

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 505

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 506

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 507

- LIS via patience: each pile holds the smallest tail of length k.

## entry 508

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 509

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 510

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 511

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 512

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 513

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 514

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 515

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 516

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 517

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 518

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 519

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 520

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 521

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 522

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 523

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 524

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 525

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 526

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 527

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 528

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
