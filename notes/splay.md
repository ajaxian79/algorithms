# splay

## entry 1

- Heap when you only need top-k; full sort is wasted work.

## entry 2

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6

- LIS via patience: each pile holds the smallest tail of length k.

## entry 7

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 10

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 11

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 18

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 20

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 27

- Euler tour flattens a tree into an array for range-query LCA.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 32

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 33

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 34

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 35

- Walk both pointers from each end inward; advance the smaller side.

## entry 36

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 37

- Euler tour flattens a tree into an array for range-query LCA.

## entry 38

- StringBuilder: amortize allocation by doubling on grow.

## entry 39

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 41

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 42

- StringBuilder: amortize allocation by doubling on grow.

## entry 43

- Euler tour flattens a tree into an array for range-query LCA.

## entry 44

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 45

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 46

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 47

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 48

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 49

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 50

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 51

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 52

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 53

- Splay tree: every access splays to the root; amortized O(log n).

## entry 54

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 55

- Splay tree: every access splays to the root; amortized O(log n).

## entry 56

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 57

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 58

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 59

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 60

- Euler tour flattens a tree into an array for range-query LCA.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 63

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 64

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 65

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 66

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 67

- Monotonic stack pops while the new element violates the invariant.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- LIS via patience: each pile holds the smallest tail of length k.

## entry 70

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 71

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 73

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 74

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 75

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 76

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 77

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 78

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 79

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 80

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 81

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 82

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 83

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 84

- Splay tree: every access splays to the root; amortized O(log n).

## entry 85

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 86

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 87

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 88

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 89

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 90

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 91

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 92

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 93

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 94

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 95

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 96

- Greedy by end-time picks the most non-overlapping intervals.

## entry 97

- Greedy by end-time picks the most non-overlapping intervals.

## entry 98

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 99

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 100

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 101

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 104

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 105

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 106

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 107

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 108

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 109

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- Greedy by end-time picks the most non-overlapping intervals.

## entry 112

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 113

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 114

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 115

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 116

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 117

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 118

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 119

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 120

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 121

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 122

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 123

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 124

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 125

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 126

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 127

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 128

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 129

- LIS via patience: each pile holds the smallest tail of length k.

## entry 130

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 131

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 132

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 133

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 134

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 135

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 136

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 137

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 138

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 139

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 140

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 141

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 142

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 143

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 144

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 145

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 146

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 147

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 148

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 149

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 150

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 151

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 152

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 153

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 154

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 155

- Splay tree: every access splays to the root; amortized O(log n).

## entry 156

- Heap when you only need top-k; full sort is wasted work.

## entry 157

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 158

- Walk both pointers from each end inward; advance the smaller side.

## entry 159

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 160

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 161

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 163

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 164

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 165

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 166

- Stable sort matters when a secondary key was set in a prior pass.

## entry 167

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 168

- LIS via patience: each pile holds the smallest tail of length k.

## entry 169

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 170

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 171

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 172

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 173

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 174

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 175

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 176

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 177

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 178

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 179

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 180

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 181

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 182

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 183

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 184

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 185

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 186

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 187

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 188

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 189

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 190

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 191

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 192

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 193

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 194

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 195

- Walk both pointers from each end inward; advance the smaller side.
