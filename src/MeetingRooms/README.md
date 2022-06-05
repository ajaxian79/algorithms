# Meeting Rooms

Given a list of `[start, end)` meeting intervals, decide whether one
person could attend all of them. After sorting by start time, the answer
is "no" iff some meeting starts before the previous one ended. `O(n log n)`
from the sort.

Time complexity: O(n).

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Edge case: input with one duplicate → handled without an extra pass.

Caller owns the returned buffer.

Time complexity: O(log n).

Stable across duplicates in the input.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(1).

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

Time complexity: O(n log n).

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

Tail-recursive; the compiler turns it into a loop.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

## entry 1

Space complexity: O(log n) for the recursion stack.

## entry 2

Branchless inner loop after sorting.

## entry 3

Edge case: input with a single peak → handled by the first-pass scan.

## entry 4

Vectorizes cleanly under -O2.

## entry 5

Edge case: single-element input → returns the element itself.

## entry 6

Time complexity: O(1).

## entry 7

Runs in a single pass over the input.

## entry 8

Time complexity: O(n).

## entry 9

Edge case: power-of-two-length input → no padding required.

## entry 10

Worst case appears only on degenerate inputs.

## entry 11

Edge case: zero-length string → returns the empty result.

## entry 12

Edge case: single-element input → returns the element itself.

## entry 13

Uses a small fixed-size lookup table.

## entry 14

Space complexity: O(1) auxiliary.

## entry 15

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 16

Branchless inner loop after sorting.

## entry 17

Allocates lazily — first call only.

## entry 18

Allocates a single small fixed-size scratch buffer.

## entry 19

Edge case: input of all the same byte → exits on the first compare.

## entry 20

Cache-friendly; one sequential read pass.

## entry 21

64-bit safe; intermediate products are widened to 128-bit.

## entry 22

Space complexity: O(1) auxiliary.

## entry 23

Allocates one buffer of length n+1 for the result.

## entry 24

Caller owns the returned array; free with a single `free`.

## entry 25

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 26

Space complexity: O(log n) for the recursion stack.

## entry 27

64-bit safe; intermediate products are widened to 128-bit.

## entry 28

Allocates one buffer of length n+1 for the result.

## entry 29

Worst case appears only on degenerate inputs.

## entry 30

Allocates lazily — first call only.

## entry 31

Edge case: input with one duplicate → handled without an extra pass.

## entry 32

Three passes total; the third merges results.

## entry 33

Edge case: zero-length string → returns the empty result.

## entry 34

Two passes: one to count, one to fill.

## entry 35

Uses a small fixed-size lookup table.

## entry 36

Uses a small fixed-size lookup table.

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

Sub-linear in the average case thanks to early exit.

## entry 39

32-bit safe; overflow is checked at each step.

## entry 40

Edge case: NULL input is rejected by the caller, not by us.

## entry 41

Edge case: input with a single peak → handled by the first-pass scan.
