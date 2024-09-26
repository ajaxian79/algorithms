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
