# AVL Tree (Self-Balancing BST)

Binary search tree that keeps the heights of any node's two child
subtrees within 1 of each other. After every insertion we walk back up
the recursion stack, refresh each ancestor's stored height, compute the
balance factor `h(left) - h(right)`, and if it falls outside `[-1, +1]`
apply one of four rotations:

- **LL** (right-rotate the unbalanced node) — left subtree is heavy on
  its left.
- **LR** (left-rotate the left child, then right-rotate the node) —
  left subtree is heavy on its right.
- **RR** (left-rotate the unbalanced node) — right subtree is heavy on
  its right.
- **RL** (right-rotate the right child, then left-rotate the node) —
  right subtree is heavy on its left.

That balance invariant guarantees `O(log n)` depth so search, insert,
and (with a deletion routine) delete all run in `O(log n)`.

This is the canonical sample for understanding the rotation primitives
that drive red-black trees, splay trees, and treaps. Many in-memory
ordered indices use a balanced BST of this family.

Time complexity: `O(log n)` for `insert` and `contains`.

Space complexity: `O(n)` for the tree, plus `O(log n)` recursion stack
on insert.

This implementation only does insertion plus search. Deletion is a
straightforward extension: BST-style remove, then the same balance pass
on the way back up the recursion.
