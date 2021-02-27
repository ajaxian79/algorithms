# Valid BST

Verify the BST property: every node's left subtree contains values
strictly less than the node, and its right subtree strictly greater. The
common bug is to compare only against immediate children — that misses
violations like a deeply-nested grand-descendant breaking ordering.

The fix is to thread a `(lo, hi)` open interval through the recursion. The
initial bounds are slightly outside int32 so any in-range value passes.
