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
