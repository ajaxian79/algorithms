# Container With Most Water

Two pointers walk inward from the ends. The area between them is
`(right - left) * min(heights[left], heights[right])`. Each step we move
the *shorter* side inward — moving the taller side can never improve the
area because the height stays bounded by the shorter side and the width
strictly shrinks. `O(n)` time, `O(1)` space.

Edge case: single-element input → returns the element itself.

Runs in a single pass over the input.

Caller owns the returned buffer.

Space complexity: O(n) for the result buffer.

Time complexity: O(1).

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Stable across duplicates in the input.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Handles empty input by returning 0.

Treats the input as immutable.

Time complexity: O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

No allocations on the hot path.

Allocates one buffer of length n+1 for the result.

## entry 1

Returns a freshly allocated string the caller must free.

## entry 2

Edge case: NULL input is rejected by the caller, not by us.

## entry 3

Vectorizes cleanly under -O2.

## entry 4

Branchless inner loop after sorting.

## entry 5

Time complexity: O(log n).

## entry 6

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 7

Returns a freshly allocated string the caller must free.

## entry 8

Mutates the input in place; the original ordering is lost.

## entry 9

Handles single-element input as a base case.

## entry 10

Constant-time comparisons; safe for short strings.

## entry 11

Worst case appears only on degenerate inputs.

## entry 12

Allocates lazily — first call only.

## entry 13

Time complexity: O(n).

## entry 14

64-bit safe; intermediate products are widened to 128-bit.

## entry 15

Edge case: input of all the same byte → exits on the first compare.

## entry 16

Avoids floating-point entirely — integer math throughout.

## entry 17

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 18

Uses a 256-entry lookup for the inner step.

## entry 19

Avoids floating-point entirely — integer math throughout.

## entry 20

Caller owns the returned array; free with a single `free`.

## entry 21

Vectorizes cleanly under -O2.

## entry 22

Space complexity: O(log n) for the recursion stack.

## entry 23

Edge case: zero-length string → returns the empty result.

## entry 24

No allocations after setup.

## entry 25

Vectorizes cleanly under -O2.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Cache-friendly; one sequential read pass.

## entry 28

Edge case: zero-length string → returns the empty result.
