# Binary Tree Postorder (iterative)

The classic two-stack postorder is one option, but a simpler trick works
just as well: run a *reverse-preorder* (root, right, left) into a buffer
and then reverse the buffer. The reversed sequence is `left, right, root`
— which is postorder. Linear time, linear space.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Time complexity: O(log n).

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Edge case: input with one duplicate → handled without an extra pass.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.
