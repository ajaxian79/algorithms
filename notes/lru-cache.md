# lru-cache

## entry 1

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 6

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 7

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 10

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 11

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 14

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 18

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 20

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 21

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 22

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 23

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 24

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 25

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 26

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 27

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 30

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 32

- Greedy by end-time picks the most non-overlapping intervals.

## entry 33

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 35

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 36

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 37

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 39

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 40

- Splay tree: every access splays to the root; amortized O(log n).

## entry 41

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 42

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 44

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 45

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 46

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 47

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 48

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 49

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 50

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 51

- StringBuilder: amortize allocation by doubling on grow.

## entry 52

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 53

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 54

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 55

- Splay tree: every access splays to the root; amortized O(log n).

## entry 56

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 57

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 59

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 60

- Monotonic stack pops while the new element violates the invariant.

## entry 61

- Greedy by end-time picks the most non-overlapping intervals.

## entry 62

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 63

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 64

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 65

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 66

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 67

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 68

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 69

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 70

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 71

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 72

- Stable sort matters when a secondary key was set in a prior pass.

## entry 73

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 74

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 75

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 76

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 77

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 78

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 79

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 81

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 82

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 83

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 84

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 85

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 86

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 87

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 88

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 89

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 90

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 91

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 92

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 93

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 94

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 95

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 96

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 98

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 100

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 101

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 102

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 103

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 104

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 105

- Stable sort matters when a secondary key was set in a prior pass.

## entry 106

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 107

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 108

- Stable sort matters when a secondary key was set in a prior pass.

## entry 109

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 110

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 111

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 112

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 113

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 114

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 115

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 116

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 117

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 118

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 119

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 120

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 121

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 122

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 123

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 124

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 125

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 126

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 127

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 128

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 129

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 130

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 131

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 132

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 133

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 134

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 135

- Splay tree: every access splays to the root; amortized O(log n).

## entry 136

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 137

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 138

- Heap when you only need top-k; full sort is wasted work.

## entry 139

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 140

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 141

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 142

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 143

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 144

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 145

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 146

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 147

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 148

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 149

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 150

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 151

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 152

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 153

- LIS via patience: each pile holds the smallest tail of length k.

## entry 154

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 155

- Walk both pointers from each end inward; advance the smaller side.

## entry 156

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 157

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 158

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 159

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 160

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 161

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 162

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 163

- Splay tree: every access splays to the root; amortized O(log n).

## entry 164

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 165

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 166

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 167

- Splay tree: every access splays to the root; amortized O(log n).

## entry 168

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 169

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 170

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 171

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 172

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 173

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 174

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 175

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 176

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 177

- LIS via patience: each pile holds the smallest tail of length k.

## entry 178

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 179

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 180

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 181

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 182

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 183

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 184

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 185

- Heap when you only need top-k; full sort is wasted work.

## entry 186

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 187

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 188

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 189

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 190

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 191

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 192

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 193

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 194

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 195

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 196

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 197

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 198

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 199

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 200

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 201

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 202

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 203

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 204

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 205

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 206

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 207

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 208

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 209

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 210

- Splay tree: every access splays to the root; amortized O(log n).

## entry 211

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 212

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 213

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
