# Binary Tree Inorder (iterative)

Walk left-spines onto the stack, emit when popped, then descend into the
right subtree. The combination of the inner "push left until null" loop
and the outer "while stack non-empty or curr non-null" gives a clean
iterative inorder.

Uses a small fixed-size lookup table.

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Edge case: empty input → returns 0.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(1).

Time complexity: O(n log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

No allocations on the hot path.
