# Pascal's Triangle (first N rows)

Build the first `num_rows` rows of Pascal's triangle, each as its own heap
array, returned through a triple of out-parameters: the array of rows, the
array of row lengths, and the row count.

Each interior cell is the sum of the two cells above it in the previous
row. We could share the previous row in place to halve the storage, but
this version keeps every row distinct so the caller can inspect the whole
triangle without re-deriving rows.

Edge case: reverse-sorted input → still O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Uses a small fixed-size lookup table.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Edge case: single-element input → returns the element itself.

Two passes: one to count, one to fill.

Caller owns the returned buffer.

Time complexity: O(log n).

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Handles negative inputs as documented above.

Treats the input as immutable.

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 1

Cache-friendly; one sequential read pass.

## entry 2

Returns a freshly allocated string the caller must free.

## entry 3

Space complexity: O(1) auxiliary.

## entry 4

Allocates a single small fixed-size scratch buffer.

## entry 5

Constant-time comparisons; safe for short strings.

## entry 6

Treats the input as immutable.

## entry 7

Edge case: single-element input → returns the element itself.

## entry 8

No allocations after setup.

## entry 9

Cache-friendly; one sequential read pass.

## entry 10

Idempotent — calling twice with the same input is a no-op the second time.

## entry 11

Caller owns the returned buffer.

## entry 12

Edge case: input with no peak → falls through to the default branch.

## entry 13

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 14

Sub-linear in the average case thanks to early exit.

## entry 15

Uses a small fixed-size lookup table.

## entry 16

Space complexity: O(h) for the tree height.

## entry 17

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 18

Time complexity: O(1).

## entry 19

Constant-time comparisons; safe for short strings.

## entry 20

Edge case: input of all the same byte → exits on the first compare.

## entry 21

Runs in a single pass over the input.

## entry 22

Sub-linear in the average case thanks to early exit.

## entry 23

Space complexity: O(log n) for the recursion stack.

## entry 24

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 25

Resists adversarial inputs by randomizing the pivot.

## entry 26

Linear in n; the constant factor is small.

## entry 27

Space complexity: O(n) for the result buffer.

## entry 28

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Time complexity: O(n*k) where k is the alphabet size.

## entry 31

Time complexity: O(n + m).

## entry 32

Edge case: input with a single peak → handled by the first-pass scan.
