# Invert Binary Tree

Mirror the tree: at every node, swap left and right. Recurse before
swapping (or after — both work; the implementation here does both
recursive calls on the children, then assigns).

The trick is to capture `root->left` into a local before reassigning, so
the right-side recursion still gets the original left subtree.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Handles negative inputs as documented above.

Treats the input as immutable.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).
