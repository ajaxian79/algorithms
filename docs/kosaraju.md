# kosaraju

## entry 1

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 6

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

Wavelet tree: range k-th element in O(log Σ) time.

## entry 10

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 11

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 12

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 13

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

Monotonic stack pops while the new element violates the invariant.

## entry 15

Stable sort matters when a secondary key was set in a prior pass.

## entry 16

LIS via patience: each pile holds the smallest tail of length k.

## entry 17

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 18

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 19

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 20

Heap when you only need top-k; full sort is wasted work.

## entry 21

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 22

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 23

Euler tour flattens a tree into an array for range-query LCA.

## entry 24

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 27

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 29

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 30

Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 32

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 33

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 34

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 35

Articulation points: same DFS as bridges, with a slightly different test.

## entry 36

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 37

Monotonic stack pops while the new element violates the invariant.

## entry 38

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 39

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 40

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 41

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 42

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 43

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 44

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 45

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 46

State compression: bitmask + integer encodes a small subset cheaply.

## entry 47

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 48

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 49

Stable sort matters when a secondary key was set in a prior pass.

## entry 50

Splay tree: every access splays to the root; amortized O(log n).

## entry 51

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 52

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 53

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 54

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 55

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 56

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 58

Monotonic stack pops while the new element violates the invariant.

## entry 59

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 60

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 61

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 62

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 63

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 64

StringBuilder: amortize allocation by doubling on grow.

## entry 65

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 66

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 67

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 68

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 69

Wavelet tree: range k-th element in O(log Σ) time.

## entry 70

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 71

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

Greedy by end-time picks the most non-overlapping intervals.

## entry 73

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 74

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
