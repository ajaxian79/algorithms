# graph-dp

## entry 1

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

- Euler tour flattens a tree into an array for range-query LCA.

## entry 9

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 11

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 12

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 15

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 16

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 17

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- LIS via patience: each pile holds the smallest tail of length k.

## entry 20

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 22

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 23

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 24

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 25

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 26

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 27

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 29

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 30

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 31

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 32

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 33

- Splay tree: every access splays to the root; amortized O(log n).

## entry 34

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 35

- Monotonic stack pops while the new element violates the invariant.

## entry 36

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 37

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 38

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

- Walk both pointers from each end inward; advance the smaller side.

## entry 40

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 41

- Stable sort matters when a secondary key was set in a prior pass.

## entry 42

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 43

- Stable sort matters when a secondary key was set in a prior pass.

## entry 44

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 45

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 46

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 49

- Monotonic stack pops while the new element violates the invariant.

## entry 50

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 51

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 52

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 53

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 54

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 55

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 56

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 58

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 59

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 60

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 62

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 63

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 64

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 65

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 66

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 67

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 68

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 69

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 70

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 71

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 72

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 73

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 75

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 76

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 79

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 80

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 81

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 82

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 83

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 84

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 85

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 86

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 87

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 88

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 89

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 90

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 91

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 92

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 93

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 94

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 96

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 97

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 98

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 100

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 101

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 102

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 103

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 104

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 105

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 106

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 107

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 108

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 109

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 110

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

- Heap when you only need top-k; full sort is wasted work.

## entry 112

- Stable sort matters when a secondary key was set in a prior pass.

## entry 113

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 114

- Stable sort matters when a secondary key was set in a prior pass.

## entry 115

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 116

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 117

- Stable sort matters when a secondary key was set in a prior pass.

## entry 118

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 119

- Stable sort matters when a secondary key was set in a prior pass.

## entry 120

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 121

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 122

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 123

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 124

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 125

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 126

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 127

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 128

- Walk both pointers from each end inward; advance the smaller side.

## entry 129

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 130

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 131

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 132

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 133

- Heap when you only need top-k; full sort is wasted work.

## entry 134

- Greedy by end-time picks the most non-overlapping intervals.

## entry 135

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 136

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 137

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 138

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 139

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 140

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 141

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 142

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 143

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 144

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 145

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 146

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 147

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 148

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 149

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 150

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 151

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 152

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 153

- Splay tree: every access splays to the root; amortized O(log n).

## entry 154

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 155

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 156

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 157

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 158

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 159

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 160

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 161

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 162

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 163

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 164

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 165

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 166

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 167

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 168

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 169

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 170

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 171

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 172

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 173

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 174

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 175

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 176

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 177

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 178

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 179

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 180

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 181

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 182

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 183

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 184

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 185

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 186

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 187

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 188

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 189

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 190

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 191

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 192

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 193

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 194

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 195

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 196

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 197

- Walk both pointers from each end inward; advance the smaller side.

## entry 198

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 199

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 200

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 201

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 202

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 203

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 204

- Heap when you only need top-k; full sort is wasted work.

## entry 205

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 206

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 207

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 208

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
