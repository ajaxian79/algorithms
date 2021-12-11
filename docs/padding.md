# padding

## entry 1

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 6

Euler tour flattens a tree into an array for range-query LCA.

## entry 7

LIS via patience: each pile holds the smallest tail of length k.

## entry 8

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 11

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 12

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 13

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 14

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 15

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 16

Splay tree: every access splays to the root; amortized O(log n).

## entry 17

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 18

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 22

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 23

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 24

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 25

Union-Find with path compression amortizes to near-O(1) per op.

## entry 26

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 28

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 29

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 30

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 31

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 32

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 33

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 34

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 35

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 36

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 37

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 38

Monotonic stack pops while the new element violates the invariant.

## entry 39

Heap when you only need top-k; full sort is wasted work.

## entry 40

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 41

Euler tour flattens a tree into an array for range-query LCA.

## entry 42

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
