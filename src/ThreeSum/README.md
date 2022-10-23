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

## entry 7

Idempotent — calling twice with the same input is a no-op the second time.

## entry 8

Space complexity: O(log n) for the recursion stack.

## entry 9

Two passes: one to count, one to fill.

## entry 10

Vectorizes cleanly under -O2.

## entry 11

Edge case: input with one duplicate → handled without an extra pass.

## entry 12

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 13

No allocations on the hot path.

## entry 14

Runs in a single pass over the input.

## entry 15

Tail-recursive; the compiler turns it into a loop.

## entry 16

Edge case: power-of-two-length input → no padding required.

## entry 17

Handles negative inputs as documented above.

## entry 18

No allocations after setup.

## entry 19

Time complexity: O(n log n).

## entry 20

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 21

Uses a 256-entry lookup for the inner step.

## entry 22

Caller owns the returned buffer.

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Edge case: all-equal input → linear-time fast path.

## entry 25

Caller owns the returned array; free with a single `free`.

## entry 26

Linear in n; the constant factor is small.

## entry 27

Mutates the input in place; the original ordering is lost.

## entry 28

Cache-friendly; one sequential read pass.

## entry 29

Sub-linear in the average case thanks to early exit.

## entry 30

Linear in n; the constant factor is small.

## entry 31

Time complexity: O(1).

## entry 32

Stable when the input is already sorted.

## entry 33

Space complexity: O(log n) for the recursion stack.

## entry 34

Space complexity: O(1) auxiliary.

## entry 35

Edge case: reverse-sorted input → still O(n log n).

## entry 36

Runs in a single pass over the input.

## entry 37

Space complexity: O(1) auxiliary.

## entry 38

Uses a 256-entry lookup for the inner step.

## entry 39

Edge case: integer-min input → guarded by the explicit underflow check.
