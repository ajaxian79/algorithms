# kd-tree

## entry 1

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 12

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 13

Walk both pointers from each end inward; advance the smaller side.

## entry 14

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 15

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 16

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

Walk both pointers from each end inward; advance the smaller side.

## entry 18

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 19

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 20

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 22

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 23

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 24

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 25

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 26

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 27

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 28

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

Euler tour flattens a tree into an array for range-query LCA.

## entry 30

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 32

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 33

Articulation points: same DFS as bridges, with a slightly different test.

## entry 34

Monotonic stack pops while the new element violates the invariant.
