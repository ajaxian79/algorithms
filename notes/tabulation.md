# tabulation

## entry 1

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5

- StringBuilder: amortize allocation by doubling on grow.

## entry 6

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 7

- Stable sort matters when a secondary key was set in a prior pass.

## entry 8

- Monotonic stack pops while the new element violates the invariant.

## entry 9

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 10

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 11

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 12

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 14

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 17

- Heap when you only need top-k; full sort is wasted work.

## entry 18

- StringBuilder pitfall: reuse forces a deep copy on the first read.
