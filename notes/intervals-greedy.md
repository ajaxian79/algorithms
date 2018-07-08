# intervals-greedy

- Stable sort matters when a secondary key was set in a prior pass.

- Greedy by end-time picks the most non-overlapping intervals.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Monotonic stack pops while the new element violates the invariant.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Walk both pointers from each end inward; advance the smaller side.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Heap when you only need top-k; full sort is wasted work.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 6

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 7

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 8

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 9

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 10

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 11

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 12

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 14

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

- Splay tree: every access splays to the root; amortized O(log n).

## entry 16

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 17

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 18

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 19

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 20

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 21

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 22

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 23

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 25

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 26

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 27

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 28

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 29

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 30

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 31

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 32

- Splay tree: every access splays to the root; amortized O(log n).

## entry 33

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 34

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 35

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 36

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 37

- Stable sort matters when a secondary key was set in a prior pass.

## entry 38

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 39

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 40

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 41

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 43

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 44

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 45

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 46

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Greedy by end-time picks the most non-overlapping intervals.

## entry 49

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 50

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 51

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 52

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 53

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 54

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 55

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 57

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 58

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 59

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 60

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 61

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 62

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 63

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 64

- LIS via patience: each pile holds the smallest tail of length k.

## entry 65

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 66

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 67

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 68

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 69

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 70

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 71

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 72

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 73

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 74

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 75

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 76

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 77

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

- Stable sort matters when a secondary key was set in a prior pass.

## entry 79

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 80

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 81

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 82

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 83

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 84

- Walk both pointers from each end inward; advance the smaller side.

## entry 85

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 86

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 87

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 88

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 89

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 90

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 91

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 92

- Walk both pointers from each end inward; advance the smaller side.

## entry 93

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 94

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 95

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 96

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 97

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 98

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 99

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 100

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 101

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 102

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 103

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 104

- Greedy by end-time picks the most non-overlapping intervals.

## entry 105

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 106

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 107

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 108

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 109

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 110

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 111

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 112

- Splay tree: every access splays to the root; amortized O(log n).

## entry 113

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 115

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 116

- Splay tree: every access splays to the root; amortized O(log n).

## entry 117

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 118

- StringBuilder: amortize allocation by doubling on grow.

## entry 119

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 120

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 121

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 122

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 123

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 124

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 125

- Walk both pointers from each end inward; advance the smaller side.

## entry 126

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 127

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 128

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 129

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 130

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 131

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 132

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 133

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 134

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 135

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 136

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 137

- Splay tree: every access splays to the root; amortized O(log n).

## entry 138

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 139

- Stable sort matters when a secondary key was set in a prior pass.

## entry 140

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 141

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 142

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 143

- LIS via patience: each pile holds the smallest tail of length k.

## entry 144

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 145

- Walk both pointers from each end inward; advance the smaller side.

## entry 146

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

- Monotonic stack pops while the new element violates the invariant.

## entry 148

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 149

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 150

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 151

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 152

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 153

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 154

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 155

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 156

- Splay tree: every access splays to the root; amortized O(log n).

## entry 157

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 158

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 159

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 160

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 161

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 162

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 163

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 164

- Euler tour flattens a tree into an array for range-query LCA.

## entry 165

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 166

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 167

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 168

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 169

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 170

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 171

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 172

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 173

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 174

- Greedy by end-time picks the most non-overlapping intervals.

## entry 175

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 176

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 177

- Stable sort matters when a secondary key was set in a prior pass.

## entry 178

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 179

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 180

- Greedy by end-time picks the most non-overlapping intervals.

## entry 181

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 182

- Heap when you only need top-k; full sort is wasted work.

## entry 183

- Splay tree: every access splays to the root; amortized O(log n).

## entry 184

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 185

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 186

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 187

- Heap when you only need top-k; full sort is wasted work.

## entry 188

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 189

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 190

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 191

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 192

- Greedy by end-time picks the most non-overlapping intervals.

## entry 193

- Greedy by end-time picks the most non-overlapping intervals.

## entry 194

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 195

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 196

- Monotonic stack pops while the new element violates the invariant.

## entry 197

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 198

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 199

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 200

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 201

- Euler tour flattens a tree into an array for range-query LCA.

## entry 202

- Heap when you only need top-k; full sort is wasted work.

## entry 203

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 204

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 205

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 206

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 207

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 208

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 209

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 210

- Euler tour flattens a tree into an array for range-query LCA.

## entry 211

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 212

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 213

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 214

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 215

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 216

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 217

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 218

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 219

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 220

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 221

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 222

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 223

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 224

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 225

- Walk both pointers from each end inward; advance the smaller side.

## entry 226

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 227

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 228

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 229

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 230

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 231

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 232

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 233

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 234

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 235

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 236

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 237

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 238

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 239

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 240

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 241

- Splay tree: every access splays to the root; amortized O(log n).

## entry 242

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 243

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 244

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 245

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 246

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 247

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 248

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 249

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 250

- StringBuilder: amortize allocation by doubling on grow.

## entry 251

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 252

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 253

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 254

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 255

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 256

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 257

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 258

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 259

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 260

- Greedy by end-time picks the most non-overlapping intervals.

## entry 261

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 262

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 263

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 264

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 265

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 266

- StringBuilder: amortize allocation by doubling on grow.

## entry 267

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 268

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 269

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 270

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 271

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 272

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 273

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 274

- LIS via patience: each pile holds the smallest tail of length k.

## entry 275

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 276

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 277

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 278

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 279

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 280

- Monotonic stack pops while the new element violates the invariant.

## entry 281

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 282

- LIS via patience: each pile holds the smallest tail of length k.

## entry 283

- Heap when you only need top-k; full sort is wasted work.

## entry 284

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 285

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 286

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 287

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 288

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 289

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 290

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 291

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 292

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 293

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 294

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 295

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 296

- Monotonic stack pops while the new element violates the invariant.

## entry 297

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 298

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 299

- Greedy by end-time picks the most non-overlapping intervals.

## entry 300

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 301

- Splay tree: every access splays to the root; amortized O(log n).

## entry 302

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 303

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 304

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 305

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 306

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 307

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 308

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 309

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 310

- Splay tree: every access splays to the root; amortized O(log n).

## entry 311

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 312

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 313

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 314

- Splay tree: every access splays to the root; amortized O(log n).

## entry 315

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 316

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 317

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 318

- Stable sort matters when a secondary key was set in a prior pass.

## entry 319

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 320

- Stable sort matters when a secondary key was set in a prior pass.

## entry 321

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 322

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 323

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 324

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 325

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 326

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 327

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 328

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 329

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 330

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 331

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 332

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 333

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 334

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 335

- Euler tour flattens a tree into an array for range-query LCA.

## entry 336

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 337

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 338

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 339

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 340

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 341

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 342

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 343

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 344

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 345

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 346

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 347

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 348

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 349

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 350

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 351

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 352

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 353

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 354

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 355

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 356

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 357

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
