# intervals-merge

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Monotonic stack pops while the new element violates the invariant.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Union-Find with path compression amortizes to near-O(1) per op.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.
