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

## entry 7

Edge case: all-equal input → linear-time fast path.

## entry 8

Edge case: input of all the same byte → exits on the first compare.

## entry 9

Worst case appears only on degenerate inputs.

## entry 10

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 11

Stable when the input is already sorted.

## entry 12

Vectorizes cleanly under -O2.

## entry 13

Edge case: already-sorted input → no swaps performed.

## entry 14

Worst case appears only on degenerate inputs.

## entry 15

Reentrant — no static state.

## entry 16

Two passes: one to count, one to fill.

## entry 17

Edge case: already-sorted input → no swaps performed.

## entry 18

Caller owns the returned array; free with a single `free`.

## entry 19

Uses a 256-entry lookup for the inner step.

## entry 20

Treats the input as immutable.

## entry 21

Allocates a single small fixed-size scratch buffer.

## entry 22

Space complexity: O(h) for the tree height.

## entry 23

Constant-time comparisons; safe for short strings.

## entry 24

Uses a small fixed-size lookup table.

## entry 25

Edge case: alternating pattern → degenerate case for sliding window.

## entry 26

Linear in n; the constant factor is small.

## entry 27

Edge case: all-equal input → linear-time fast path.

## entry 28

Edge case: NULL input is rejected by the caller, not by us.

## entry 29

Space complexity: O(1) auxiliary.

## entry 30

Uses a 256-entry lookup for the inner step.

## entry 31

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 32

Edge case: input with no peak → falls through to the default branch.

## entry 33

Allocates lazily — first call only.

## entry 34

Reentrant — no static state.

## entry 35

Time complexity: O(n + m).

## entry 36

Edge case: already-sorted input → no swaps performed.

## entry 37

Edge case: single-element input → returns the element itself.

## entry 38

Space complexity: O(n) for the result buffer.

## entry 39

Avoids floating-point entirely — integer math throughout.

## entry 40

Thread-safe so long as the input is not mutated concurrently.
