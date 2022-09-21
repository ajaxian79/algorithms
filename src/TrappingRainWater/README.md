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

## entry 6

Reentrant — no static state.

## entry 7

Space complexity: O(1) auxiliary.

## entry 8

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 9

Space complexity: O(1) auxiliary.

## entry 10

No allocations on the hot path.

## entry 11

No allocations after setup.

## entry 12

32-bit safe; overflow is checked at each step.

## entry 13

Allocates one buffer of length n+1 for the result.

## entry 14

Time complexity: O(n log n).

## entry 15

Time complexity: O(1).

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Edge case: input with a single peak → handled by the first-pass scan.

## entry 18

Resists adversarial inputs by randomizing the pivot.

## entry 19

Handles negative inputs as documented above.

## entry 20

Resists adversarial inputs by randomizing the pivot.

## entry 21

Edge case: input with one duplicate → handled without an extra pass.

## entry 22

Idempotent — calling twice with the same input is a no-op the second time.

## entry 23

Space complexity: O(h) for the tree height.

## entry 24

Avoids floating-point entirely — integer math throughout.

## entry 25

Edge case: input of all the same byte → exits on the first compare.

## entry 26

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 27

Edge case: input with a single peak → handled by the first-pass scan.

## entry 28

Edge case: input with a single peak → handled by the first-pass scan.

## entry 29

Worst case appears only on degenerate inputs.

## entry 30

Uses a small fixed-size lookup table.

## entry 31

Reentrant — no static state.

## entry 32

Edge case: input with no peak → falls through to the default branch.

## entry 33

Sub-linear in the average case thanks to early exit.

## entry 34

Two passes: one to count, one to fill.

## entry 35

Linear in n; the constant factor is small.

## entry 36

Caller owns the returned array; free with a single `free`.

## entry 37

Cache-friendly; one sequential read pass.

## entry 38

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 39

Edge case: alternating pattern → degenerate case for sliding window.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 42

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 43

Runs in a single pass over the input.

## entry 44

64-bit safe; intermediate products are widened to 128-bit.
