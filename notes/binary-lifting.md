# binary-lifting

## entry 1

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 6

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 7

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 8

- Euler tour flattens a tree into an array for range-query LCA.

## entry 9

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 10

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 11

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 12

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 13

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 14

- LIS via patience: each pile holds the smallest tail of length k.

## entry 15

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 16

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 17

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 18

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 19

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 20

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 21

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 22

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 23

- StringBuilder: amortize allocation by doubling on grow.

## entry 24

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 25

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 26

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 27

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 30

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 31

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 32

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 33

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 34

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 35

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 36

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 38

- Heap when you only need top-k; full sort is wasted work.

## entry 39

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 40

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 41

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 42

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 43

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 45

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 46

- Greedy by end-time picks the most non-overlapping intervals.

## entry 47

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 48

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 49

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 50

- Splay tree: every access splays to the root; amortized O(log n).

## entry 51

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 52

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 53

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 54

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 55

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 56

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 57

- Euler tour flattens a tree into an array for range-query LCA.

## entry 58

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 59

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 60

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 61

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 63

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 64

- Monotonic stack pops while the new element violates the invariant.

## entry 65

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 66

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 67

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 68

- LIS via patience: each pile holds the smallest tail of length k.

## entry 69

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 70

- Monotonic stack pops while the new element violates the invariant.

## entry 71

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 72

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 73

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 74

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 75

- StringBuilder: amortize allocation by doubling on grow.

## entry 76

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 77

- Heap when you only need top-k; full sort is wasted work.

## entry 78

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 79

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 80

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 81

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 82

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 83

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 84

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 85

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 86

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 87

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 88

- Monotonic stack pops while the new element violates the invariant.

## entry 89

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 90

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 91

- Monotonic stack pops while the new element violates the invariant.

## entry 92

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 93

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 94

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 95

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 96

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 98

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 99

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 100

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 101

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 102

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 103

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 104

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 105

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 106

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 107

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 108

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 109

- Walk both pointers from each end inward; advance the smaller side.

## entry 110

- Walk both pointers from each end inward; advance the smaller side.

## entry 111

- Euler tour flattens a tree into an array for range-query LCA.

## entry 112

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 113

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 115

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 116

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 117

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 118

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 119

- Splay tree: every access splays to the root; amortized O(log n).

## entry 120

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 121

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 122

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 123

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 124

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 125

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 126

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 127

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 128

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 129

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 130

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 131

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 132

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 133

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 134

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 135

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 136

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 137

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 138

- Greedy by end-time picks the most non-overlapping intervals.

## entry 139

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 140

- Euler tour flattens a tree into an array for range-query LCA.

## entry 141

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 142

- Euler tour flattens a tree into an array for range-query LCA.

## entry 143

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 144

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 145

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 146

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 147

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 148

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 149

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 150

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 151

- Monotonic stack pops while the new element violates the invariant.

## entry 152

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 153

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 154

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 155

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 156

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 157

- LIS via patience: each pile holds the smallest tail of length k.

## entry 158

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 159

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 160

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 161

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 162

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 163

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 164

- Heap when you only need top-k; full sort is wasted work.

## entry 165

- Splay tree: every access splays to the root; amortized O(log n).

## entry 166

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 167

- Greedy by end-time picks the most non-overlapping intervals.

## entry 168

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 169

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 170

- Greedy by end-time picks the most non-overlapping intervals.

## entry 171

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 172

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 173

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 174

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 175

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 176

- Euler tour flattens a tree into an array for range-query LCA.

## entry 177

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 178

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 179

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 180

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 181

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 182

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 183

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 184

- Stable sort matters when a secondary key was set in a prior pass.

## entry 185

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 186

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 187

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 188

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 189

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 190

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 191

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 192

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 193

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 194

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 195

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 196

- Splay tree: every access splays to the root; amortized O(log n).

## entry 197

- LIS via patience: each pile holds the smallest tail of length k.

## entry 198

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 199

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 200

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 201

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 202

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 203

- Hash collision: chain or open-address; chained handles arbitrary load factor.
