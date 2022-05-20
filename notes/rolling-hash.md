# rolling-hash

- Walk both pointers from each end inward; advance the smaller side.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Stable sort matters when a secondary key was set in a prior pass.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic stack pops while the new element violates the invariant.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Greedy by end-time picks the most non-overlapping intervals.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Heap when you only need top-k; full sort is wasted work.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- Monotonic stack pops while the new element violates the invariant.

## entry 8

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 9

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 10

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 11

- Euler tour flattens a tree into an array for range-query LCA.

## entry 12

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 13

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 14

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 15

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 18

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 19

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 20

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 21

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 24

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 28

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 29

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 32

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 33

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 38

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 39

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 40

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 41

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 42

- Euler tour flattens a tree into an array for range-query LCA.

## entry 43

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 44

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 45

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 48

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 49

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 50

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 51

- Stable sort matters when a secondary key was set in a prior pass.

## entry 52

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 53

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 54

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 56

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 57

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 58

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 59

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 60

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 63

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 64

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 65

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 66

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 67

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 68

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 69

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 70

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 71

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 72

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 73

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 74

- Heap when you only need top-k; full sort is wasted work.

## entry 75

- Heap when you only need top-k; full sort is wasted work.

## entry 76

- LIS via patience: each pile holds the smallest tail of length k.

## entry 77

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 78

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 79

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 80

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 81

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 82

- Stable sort matters when a secondary key was set in a prior pass.

## entry 83

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 84

- Monotonic stack pops while the new element violates the invariant.

## entry 85

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 86

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 88

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 89

- Heap when you only need top-k; full sort is wasted work.

## entry 90

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 91

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 92

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 93

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 94

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 95

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 96

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 97

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 98

- Walk both pointers from each end inward; advance the smaller side.

## entry 99

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 100

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 101

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 102

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 103

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 104

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 105

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 106

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 107

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 108

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 109

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 110

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 111

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 112

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 113

- StringBuilder: amortize allocation by doubling on grow.

## entry 114

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 115

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 116

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 117

- Walk both pointers from each end inward; advance the smaller side.

## entry 118

- StringBuilder: amortize allocation by doubling on grow.

## entry 119

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 120

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 121

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 122

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 123

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 124

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 125

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 126

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 127

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 128

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 129

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 130

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 131

- Greedy by end-time picks the most non-overlapping intervals.

## entry 132

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 133

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 134

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 135

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 136

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 137

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 138

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 139

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 140

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 141

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 142

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 143

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 144

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 145

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 146

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 147

- Euler tour flattens a tree into an array for range-query LCA.

## entry 148

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 149

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 150

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 151

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 152

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 153

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 154

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 155

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 156

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 157

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 158

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 159

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 160

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 161

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 162

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 163

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 164

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 165

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 166

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 167

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 168

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 169

- Euler tour flattens a tree into an array for range-query LCA.

## entry 170

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 171

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 172

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 173

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 174

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 175

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 176

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 177

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 178

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 179

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 180

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 181

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 182

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 183

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 184

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 185

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 186

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 187

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 188

- Heap when you only need top-k; full sort is wasted work.

## entry 189

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 190

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 191

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 192

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 193

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 194

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 195

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 196

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 197

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 198

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 199

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 200

- Heap when you only need top-k; full sort is wasted work.

## entry 201

- Heap when you only need top-k; full sort is wasted work.

## entry 202

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 203

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 204

- Heap when you only need top-k; full sort is wasted work.

## entry 205

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 206

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 207

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 208

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 209

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 210

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 211

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 212

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 213

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 214

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 215

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 216

- Interval tree: stores intervals on the median; query traverses O(log n) levels.
