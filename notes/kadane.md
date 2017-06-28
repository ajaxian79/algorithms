# kadane

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Greedy by end-time picks the most non-overlapping intervals.

- Heap when you only need top-k; full sort is wasted work.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- In-place compaction uses two pointers: read advances always, write only on keep.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Stable sort matters when a secondary key was set in a prior pass.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic stack pops while the new element violates the invariant.

- Walk both pointers from each end inward; advance the smaller side.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 6

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

- LIS via patience: each pile holds the smallest tail of length k.

## entry 8

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 9

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 10

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 12

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 13

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 14

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 15

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 16

- StringBuilder: amortize allocation by doubling on grow.

## entry 17

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 18

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 19

- Greedy by end-time picks the most non-overlapping intervals.

## entry 20

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 23

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 24

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 25

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 26

- Heap when you only need top-k; full sort is wasted work.

## entry 27

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 28

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 29

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 30

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 31

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 32

- Walk both pointers from each end inward; advance the smaller side.

## entry 33

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 34

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 35

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 36

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 37

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 38

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 39

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 40

- Greedy by end-time picks the most non-overlapping intervals.

## entry 41

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 42

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 43

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 44

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 45

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 47

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 48

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 49

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 50

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 51

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 52

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 53

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 54

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 55

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 56

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 57

- Greedy by end-time picks the most non-overlapping intervals.

## entry 58

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 59

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 60

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 61

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 62

- Monotonic stack pops while the new element violates the invariant.

## entry 63

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 64

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 65

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 66

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 67

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 69

- Splay tree: every access splays to the root; amortized O(log n).

## entry 70

- StringBuilder: amortize allocation by doubling on grow.

## entry 71

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 72

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 73

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 74

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 75

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 76

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 77

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 78

- StringBuilder: amortize allocation by doubling on grow.

## entry 79

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 80

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 81

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 82

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 83

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 84

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 85

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 86

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 87

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 88

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 89

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 90

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 91

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 92

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 93

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 94

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 95

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 96

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 97

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 98

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 99

- Walk both pointers from each end inward; advance the smaller side.

## entry 100

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 101

- StringBuilder: amortize allocation by doubling on grow.

## entry 102

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 103

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 104

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 105

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 106

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 107

- Stable sort matters when a secondary key was set in a prior pass.

## entry 108

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 109

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 110

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 111

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 112

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 113

- Heap when you only need top-k; full sort is wasted work.

## entry 114

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 115

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 116

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 117

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 118

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 119

- Splay tree: every access splays to the root; amortized O(log n).

## entry 120

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 121

- Heap when you only need top-k; full sort is wasted work.

## entry 122

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 123

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 124

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 125

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 126

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 127

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 128

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 129

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 130

- Heap when you only need top-k; full sort is wasted work.

## entry 131

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 132

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 133

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 134

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 135

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 136

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 137

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 138

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 139

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 140

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 141

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 142

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 143

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 144

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 145

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 146

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 147

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 148

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 149

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 150

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 151

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 152

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 153

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 154

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 155

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 156

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 157

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 158

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 159

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 160

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 161

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 162

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 163

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 164

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 165

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 166

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 167

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 168

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 169

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 170

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 171

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 172

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 173

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 174

- LIS via patience: each pile holds the smallest tail of length k.

## entry 175

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 176

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 177

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 178

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 179

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 180

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 181

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 182

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 183

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 184

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 185

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 186

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 187

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 188

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 189

- Stable sort matters when a secondary key was set in a prior pass.

## entry 190

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 191

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 192

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 193

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 194

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 195

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 196

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 197

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 198

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 199

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 200

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 201

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 202

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 203

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 204

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 205

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 206

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 207

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 208

- Stable sort matters when a secondary key was set in a prior pass.

## entry 209

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 210

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 211

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 212

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 213

- Splay tree: every access splays to the root; amortized O(log n).

## entry 214

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 215

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 216

- Euler tour flattens a tree into an array for range-query LCA.

## entry 217

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 218

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 219

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 220

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 221

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 222

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 223

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 224

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 225

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 226

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 227

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 228

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 229

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 230

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 231

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 232

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 233

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 234

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 235

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 236

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 237

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 238

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 239

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 240

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 241

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 242

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 243

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 244

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 245

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 246

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 247

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 248

- Splay tree: every access splays to the root; amortized O(log n).

## entry 249

- LIS via patience: each pile holds the smallest tail of length k.

## entry 250

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 251

- Stable sort matters when a secondary key was set in a prior pass.

## entry 252

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 253

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 254

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 255

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 256

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 257

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 258

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 259

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 260

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 261

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 262

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 263

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 264

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 265

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 266

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 267

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 268

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 269

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 270

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 271

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 272

- Greedy by end-time picks the most non-overlapping intervals.

## entry 273

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 274

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 275

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 276

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 277

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 278

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 279

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 280

- Monotonic stack pops while the new element violates the invariant.

## entry 281

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 282

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 283

- Greedy by end-time picks the most non-overlapping intervals.

## entry 284

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 285

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 286

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 287

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 288

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 289

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 290

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 291

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 292

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 293

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 294

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 295

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 296

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 297

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 298

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 299

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 300

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 301

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 302

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 303

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 304

- LIS via patience: each pile holds the smallest tail of length k.

## entry 305

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 306

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 307

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 308

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 309

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 310

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 311

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 312

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 313

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 314

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 315

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 316

- StringBuilder: amortize allocation by doubling on grow.

## entry 317

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 318

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 319

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 320

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 321

- Splay tree: every access splays to the root; amortized O(log n).

## entry 322

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 323

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 324

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 325

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 326

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 327

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 328

- Stable sort matters when a secondary key was set in a prior pass.

## entry 329

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 330

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 331

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 332

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 333

- StringBuilder: amortize allocation by doubling on grow.

## entry 334

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 335

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 336

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 337

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 338

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 339

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 340

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 341

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 342

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 343

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 344

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 345

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 346

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 347

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 348

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 349

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 350

- Stable sort matters when a secondary key was set in a prior pass.

## entry 351

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 352

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 353

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 354

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 355

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 356

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 357

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 358

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 359

- StringBuilder: amortize allocation by doubling on grow.

## entry 360

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 361

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 362

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 363

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 364

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 365

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 366

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 367

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 368

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 369

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 370

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 371

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 372

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 373

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 374

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 375

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 376

- Splay tree: every access splays to the root; amortized O(log n).

## entry 377

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 378

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 379

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 380

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 381

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 382

- Monotonic stack pops while the new element violates the invariant.

## entry 383

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 384

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 385

- Greedy by end-time picks the most non-overlapping intervals.

## entry 386

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 387

- StringBuilder pitfall: reuse forces a deep copy on the first read.
