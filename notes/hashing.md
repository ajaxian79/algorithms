# hashing

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Stable sort matters when a secondary key was set in a prior pass.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic stack pops while the new element violates the invariant.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Greedy by end-time picks the most non-overlapping intervals.

- Union-Find with path compression amortizes to near-O(1) per op.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1

- Walk both pointers from each end inward; advance the smaller side.

## entry 2

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 7

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 8

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 9

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 10

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 11

- StringBuilder: amortize allocation by doubling on grow.

## entry 12

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 13

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 14

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 15

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

- Monotonic stack pops while the new element violates the invariant.

## entry 17

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 18

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 19

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 22

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 23

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 28

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 30

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 31

- Walk both pointers from each end inward; advance the smaller side.

## entry 32

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 33

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 34

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 36

- Greedy by end-time picks the most non-overlapping intervals.

## entry 37

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 38

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 40

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 41

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 42

- StringBuilder: amortize allocation by doubling on grow.

## entry 43

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 44

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 46

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 48

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 49

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 50

- Stable sort matters when a secondary key was set in a prior pass.

## entry 51

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 52

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 53

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 54

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 56

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 58

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 59

- Splay tree: every access splays to the root; amortized O(log n).

## entry 60

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 61

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 62

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 63

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 64

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 65

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 66

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 67

- Euler tour flattens a tree into an array for range-query LCA.

## entry 68

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 69

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 70

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 71

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 72

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 73

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 74

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 75

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 76

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 77

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 78

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 79

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 80

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 81

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 82

- Stable sort matters when a secondary key was set in a prior pass.

## entry 83

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 84

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 85

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 86

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 87

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 88

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 89

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 90

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 91

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 92

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 93

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 94

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 95

- Splay tree: every access splays to the root; amortized O(log n).

## entry 96

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 97

- StringBuilder: amortize allocation by doubling on grow.

## entry 98

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 99

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 100

- Greedy by end-time picks the most non-overlapping intervals.

## entry 101

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 102

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 103

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 104

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 105

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 106

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 107

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 108

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 109

- Stable sort matters when a secondary key was set in a prior pass.

## entry 110

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 111

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 112

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 113

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 114

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 115

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 116

- Splay tree: every access splays to the root; amortized O(log n).

## entry 117

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 118

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 119

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 120

- Euler tour flattens a tree into an array for range-query LCA.

## entry 121

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 122

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 123

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 124

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 125

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 126

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 127

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 128

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 129

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 130

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 131

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 132

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 133

- Greedy by end-time picks the most non-overlapping intervals.

## entry 134

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 135

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 136

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 137

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 138

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 139

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 140

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 141

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 142

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 143

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 144

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 145

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 146

- LIS via patience: each pile holds the smallest tail of length k.

## entry 147

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 148

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 149

- Heap when you only need top-k; full sort is wasted work.

## entry 150

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 151

- Walk both pointers from each end inward; advance the smaller side.

## entry 152

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 153

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 154

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 155

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 156

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 157

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 158

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 159

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 160

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 161

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 162

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 163

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 164

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 165

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 166

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 167

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 168

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 169

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 170

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 171

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 172

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 173

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 174

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 175

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 176

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 177

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 178

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 179

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 180

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 181

- Heap when you only need top-k; full sort is wasted work.

## entry 182

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 183

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 184

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 185

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 186

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 187

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 188

- Splay tree: every access splays to the root; amortized O(log n).

## entry 189

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 190

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 191

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 192

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 193

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 194

- Greedy by end-time picks the most non-overlapping intervals.

## entry 195

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 196

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 197

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 198

- Walk both pointers from each end inward; advance the smaller side.

## entry 199

- Euler tour flattens a tree into an array for range-query LCA.

## entry 200

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 201

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 202

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 203

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 204

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 205

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 206

- Walk both pointers from each end inward; advance the smaller side.

## entry 207

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 208

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 209

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 210

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 211

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 212

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 213

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 214

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 215

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 216

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 217

- Stable sort matters when a secondary key was set in a prior pass.

## entry 218

- Stable sort matters when a secondary key was set in a prior pass.

## entry 219

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 220

- Stable sort matters when a secondary key was set in a prior pass.

## entry 221

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 222

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 223

- LIS via patience: each pile holds the smallest tail of length k.

## entry 224

- Monotonic stack pops while the new element violates the invariant.

## entry 225

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 226

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 227

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 228

- Euler tour flattens a tree into an array for range-query LCA.

## entry 229

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 230

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 231

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 232

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 233

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 234

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 235

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 236

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 237

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 238

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 239

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 240

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 241

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 242

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 243

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
