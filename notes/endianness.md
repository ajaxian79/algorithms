# endianness

## entry 1

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 6

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 7

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 8

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 9

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 10

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 11

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 13

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 14

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 15

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 16

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 20

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 21

- Greedy by end-time picks the most non-overlapping intervals.

## entry 22

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

- Stable sort matters when a secondary key was set in a prior pass.

## entry 29

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 30

- Euler tour flattens a tree into an array for range-query LCA.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 32

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 33

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 34

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 35

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 36

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 38

- Manacher expands around each center, reusing prior radii via mirror reflection.
