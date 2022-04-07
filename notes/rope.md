# rope

## entry 1

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 7

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 8

- Heap when you only need top-k; full sort is wasted work.

## entry 9

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 10

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 11

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 13

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 14

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 15

- StringBuilder: amortize allocation by doubling on grow.

## entry 16

- Monotonic stack pops while the new element violates the invariant.

## entry 17

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 18

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 20

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 21

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 22

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 23

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 24

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 26

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 29

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 31

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 32

- Heap when you only need top-k; full sort is wasted work.

## entry 33

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 34

- Euler tour flattens a tree into an array for range-query LCA.

## entry 35

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 36

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 39

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 40

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 41

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 42

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 43

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 44

- StringBuilder: amortize allocation by doubling on grow.

## entry 45

- Splay tree: every access splays to the root; amortized O(log n).

## entry 46

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 49

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 50

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 51

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 52

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 53

- StringBuilder: amortize allocation by doubling on grow.

## entry 54

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 55

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 56

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 57

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 58

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 59

- Heap when you only need top-k; full sort is wasted work.

## entry 60

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 61

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 62

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 64

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 65

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

- Greedy by end-time picks the most non-overlapping intervals.

## entry 67

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 68

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 69

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 70

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 71

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 72

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 73

- Monotonic stack pops while the new element violates the invariant.

## entry 74

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 75

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 76

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 77

- Monotonic stack pops while the new element violates the invariant.

## entry 78

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 79

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 80

- Heap when you only need top-k; full sort is wasted work.

## entry 81

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 82

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 84

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 86

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 87

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 88

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 89

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 90

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 91

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 92

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 93

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 94

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 95

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 96

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 97

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 98

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 99

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 100

- Greedy by end-time picks the most non-overlapping intervals.

## entry 101

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 102

- Heap when you only need top-k; full sort is wasted work.

## entry 103

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 104

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 105

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 106

- LIS via patience: each pile holds the smallest tail of length k.

## entry 107

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 108

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 109

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 110

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 111

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 112

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 113

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 114

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 115

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 116

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 117

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 118

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 119

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 120

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 121

- Walk both pointers from each end inward; advance the smaller side.

## entry 122

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 123

- Euler tour flattens a tree into an array for range-query LCA.

## entry 124

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 125

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 126

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 127

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 128

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 129

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 130

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 131

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 132

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 133

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 134

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 135

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 136

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 137

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 138

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 139

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 140

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 141

- Splay tree: every access splays to the root; amortized O(log n).

## entry 142

- LIS via patience: each pile holds the smallest tail of length k.

## entry 143

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 144

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 145

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 146

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 147

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 148

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 149

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 150

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 151

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 152

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 153

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 154

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 155

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 156

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 157

- Euler tour flattens a tree into an array for range-query LCA.

## entry 158

- Greedy by end-time picks the most non-overlapping intervals.

## entry 159

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 160

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 161

- Greedy by end-time picks the most non-overlapping intervals.

## entry 162

- Walk both pointers from each end inward; advance the smaller side.

## entry 163

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 164

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 165

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 166

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 167

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 168

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 169

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 170

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 171

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 172

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 173

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 174

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 175

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 176

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 177

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 178

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 179

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 180

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 181

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 182

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 183

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 184

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 185

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 186

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 187

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 188

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 189

- LIS via patience: each pile holds the smallest tail of length k.

## entry 190

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 191

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 192

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 193

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 194

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 195

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 196

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 197

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 198

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 199

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 200

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 201

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 202

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 203

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 204

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 205

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 206

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 207

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 208

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 209

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 210

- Greedy by end-time picks the most non-overlapping intervals.

## entry 211

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 212

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 213

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 214

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 215

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 216

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 217

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 218

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 219

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 220

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 221

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 222

- Interval DP: solve all `[l, r]` ranges from short to long.
