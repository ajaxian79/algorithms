# Trapping Rain Water

Compute total trapped water between bars of an elevation map. Two pointers
walk inward; the side whose current height is *smaller* is the one that
controls the water level on its side, so we always advance from there
and add `(side_max - height)` whenever the current bar dips below its
running max.

`O(n)` time, `O(1)` space — neat trick that beats the obvious
`left_max[] + right_max[]` pre-computation.

Allocates one buffer of length n+1 for the result.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Handles negative inputs as documented above.

Time complexity: O(n).

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

## entry 1

Mutates the input in place; the original ordering is lost.

## entry 2

Time complexity: O(log n).

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 5

Uses a 256-entry lookup for the inner step.
