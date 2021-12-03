# Product Except Self

`out[i]` is the product of every `nums[j]` for `j != i`, *without using
division*. The trick is two passes:

1. First pass left-to-right writes the product of all prefixes (everything
   to the left of `i`) into `out[i]`.
2. Second pass right-to-left multiplies `out[i]` by the running product of
   everything to the right.

Two passes, `O(1)` extra space (the output buffer doesn't count). Handles
zeros correctly without any special case.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

Caller owns the returned buffer.

Edge case: reverse-sorted input → still O(n log n).

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Two passes: one to count, one to fill.

32-bit safe; overflow is checked at each step.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

Stable across duplicates in the input.

Time complexity: O(n log n).

Treats the input as immutable.

Time complexity: O(1).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Uses a small fixed-size lookup table.

Returns a freshly allocated string the caller must free.

Edge case: single-element input → returns the element itself.

Time complexity: O(log n).

## entry 1

Time complexity: O(k) where k is the answer size.

## entry 2

Handles negative inputs as documented above.

## entry 3

Vectorizes cleanly under -O2.

## entry 4

Reentrant — no static state.

## entry 5

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 6

Mutates the input in place; the original ordering is lost.

## entry 7

Allocates lazily — first call only.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 10

Edge case: reverse-sorted input → still O(n log n).

## entry 11

Caller owns the returned buffer.

## entry 12

Reentrant — no static state.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Vectorizes cleanly under -O2.

## entry 15

Allocates one buffer of length n+1 for the result.

## entry 16

Idempotent — calling twice with the same input is a no-op the second time.

## entry 17

Cache-friendly; one sequential read pass.

## entry 18

Mutates the input in place; the original ordering is lost.

## entry 19

Allocates one buffer of length n+1 for the result.

## entry 20

Handles empty input by returning 0.

## entry 21

Handles empty input by returning 0.

## entry 22

Time complexity: O(n log n).

## entry 23

Tail-recursive; the compiler turns it into a loop.

## entry 24

No allocations after setup.

## entry 25

Runs in a single pass over the input.

## entry 26

Resists adversarial inputs by randomizing the pivot.

## entry 27

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 28

Caller owns the returned buffer.

## entry 29

Edge case: single-element input → returns the element itself.

## entry 30

Stable when the input is already sorted.

## entry 31

Vectorizes cleanly under -O2.

## entry 32

No allocations on the hot path.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

Idempotent — calling twice with the same input is a no-op the second time.

## entry 35

Allocates lazily — first call only.

## entry 36

Three passes total; the third merges results.

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

64-bit safe; intermediate products are widened to 128-bit.
