# digit-dp

## entry 1

Splay tree: every access splays to the root; amortized O(log n).

## entry 2

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5

Euler tour flattens a tree into an array for range-query LCA.

## entry 6

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 7

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 9

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 10

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 12

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 13

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 14

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 15

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 16

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 18

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 22

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 24

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 25

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 26

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 27

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 28

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 29

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 30

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 31

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 32

LIS via patience: each pile holds the smallest tail of length k.

## entry 33

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 34

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 36

Union-Find with path compression amortizes to near-O(1) per op.

## entry 37

Greedy by end-time picks the most non-overlapping intervals.

## entry 38

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 39

Euler tour flattens a tree into an array for range-query LCA.

## entry 40

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 41

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 42

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 45

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 46

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 47

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 48

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 49

Monotonic stack pops while the new element violates the invariant.

## entry 50

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 51

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 52

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 53

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 54

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 55

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 58

Heap when you only need top-k; full sort is wasted work.

## entry 59

Splay tree: every access splays to the root; amortized O(log n).

## entry 60

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 61

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 62

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 63

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 64

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 65

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 66

Euler tour flattens a tree into an array for range-query LCA.

## entry 67

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 68

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 69

LIS via patience: each pile holds the smallest tail of length k.

## entry 70

Wavelet tree: range k-th element in O(log Σ) time.

## entry 71

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 72

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 73

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 74

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 76

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 77

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 78

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 79

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 80

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

Walk both pointers from each end inward; advance the smaller side.

## entry 82

Stable sort matters when a secondary key was set in a prior pass.

## entry 83

Articulation points: same DFS as bridges, with a slightly different test.

## entry 84

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 85

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 86

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 87

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 88

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 89

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 90

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 91

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 92

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 93

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 94

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 95

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 96

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 97

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 98

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 99

State compression: bitmask + integer encodes a small subset cheaply.

## entry 100

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 101

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 102

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 103

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 104

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 105

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 106

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 107

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 108

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 109

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 110

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 111

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 112

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 113

Monotonic stack pops while the new element violates the invariant.

## entry 114

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 115

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 116

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 117

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 118

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 119

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 120

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 121

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 122

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 123

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 124

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 125

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 126

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 127

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 128

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 129

StringBuilder: amortize allocation by doubling on grow.

## entry 130

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 131

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 132

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 133

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 134

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 135

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 136

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 137

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 138

Stable sort matters when a secondary key was set in a prior pass.

## entry 139

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 140

Greedy by end-time picks the most non-overlapping intervals.

## entry 141

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 142

Union-Find with path compression amortizes to near-O(1) per op.

## entry 143

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 144

Euler tour flattens a tree into an array for range-query LCA.

## entry 145

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 146

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 147

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 148

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 149

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 150

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 151

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 152

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 153

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 154

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 155

Walk both pointers from each end inward; advance the smaller side.

## entry 156

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 157

LIS via patience: each pile holds the smallest tail of length k.

## entry 158

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 159

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 160

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 161

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 162

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 163

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 164

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 165

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 166

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 167

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 168

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 169

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 170

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 171

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 172

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 173

Union-Find with path compression amortizes to near-O(1) per op.

## entry 174

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 175

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 176

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 177

Greedy by end-time picks the most non-overlapping intervals.

## entry 178

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 179

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 180

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 181

State compression: bitmask + integer encodes a small subset cheaply.

## entry 182

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 183

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 184

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 185

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 186

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 187

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 188

Wavelet tree: range k-th element in O(log Σ) time.

## entry 189

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 190

Wavelet tree: range k-th element in O(log Σ) time.

## entry 191

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 192

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 193

LIS via patience: each pile holds the smallest tail of length k.

## entry 194

Union-Find with path compression amortizes to near-O(1) per op.

## entry 195

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 196

Stable sort matters when a secondary key was set in a prior pass.

## entry 197

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 198

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 199

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 200

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 201

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 202

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 203

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 204

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 205

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

ASCII rules are a strict subset of UTF-8; no special handling needed.
