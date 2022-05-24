# binary-lifting

## entry 1

Articulation points: same DFS as bridges, with a slightly different test.

## entry 2

Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4

StringBuilder: amortize allocation by doubling on grow.

## entry 5

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 8

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 10

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 11

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 12

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 13

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 14

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 15

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 16

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 17

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 18

LIS via patience: each pile holds the smallest tail of length k.

## entry 19

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 20

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 21

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 22

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 23

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 26

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 27

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 32

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 33

Union-Find with path compression amortizes to near-O(1) per op.

## entry 34

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 35

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 36

State compression: bitmask + integer encodes a small subset cheaply.

## entry 37

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 38

Union-Find with path compression amortizes to near-O(1) per op.

## entry 39

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 40

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 41

Monotonic stack pops while the new element violates the invariant.

## entry 42

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 43

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 44

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 45

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 47

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 48

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 49

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 50

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 51

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 52

Monotonic stack pops while the new element violates the invariant.

## entry 53

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 54

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 55

Greedy by end-time picks the most non-overlapping intervals.

## entry 56

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 57

Union-Find with path compression amortizes to near-O(1) per op.

## entry 58

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 59

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 60

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 61

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 62

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 63

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 64

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

Greedy by end-time picks the most non-overlapping intervals.

## entry 66

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 67

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 68

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 69

Walk both pointers from each end inward; advance the smaller side.

## entry 70

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 71

Euler tour flattens a tree into an array for range-query LCA.

## entry 72

LIS via patience: each pile holds the smallest tail of length k.

## entry 73

Heap when you only need top-k; full sort is wasted work.

## entry 74

Union-Find with path compression amortizes to near-O(1) per op.

## entry 75

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 76

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 77

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 78

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 79

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 80

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 81

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 82

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 83

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 84

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 85

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 86

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 87

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 88

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

Articulation points: same DFS as bridges, with a slightly different test.

## entry 91

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 92

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 93

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 94

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 95

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 96

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 97

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 98

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 99

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 100

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 101

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 102

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 103

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 104

Euler tour flattens a tree into an array for range-query LCA.

## entry 105

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 106

Walk both pointers from each end inward; advance the smaller side.

## entry 107

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 108

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 109

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 110

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 111

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

LIS via patience: each pile holds the smallest tail of length k.

## entry 113

StringBuilder: amortize allocation by doubling on grow.

## entry 114

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 115

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 116

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 117

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 118

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 119

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 120

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 121

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 122

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 123

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 124

Articulation points: same DFS as bridges, with a slightly different test.

## entry 125

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 126

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 127

Articulation points: same DFS as bridges, with a slightly different test.

## entry 128

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 129

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 130

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 131

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 132

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 133

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 134

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 135

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 136

Walk both pointers from each end inward; advance the smaller side.

## entry 137

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 138

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 139

Union-Find with path compression amortizes to near-O(1) per op.

## entry 140

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 141

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 142

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 143

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 144

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 145

Splay tree: every access splays to the root; amortized O(log n).

## entry 146

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 147

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 148

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 149

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 150

StringBuilder: amortize allocation by doubling on grow.

## entry 151

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 152

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 153

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 154

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 155

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 156

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 157

Walk both pointers from each end inward; advance the smaller side.

## entry 158

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 159

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 160

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 161

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 163

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 164

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 165

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 166

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 167

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 168

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 169

Articulation points: same DFS as bridges, with a slightly different test.

## entry 170

Euler tour flattens a tree into an array for range-query LCA.

## entry 171

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 172

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 173

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 174

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 175

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 176

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 177

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 178

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 179

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 180

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 181

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 182

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 183

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 184

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 185

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 186

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 187

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 188

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 189

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 190

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 191

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 192

Stable sort matters when a secondary key was set in a prior pass.

## entry 193

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 194

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 195

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 196

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 197

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 198

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 199

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 200

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 201

Walk both pointers from each end inward; advance the smaller side.

## entry 202

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 203

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 204

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 205

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 206

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 207

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 208

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 209

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 210

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 211

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 212

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 213

Merge intervals: sort by start; extend the running interval while overlapping.
