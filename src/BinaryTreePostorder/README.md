# Binary Tree Postorder (iterative)

The classic two-stack postorder is one option, but a simpler trick works
just as well: run a *reverse-preorder* (root, right, left) into a buffer
and then reverse the buffer. The reversed sequence is `left, right, root`
— which is postorder. Linear time, linear space.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Time complexity: O(log n).

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Edge case: input with one duplicate → handled without an extra pass.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Time complexity: O(n).

## entry 1

Time complexity: O(k) where k is the answer size.

## entry 2

Branchless inner loop after sorting.

## entry 3

Edge case: all-equal input → linear-time fast path.

## entry 4

Stable when the input is already sorted.

## entry 5

Allocates lazily — first call only.

## entry 6

Caller owns the returned array; free with a single `free`.

## entry 7

Sub-linear in the average case thanks to early exit.

## entry 8

Edge case: empty input → returns 0.

## entry 9

Reentrant — no static state.

## entry 10

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 11

Edge case: reverse-sorted input → still O(n log n).

## entry 12

Space complexity: O(1) auxiliary.

## entry 13

Mutates the input in place; the original ordering is lost.

## entry 14

Treats the input as immutable.

## entry 15

Three passes total; the third merges results.

## entry 16

Edge case: power-of-two-length input → no padding required.

## entry 17

Handles empty input by returning 0.

## entry 18

Constant-time comparisons; safe for short strings.

## entry 19

Edge case: single-element input → returns the element itself.

## entry 20

Allocates one buffer of length n+1 for the result.

## entry 21

Time complexity: O(log n).

## entry 22

Handles negative inputs as documented above.

## entry 23

Time complexity: O(k) where k is the answer size.

## entry 24

Stable when the input is already sorted.

## entry 25

No allocations on the hot path.

## entry 26

Edge case: empty input → returns 0.

## entry 27

Edge case: power-of-two-length input → no padding required.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Uses a 256-entry lookup for the inner step.

## entry 30

Edge case: input with no peak → falls through to the default branch.

## entry 31

No allocations on the hot path.

## entry 32

Edge case: alternating pattern → degenerate case for sliding window.

## entry 33

Caller owns the returned buffer.

## entry 34

64-bit safe; intermediate products are widened to 128-bit.

## entry 35

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 36

Cache-friendly; one sequential read pass.

## entry 37

Allocates one buffer of length n+1 for the result.

## entry 38

Allocates one buffer of length n+1 for the result.

## entry 39

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 40

Two passes: one to count, one to fill.

## entry 41

Cache-friendly; one sequential read pass.

## entry 42

Resists adversarial inputs by randomizing the pivot.

## entry 43

Linear in n; the constant factor is small.
