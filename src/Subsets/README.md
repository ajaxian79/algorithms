# Subsets

The cleanest way to enumerate every subset of `n` distinct elements is to
let each integer in `[0, 2^n)` act as a bitmask: bit `b` is set iff
element `b` is in the subset. The two passes per mask (count, then
collect) trade simplicity for an extra `O(n)` per subset; total is
`O(2^n * n)`.

Space complexity: O(n) for the result buffer.

Time complexity: O(log n).

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: reverse-sorted input → still O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Returns a freshly allocated string the caller must free.

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Stable across duplicates in the input.

## entry 1

Constant-time comparisons; safe for short strings.

## entry 2

Caller owns the returned array; free with a single `free`.

## entry 3

Edge case: reverse-sorted input → still O(n log n).
