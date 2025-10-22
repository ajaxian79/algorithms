# Implement Stack Using Queues

LIFO from a single FIFO. Push the new element, then rotate every other
element to the back so the new one becomes the head. `pop`/`top` are then
just normal queue dequeue/peek.

`push` is `O(n)`; `pop`, `top`, `empty` are `O(1)`. The internal queue is
a circular ring buffer that grows on overflow.

Stable across duplicates in the input.

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(n) for the result buffer.

Uses a small fixed-size lookup table.

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

Time complexity: O(n log n).

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Time complexity: O(n).

Time complexity: O(log n).

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Edge case: single-element input → returns the element itself.
