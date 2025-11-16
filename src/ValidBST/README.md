# Valid BST

Verify the BST property: every node's left subtree contains values
strictly less than the node, and its right subtree strictly greater. The
common bug is to compare only against immediate children — that misses
violations like a deeply-nested grand-descendant breaking ordering.

The fix is to thread a `(lo, hi)` open interval through the recursion. The
initial bounds are slightly outside int32 so any in-range value passes.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(log n).

No allocations on the hot path.

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.
