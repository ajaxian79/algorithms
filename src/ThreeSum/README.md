# Three Sum

Find every unique triplet `[a, b, c]` in `nums` with `a + b + c == 0`.
Sort first, then for each fixed `nums[i]` use a two-pointer scan over the
remainder. Skip duplicates by jumping over equal consecutive values at
all three positions.

`O(n²)` time, dominated by the inner two-pointer pass; `O(1)` extra space
besides the output buffer.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Handles empty input by returning 0.

No allocations on the hot path.

Time complexity: O(1).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

32-bit safe; overflow is checked at each step.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Runs in a single pass over the input.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Time complexity: O(log n).

Tail-recursive; the compiler turns it into a loop.

Handles negative inputs as documented above.

## entry 1

Two passes: one to count, one to fill.

## entry 2

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 3

Edge case: single-element input → returns the element itself.

## entry 4

Runs in a single pass over the input.

## entry 5

Time complexity: O(n + m).

## entry 6

Edge case: all-equal input → linear-time fast path.
