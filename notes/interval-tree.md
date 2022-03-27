# interval-tree

## entry 1

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 6

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 7

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 8

- StringBuilder: amortize allocation by doubling on grow.

## entry 9

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 10

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 12

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 15

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 16

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 25

- Greedy by end-time picks the most non-overlapping intervals.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 28

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 30

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 31

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 32

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 34

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 35

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 36

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 37

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 38

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 39

- StringBuilder: amortize allocation by doubling on grow.

## entry 40

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 41

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 42

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 43

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 44

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 45

- StringBuilder: amortize allocation by doubling on grow.

## entry 46

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 48

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 49

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 50

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 51

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 52

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 53

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 54

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 55

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 56

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 57

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 60

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 61

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 62

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 63

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 64

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 65

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 67

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 68

- Euler tour flattens a tree into an array for range-query LCA.

## entry 69

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 70

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 71

- StringBuilder: amortize allocation by doubling on grow.

## entry 72

- StringBuilder: amortize allocation by doubling on grow.

## entry 73

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 74

- Monotonic stack pops while the new element violates the invariant.

## entry 75

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 76

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 77

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 78

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 79

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 80

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 81

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 82

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 83

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 84

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 85

- Euler tour flattens a tree into an array for range-query LCA.

## entry 86

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 87

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 88

- Splay tree: every access splays to the root; amortized O(log n).

## entry 89

- Greedy by end-time picks the most non-overlapping intervals.

## entry 90

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 91

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 92

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 93

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 94

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 95

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 96

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 97

- Splay tree: every access splays to the root; amortized O(log n).

## entry 98

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 99

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 100

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 101

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 102

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 103

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 104

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 105

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 106

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 107

- Heap when you only need top-k; full sort is wasted work.

## entry 108

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 109

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 110

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 111

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 112

- Monotonic stack pops while the new element violates the invariant.

## entry 113

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 114

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 115

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 116

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 117

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 118

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 119

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 120

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 121

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 122

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 123

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 124

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 125

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 126

- Monotonic stack pops while the new element violates the invariant.

## entry 127

- Stable sort matters when a secondary key was set in a prior pass.

## entry 128

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 129

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 130

- LIS via patience: each pile holds the smallest tail of length k.

## entry 131

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 132

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 133

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 134

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 135

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 136

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 137

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 138

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 139

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 140

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 141

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 142

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 143

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 144

- Stable sort matters when a secondary key was set in a prior pass.

## entry 145

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 146

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 147

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 148

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 149

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 150

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 151

- LIS via patience: each pile holds the smallest tail of length k.

## entry 152

- Monotonic stack pops while the new element violates the invariant.

## entry 153

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 154

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 155

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 156

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 157

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 158

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 159

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 160

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 161

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 162

- Splay tree: every access splays to the root; amortized O(log n).

## entry 163

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 164

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 165

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 166

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 167

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 168

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 169

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 170

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 171

- Heap when you only need top-k; full sort is wasted work.

## entry 172

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 173

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 174

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 175

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 176

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 177

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 178

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 179

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 180

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 181

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 182

- Heap when you only need top-k; full sort is wasted work.

## entry 183

- Euler tour flattens a tree into an array for range-query LCA.

## entry 184

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 185

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 186

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 187

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 188

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 189

- Walk both pointers from each end inward; advance the smaller side.

## entry 190

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 191

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 192

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 193

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 194

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 195

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 196

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 197

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 198

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 199

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 200

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 201

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 202

- Euler tour flattens a tree into an array for range-query LCA.

## entry 203

- Greedy by end-time picks the most non-overlapping intervals.

## entry 204

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 205

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 206

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 207

- Greedy by end-time picks the most non-overlapping intervals.

## entry 208

- Stable sort matters when a secondary key was set in a prior pass.

## entry 209

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 210

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 211

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 212

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 213

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 214

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 215

- LCA via binary lifting: jump up powers of two until depths match, then converge.
