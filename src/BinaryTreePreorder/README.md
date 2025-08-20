# Binary Tree Preorder (iterative)

Iterative preorder using an explicit stack. Push the root, then loop: pop,
emit the value, push the right child first then the left so that left
comes off the stack next. Output buffer doubles when full to keep
amortized cost `O(n)`.

Time complexity: O(n log n).

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: reverse-sorted input → still O(n log n).

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Handles empty input by returning 0.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Two passes: one to count, one to fill.

Edge case: input with one duplicate → handled without an extra pass.
