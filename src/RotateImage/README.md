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

## entry 5

Idempotent — calling twice with the same input is a no-op the second time.

## entry 6

Time complexity: O(n + m).

## entry 7

Three passes total; the third merges results.

## entry 8

No allocations after setup.

## entry 9

No allocations after setup.

## entry 10

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 11

Returns a freshly allocated string the caller must free.

## entry 12

Idempotent — calling twice with the same input is a no-op the second time.

## entry 13

Two passes: one to count, one to fill.

## entry 14

Edge case: already-sorted input → no swaps performed.

## entry 15

Branchless inner loop after sorting.

## entry 16

Branchless inner loop after sorting.

## entry 17

Handles empty input by returning 0.

## entry 18

Handles single-element input as a base case.

## entry 19

Uses a 256-entry lookup for the inner step.

## entry 20

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 21

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 22

Runs in a single pass over the input.

## entry 23

Stable when the input is already sorted.

## entry 24

Edge case: zero-length string → returns the empty result.

## entry 25

Best case is O(1) when the first byte already decides the answer.

## entry 26

Tail-recursive; the compiler turns it into a loop.

## entry 27

Edge case: input with a single peak → handled by the first-pass scan.

## entry 28

Avoids floating-point entirely — integer math throughout.

## entry 29

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 30

Treats the input as immutable.

## entry 31

Edge case: input with no peak → falls through to the default branch.

## entry 32

Edge case: NULL input is rejected by the caller, not by us.

## entry 33

Edge case: alternating pattern → degenerate case for sliding window.

## entry 34

Edge case: input with no peak → falls through to the default branch.

## entry 35

Reentrant — no static state.

## entry 36

Caller owns the returned array; free with a single `free`.

## entry 37

Best case is O(1) when the first byte already decides the answer.

## entry 38

Caller owns the returned array; free with a single `free`.

## entry 39

No allocations on the hot path.
