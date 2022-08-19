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
