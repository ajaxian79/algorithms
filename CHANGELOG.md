# CHANGELOG

## entry 1

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4

- Walk both pointers from each end inward; advance the smaller side.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

- Splay tree: every access splays to the root; amortized O(log n).

## entry 10

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 11

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 12

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 15

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 16

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 17

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 18

- Stable sort matters when a secondary key was set in a prior pass.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 21

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 22

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

- Euler tour flattens a tree into an array for range-query LCA.

## entry 24

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 25

- Greedy by end-time picks the most non-overlapping intervals.

## entry 26

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

- StringBuilder: amortize allocation by doubling on grow.

## entry 28

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 29

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 30

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 31

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 32

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 33

- Monotonic stack pops while the new element violates the invariant.

## entry 34

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 35

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 36

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 37

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 38

- StringBuilder: amortize allocation by doubling on grow.

## entry 39

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 40

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 41

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 42

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 43

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 44

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 45

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 46

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 47

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 48

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 49

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 50

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 52

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 53

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 54

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 57

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 60

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 61

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 62

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 64

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 65

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 66

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 67

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 68

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 69

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 70

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 72

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 73

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 74

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 75

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 76

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 77

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 78

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 79

- Walk both pointers from each end inward; advance the smaller side.

## entry 80

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 81

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 82

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 83

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 84

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 85

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 86

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 87

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 88

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 89

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 90

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 91

- Monotonic stack pops while the new element violates the invariant.

## entry 92

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 93

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 94

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 95

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 96

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 97

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 98

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 99

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 100

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 101

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 102

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 103

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 104

- Greedy by end-time picks the most non-overlapping intervals.

## entry 105

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 106

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 107

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 108

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 109

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 110

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 111

- Greedy by end-time picks the most non-overlapping intervals.

## entry 112

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 113

- Splay tree: every access splays to the root; amortized O(log n).

## entry 114

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 115

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 116

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 117

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 118

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 119

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 120

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 121

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 122

- Walk both pointers from each end inward; advance the smaller side.

## entry 123

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 124

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 125

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 126

- Greedy by end-time picks the most non-overlapping intervals.

## entry 127

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 128

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 129

- StringBuilder: amortize allocation by doubling on grow.

## entry 130

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 131

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 132

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 133

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 134

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 135

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 136

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 137

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 138

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 139

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 140

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 141

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 142

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 143

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 144

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 145

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 146

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 147

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 148

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 149

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 150

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 151

- Splay tree: every access splays to the root; amortized O(log n).

## entry 152

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 153

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 154

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 155

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 156

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 157

- Euler tour flattens a tree into an array for range-query LCA.

## entry 158

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 159

- StringBuilder: amortize allocation by doubling on grow.

## entry 160

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 161

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 162

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 163

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 164

- Greedy by end-time picks the most non-overlapping intervals.

## entry 165

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 166

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 167

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 168

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 169

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 170

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 171

- Greedy by end-time picks the most non-overlapping intervals.

## entry 172

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 173

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 174

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 175

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 176

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 177

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 178

- Euler tour flattens a tree into an array for range-query LCA.

## entry 179

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 180

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 181

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 182

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 183

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 184

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 185

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 186

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 187

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 188

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 189

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 190

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 191

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 192

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 193

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 194

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 195

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 196

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 197

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 198

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 199

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 200

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 201

- Euler tour flattens a tree into an array for range-query LCA.

## entry 202

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 203

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 204

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 205

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 207

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 208

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 209

- Walk both pointers from each end inward; advance the smaller side.

## entry 210

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 211

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 212

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 213

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 214

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 215

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 216

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 217

- Monotonic stack pops while the new element violates the invariant.

## entry 218

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 219

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 220

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 221

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 222

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 223

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 224

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 225

- StringBuilder: amortize allocation by doubling on grow.

## entry 226

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 227

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 228

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 229

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 230

- LIS via patience: each pile holds the smallest tail of length k.

## entry 231

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 232

- Greedy by end-time picks the most non-overlapping intervals.

## entry 233

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 234

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 235

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 236

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 237

- Heap when you only need top-k; full sort is wasted work.

## entry 238

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 239

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 240

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 241

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
