# tree-dp

## entry 1

- Heap when you only need top-k; full sort is wasted work.

## entry 2

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 6

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 7

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 8

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 9

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 11

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 12

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 13

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

- Walk both pointers from each end inward; advance the smaller side.

## entry 15

- LIS via patience: each pile holds the smallest tail of length k.

## entry 16

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 17

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 20

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 24

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 27

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 28

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 29

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 30

- Walk both pointers from each end inward; advance the smaller side.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 32

- Stable sort matters when a secondary key was set in a prior pass.

## entry 33

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

- Monotonic stack pops while the new element violates the invariant.

## entry 37

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 38

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 40

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 41

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 43

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 44

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 45

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 46

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 47

- Euler tour flattens a tree into an array for range-query LCA.

## entry 48

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 49

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 50

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 51

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 52

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 53

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 54

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 55

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 56

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 58

- Greedy by end-time picks the most non-overlapping intervals.

## entry 59

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 60

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 61

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 62

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 63

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 64

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 65

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 66

- Stable sort matters when a secondary key was set in a prior pass.

## entry 67

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 68

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 69

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 71

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 72

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 73

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 74

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 75

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 76

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 78

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 79

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 80

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 81

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 82

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 83

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 84

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 85

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 87

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 88

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 89

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 90

- LIS via patience: each pile holds the smallest tail of length k.

## entry 91

- LIS via patience: each pile holds the smallest tail of length k.

## entry 92

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 93

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 94

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 96

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 97

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 98

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 99

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 100

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 101

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 102

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 103

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 104

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 105

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 106

- Walk both pointers from each end inward; advance the smaller side.

## entry 107

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 108

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 109

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 110

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 111

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 112

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 113

- Euler tour flattens a tree into an array for range-query LCA.

## entry 114

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 115

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 116

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 117

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 118

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 119

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 120

- LIS via patience: each pile holds the smallest tail of length k.

## entry 121

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 122

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 123

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 124

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 125

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 126

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 127

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 128

- Stable sort matters when a secondary key was set in a prior pass.

## entry 129

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 130

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 131

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 132

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 133

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 134

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 135

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 136

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 137

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 138

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 139

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 140

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 141

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 142

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 143

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 144

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 145

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 146

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 147

- LIS via patience: each pile holds the smallest tail of length k.

## entry 148

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 149

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 150

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 151

- Stable sort matters when a secondary key was set in a prior pass.

## entry 152

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 153

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 154

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 155

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 156

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 157

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 158

- Heap when you only need top-k; full sort is wasted work.

## entry 159

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 160

- Monotonic stack pops while the new element violates the invariant.

## entry 161

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 162

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 163

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 164

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 165

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 166

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 167

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 168

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 169

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 170

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 171

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 172

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 173

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 174

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 175

- Euler tour flattens a tree into an array for range-query LCA.

## entry 176

- Heap when you only need top-k; full sort is wasted work.

## entry 177

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 178

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 179

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 180

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 181

- Monotonic stack pops while the new element violates the invariant.

## entry 182

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 183

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 184

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 185

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 186

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 187

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 188

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 189

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 190

- Monotonic stack pops while the new element violates the invariant.

## entry 191

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 192

- Euler tour flattens a tree into an array for range-query LCA.

## entry 193

- Heap when you only need top-k; full sort is wasted work.

## entry 194

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 195

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 196

- Heap when you only need top-k; full sort is wasted work.

## entry 197

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 198

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 199

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 200

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 201

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 202

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 203

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 204

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 205

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 206

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
