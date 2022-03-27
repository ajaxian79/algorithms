# union-find

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Stable sort matters when a secondary key was set in a prior pass.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic stack pops while the new element violates the invariant.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Greedy by end-time picks the most non-overlapping intervals.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Merge intervals: sort by start; extend the running interval while overlapping.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- LIS via patience: each pile holds the smallest tail of length k.

- Walk both pointers from each end inward; advance the smaller side.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 7

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 8

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 9

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 10

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 11

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 12

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 13

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 14

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- Heap when you only need top-k; full sort is wasted work.

## entry 18

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 19

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 20

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 21

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 23

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 24

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 28

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 31

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 32

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 34

- Splay tree: every access splays to the root; amortized O(log n).

## entry 35

- Walk both pointers from each end inward; advance the smaller side.

## entry 36

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 37

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 38

- Splay tree: every access splays to the root; amortized O(log n).

## entry 39

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 40

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 41

- Walk both pointers from each end inward; advance the smaller side.

## entry 42

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 43

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 44

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 46

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 47

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 48

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 49

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 50

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 51

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 52

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 53

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 54

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 56

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 57

- Euler tour flattens a tree into an array for range-query LCA.

## entry 58

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 59

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 60

- Walk both pointers from each end inward; advance the smaller side.

## entry 61

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 62

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 63

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 64

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 65

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 67

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 68

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 69

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 70

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 72

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 73

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 74

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 75

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 76

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 77

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 78

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 79

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 80

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 81

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 82

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 84

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 85

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 86

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 87

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 88

- Monotonic stack pops while the new element violates the invariant.

## entry 89

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 90

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 91

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 92

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 93

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 94

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 95

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 96

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 97

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 98

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 99

- Walk both pointers from each end inward; advance the smaller side.

## entry 100

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 101

- Splay tree: every access splays to the root; amortized O(log n).

## entry 102

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 103

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 104

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 105

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 106

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 107

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 108

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 109

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 110

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 111

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 112

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 113

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 114

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 115

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 116

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 117

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 118

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 119

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 120

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 121

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 122

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 123

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 124

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 125

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 126

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 127

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 128

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 129

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 130

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 131

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 132

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 133

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 134

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 135

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 136

- Stable sort matters when a secondary key was set in a prior pass.

## entry 137

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 138

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 139

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 140

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 141

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 142

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 143

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 144

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 145

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 146

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 147

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 148

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 149

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 150

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 151

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 152

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 153

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 154

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 155

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 156

- Greedy by end-time picks the most non-overlapping intervals.

## entry 157

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 158

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 159

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 160

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 161

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 162

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 163

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 164

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 165

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 166

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 167

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 168

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 169

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 170

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 171

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 172

- Splay tree: every access splays to the root; amortized O(log n).

## entry 173

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 174

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 175

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 176

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 177

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 178

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 179

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 180

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 181

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 182

- Splay tree: every access splays to the root; amortized O(log n).

## entry 183

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 184

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 185

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 186

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 187

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 188

- Stable sort matters when a secondary key was set in a prior pass.

## entry 189

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 190

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 191

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 192

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 193

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 194

- Stable sort matters when a secondary key was set in a prior pass.

## entry 195

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 196

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 197

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 198

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 199

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 200

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 201

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 202

- Walk both pointers from each end inward; advance the smaller side.

## entry 203

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 204

- Splay tree: every access splays to the root; amortized O(log n).

## entry 205

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 206

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 207

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 208

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 209

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 210

- LIS via patience: each pile holds the smallest tail of length k.

## entry 211

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 212

- Walk both pointers from each end inward; advance the smaller side.

## entry 213

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 214

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 215

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 216

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 217

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 218

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 219

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 220

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 221

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 222

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 223

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 224

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 225

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 226

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 227

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 228

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
