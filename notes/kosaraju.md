# kosaraju

## entry 1

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 10

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 11

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 12

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 13

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 14

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 15

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 16

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 18

- Greedy by end-time picks the most non-overlapping intervals.

## entry 19

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 20

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 21

- Stable sort matters when a secondary key was set in a prior pass.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 25

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 27

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 28

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 29

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 30

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 31

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 32

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 35

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 36

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 37

- Walk both pointers from each end inward; advance the smaller side.

## entry 38

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 39

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 40

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 41

- Euler tour flattens a tree into an array for range-query LCA.

## entry 42

- Stable sort matters when a secondary key was set in a prior pass.

## entry 43

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 44

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 46

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 47

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 49

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 50

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 51

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 52

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 53

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 54

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 55

- Euler tour flattens a tree into an array for range-query LCA.

## entry 56

- Walk both pointers from each end inward; advance the smaller side.

## entry 57

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 58

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 59

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 60

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 61

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 62

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 63

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 64

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 65

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 66

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 68

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 69

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 70

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 71

- Splay tree: every access splays to the root; amortized O(log n).

## entry 72

- Walk both pointers from each end inward; advance the smaller side.

## entry 73

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 74

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 75

- LIS via patience: each pile holds the smallest tail of length k.

## entry 76

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 77

- Heap when you only need top-k; full sort is wasted work.

## entry 78

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 79

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 80

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 81

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 82

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 83

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 84

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 87

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 88

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 89

- Splay tree: every access splays to the root; amortized O(log n).

## entry 90

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 91

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 92

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 93

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 94

- StringBuilder: amortize allocation by doubling on grow.

## entry 95

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 96

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 97

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 98

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 99

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 100

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 101

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 102

- Monotonic stack pops while the new element violates the invariant.

## entry 103

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 104

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 105

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 106

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 107

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 108

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 109

- Heap when you only need top-k; full sort is wasted work.

## entry 110

- StringBuilder: amortize allocation by doubling on grow.

## entry 111

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 112

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 113

- Euler tour flattens a tree into an array for range-query LCA.

## entry 114

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 115

- Euler tour flattens a tree into an array for range-query LCA.

## entry 116

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 117

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 118

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 119

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 120

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 121

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 122

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 123

- Walk both pointers from each end inward; advance the smaller side.

## entry 124

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 125

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 126

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 127

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 128

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 129

- Heap when you only need top-k; full sort is wasted work.

## entry 130

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 131

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 132

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 133

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 134

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 135

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 136

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 137

- StringBuilder: amortize allocation by doubling on grow.

## entry 138

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 139

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 140

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 141

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 142

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 143

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 144

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 145

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 146

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 147

- LIS via patience: each pile holds the smallest tail of length k.

## entry 148

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 149

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 150

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 151

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 152

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 153

- Stable sort matters when a secondary key was set in a prior pass.

## entry 154

- Walk both pointers from each end inward; advance the smaller side.

## entry 155

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 156

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 157

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 158

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 159

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 160

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 161

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 162

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 163

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 164

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 165

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 166

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 167

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 168

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 169

- LIS via patience: each pile holds the smallest tail of length k.

## entry 170

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 171

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 172

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 173

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 174

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 175

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 176

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 177

- StringBuilder: amortize allocation by doubling on grow.

## entry 178

- LIS via patience: each pile holds the smallest tail of length k.

## entry 179

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 180

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 181

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 182

- Walk both pointers from each end inward; advance the smaller side.

## entry 183

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 184

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 185

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 186

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 187

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 188

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 189

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 190

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 191

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 192

- Stable sort matters when a secondary key was set in a prior pass.

## entry 193

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 194

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 195

- Greedy by end-time picks the most non-overlapping intervals.

## entry 196

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 197

- LIS via patience: each pile holds the smallest tail of length k.

## entry 198

- Heap when you only need top-k; full sort is wasted work.

## entry 199

- StringBuilder: amortize allocation by doubling on grow.

## entry 200

- Walk both pointers from each end inward; advance the smaller side.

## entry 201

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 202

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 203

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 204

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 205

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 206

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 207

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 208

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 209

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 210

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 211

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 212

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 213

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 214

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 215

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 216

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 217

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 218

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 219

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 220

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 221

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 222

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 223

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 224

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 225

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 226

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 227

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 228

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 229

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 230

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 231

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 232

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 233

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 234

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 235

- LIS via patience: each pile holds the smallest tail of length k.

## entry 236

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 237

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 238

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 239

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 240

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 241

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 242

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 243

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 244

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 245

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 246

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 247

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 248

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 249

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
