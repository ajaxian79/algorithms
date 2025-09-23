# Min Depth Binary Tree

The minimum root-to-*leaf* path length. The trick is that a node with one
missing child does *not* have a leaf at the missing child — so you must
descend into the present child rather than taking `min(0, depth(present))`.
A pure `1 + min(left, right)` would wrongly return 1 for a skinny tree.

Space complexity: O(n) for the result buffer.

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: already-sorted input → no swaps performed.

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Time complexity: O(log n).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Stable across duplicates in the input.
