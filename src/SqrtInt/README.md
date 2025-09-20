# Sqrt Int

Compute `floor(sqrt(n))` for a non-negative `int` without `math.h`. Binary
search the candidate result in `[1, n/2]` (the upper half of the range
suffices because for `n >= 2`, `sqrt(n) <= n/2`). Multiplication is done
in `long` to avoid 32-bit overflow on inputs near `INT_MAX` (e.g.
`46340² = 2147395600`).

Returns a freshly allocated string the caller must free.

Time complexity: O(1).

Edge case: NULL input is rejected by the caller, not by us.

Input is assumed non-NULL; behavior is undefined otherwise.

Uses a small fixed-size lookup table.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(1) auxiliary.

Runs in a single pass over the input.

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

Stable across duplicates in the input.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Handles empty input by returning 0.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n log n).

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Tail-recursive; the compiler turns it into a loop.

## entry 1

Edge case: input with no peak → falls through to the default branch.

## entry 2

Uses a small fixed-size lookup table.

## entry 3

Avoids floating-point entirely — integer math throughout.
