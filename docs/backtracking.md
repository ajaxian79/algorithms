# backtracking

Morris traversal threads predecessors back to current node — O(1) extra space.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Merge intervals: sort by start; extend the running interval while overlapping.

Stable sort matters when a secondary key was set in a prior pass.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

Greedy by end-time picks the most non-overlapping intervals.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Heap when you only need top-k; full sort is wasted work.

## entry 1

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 6

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 11

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 12

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 13

Monotonic stack pops while the new element violates the invariant.

## entry 14

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 15

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 16

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 17

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 18

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

Splay tree: every access splays to the root; amortized O(log n).

## entry 22

Heap when you only need top-k; full sort is wasted work.

## entry 23

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 24

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 25

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 26

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 27

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 28

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 29

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 30

Heap when you only need top-k; full sort is wasted work.

## entry 31

Monotonic stack pops while the new element violates the invariant.

## entry 32

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 33

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 34

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 35

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 36

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 37

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 38

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

State compression: bitmask + integer encodes a small subset cheaply.

## entry 40

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 41

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 42

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 43

Greedy by end-time picks the most non-overlapping intervals.

## entry 44

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 45

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 47

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 48

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 49

Splay tree: every access splays to the root; amortized O(log n).

## entry 50

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 51

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 52

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 53

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 54

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 55

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

Euler tour flattens a tree into an array for range-query LCA.

## entry 58

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 59

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 60

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 61

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 62

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 63

LIS via patience: each pile holds the smallest tail of length k.

## entry 64

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 65

Heap when you only need top-k; full sort is wasted work.

## entry 66

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 67

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 68

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 69

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 70

Splay tree: every access splays to the root; amortized O(log n).

## entry 71

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 72

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 73

Wavelet tree: range k-th element in O(log Σ) time.

## entry 74

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 75

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 76

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

StringBuilder: amortize allocation by doubling on grow.

## entry 78

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 81

Walk both pointers from each end inward; advance the smaller side.

## entry 82

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 84

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 85

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 87

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 88

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 89

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 90

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 91

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 92

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 93

Monotonic stack pops while the new element violates the invariant.

## entry 94

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 95

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 96

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 97

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 98

Articulation points: same DFS as bridges, with a slightly different test.

## entry 99

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 100

Walk both pointers from each end inward; advance the smaller side.

## entry 101

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 102

StringBuilder: amortize allocation by doubling on grow.

## entry 103

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 104

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 105

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 106

Wavelet tree: range k-th element in O(log Σ) time.

## entry 107

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 108

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 109

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 110

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 111

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 112

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 113

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 114

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 115

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 116

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 118

Heap when you only need top-k; full sort is wasted work.

## entry 119

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 120

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 121

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 122

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 123

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 124

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 125

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 126

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 127

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 128

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 129

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 130

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 131

Greedy by end-time picks the most non-overlapping intervals.

## entry 132

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 133

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 134

Wavelet tree: range k-th element in O(log Σ) time.

## entry 135

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 136

Walk both pointers from each end inward; advance the smaller side.

## entry 137

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 138

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 139

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 140

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 141

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 142

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 143

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 144

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 145

State compression: bitmask + integer encodes a small subset cheaply.

## entry 146

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 147

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 148

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 149

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 150

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 151

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 152

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 153

Walk both pointers from each end inward; advance the smaller side.

## entry 154

Articulation points: same DFS as bridges, with a slightly different test.

## entry 155

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 156

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 157

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 158

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 159

Heap when you only need top-k; full sort is wasted work.

## entry 160

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 161

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 162

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 163

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 164

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 165

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 166

Wavelet tree: range k-th element in O(log Σ) time.

## entry 167

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 168

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 169

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 170

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 171

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 172

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 173

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 174

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 175

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 176

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 177

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 178

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 179

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 180

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 181

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 182

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 183

Union-Find with path compression amortizes to near-O(1) per op.

## entry 184

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 185

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 186

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 187

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 188

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 189

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 190

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 191

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 192

Articulation points: same DFS as bridges, with a slightly different test.

## entry 193

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 194

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 195

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 196

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 197

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 198

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 199

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 200

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 201

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 202

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 203

Splay tree: every access splays to the root; amortized O(log n).

## entry 204

LIS via patience: each pile holds the smallest tail of length k.

## entry 205

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 206

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 207

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 208

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 209

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 210

Stable sort matters when a secondary key was set in a prior pass.

## entry 211

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 212

LIS via patience: each pile holds the smallest tail of length k.

## entry 213

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 214

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 215

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 216

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 217

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 218

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 219

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 220

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 221

Union-Find with path compression amortizes to near-O(1) per op.

## entry 222

Monotonic stack pops while the new element violates the invariant.

## entry 223

Wavelet tree: range k-th element in O(log Σ) time.

## entry 224

Union-Find with path compression amortizes to near-O(1) per op.

## entry 225

LIS via patience: each pile holds the smallest tail of length k.

## entry 226

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 227

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 228

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 229

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 230

Wavelet tree: range k-th element in O(log Σ) time.

## entry 231

LIS via patience: each pile holds the smallest tail of length k.
