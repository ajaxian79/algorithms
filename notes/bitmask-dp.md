# bitmask-dp

## entry 1

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 6

- Splay tree: every access splays to the root; amortized O(log n).

## entry 7

- Splay tree: every access splays to the root; amortized O(log n).

## entry 8

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 9

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 10

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 18

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 20

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 21

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 23

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 25

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

- StringBuilder: amortize allocation by doubling on grow.

## entry 27

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 31

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 32

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 33

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 34

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

- State compression: bitmask + integer encodes a small subset cheaply.
