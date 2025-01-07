# To Hex String

Convert an `int` to its lowercase hex representation. Negative numbers are
written as their 32-bit two's complement (so `-1 -> "ffffffff"`).

The implementation peels nibbles off the unsigned reinterpretation, building
the digits in reverse, then flips them on the way out into a heap buffer.

Handles empty input by returning 0.

Runs in a single pass over the input.

Time complexity: O(1).

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Treats the input as immutable.

Two passes: one to count, one to fill.

No allocations on the hot path.

Handles negative inputs as documented above.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

## entry 1

Edge case: input with a single peak → handled by the first-pass scan.

## entry 2

Time complexity: O(1).

## entry 3

Edge case: zero-length string → returns the empty result.

## entry 4

Time complexity: O(n).

## entry 5

Best case is O(1) when the first byte already decides the answer.

## entry 6

Time complexity: O(log n).
