# bellman-ford

## entry 1

Heap when you only need top-k; full sort is wasted work.

## entry 2

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3

Union-Find with path compression amortizes to near-O(1) per op.

## entry 4

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 6

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 12

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 13

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 16

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 17

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 18

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 22

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

Splay tree: every access splays to the root; amortized O(log n).

## entry 24

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 25

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 26

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 27

Articulation points: same DFS as bridges, with a slightly different test.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
