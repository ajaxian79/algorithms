# intervals-merge

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Monotonic stack pops while the new element violates the invariant.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
