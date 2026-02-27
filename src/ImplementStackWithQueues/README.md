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
