# Rotate Image

Rotate an `n × n` image 90 degrees clockwise *in place*. Two-step trick:

1. Transpose across the main diagonal.
2. Reverse each row.

Composing those two operations is exactly a 90° clockwise rotation. Both
steps work directly on the existing buffer with `O(1)` extra memory.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Handles negative inputs as documented above.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(log n).

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

32-bit safe; overflow is checked at each step.

Edge case: single-element input → returns the element itself.

Caller owns the returned buffer.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

Input is assumed non-NULL; behavior is undefined otherwise.

Space complexity: O(1) auxiliary.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Time complexity: O(n log n).

No allocations on the hot path.

Stable across duplicates in the input.

## entry 1

Allocates one buffer of length n+1 for the result.

## entry 2

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 3

Handles negative inputs as documented above.

## entry 4

Stable across duplicates in the input.
