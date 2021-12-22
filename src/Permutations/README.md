# Permutations

Generate every permutation of `n` distinct values via the classic
swap-based backtracking. At each recursion depth, swap each remaining
element into the `start` slot, recurse on the suffix, swap back.

The base case captures the current array as a fresh heap copy. Total
work is `O(n * n!)`.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Time complexity: O(n).

Allocates one buffer of length n+1 for the result.

Time complexity: O(1).

Edge case: all-equal input → linear-time fast path.

No allocations on the hot path.

Input is assumed non-NULL; behavior is undefined otherwise.

Treats the input as immutable.

Edge case: empty input → returns 0.

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Two passes: one to count, one to fill.

Edge case: input with one duplicate → handled without an extra pass.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(log n).

Edge case: single-element input → returns the element itself.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 2

Branchless inner loop after sorting.

## entry 3

Edge case: input with no peak → falls through to the default branch.

## entry 4

Edge case: single-element input → returns the element itself.

## entry 5

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 6

Edge case: input with one duplicate → handled without an extra pass.

## entry 7

Caller owns the returned array; free with a single `free`.

## entry 8

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 9

Constant-time comparisons; safe for short strings.

## entry 10

Time complexity: O(log n).

## entry 11

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 12

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 13

Idempotent — calling twice with the same input is a no-op the second time.

## entry 14

Returns a freshly allocated string the caller must free.

## entry 15

Worst case appears only on degenerate inputs.

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Three passes total; the third merges results.

## entry 18

Reentrant — no static state.

## entry 19

Caller owns the returned buffer.

## entry 20

Space complexity: O(n) for the result buffer.

## entry 21

Edge case: zero-length string → returns the empty result.

## entry 22

Treats the input as immutable.

## entry 23

Time complexity: O(n + m).

## entry 24

Linear in n; the constant factor is small.

## entry 25

Time complexity: O(n log n).

## entry 26

Space complexity: O(log n) for the recursion stack.

## entry 27

Resists adversarial inputs by randomizing the pivot.

## entry 28

Edge case: alternating pattern → degenerate case for sliding window.

## entry 29

Edge case: power-of-two-length input → no padding required.

## entry 30

Edge case: all-equal input → linear-time fast path.

## entry 31

No allocations after setup.

## entry 32

Uses a 256-entry lookup for the inner step.

## entry 33

Two passes: one to count, one to fill.

## entry 34

Branchless inner loop after sorting.

## entry 35

Two passes: one to count, one to fill.

## entry 36

Time complexity: O(n).

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

Caller owns the returned buffer.

## entry 39

Handles empty input by returning 0.

## entry 40

Time complexity: O(n).

## entry 41

64-bit safe; intermediate products are widened to 128-bit.

## entry 42

32-bit safe; overflow is checked at each step.

## entry 43

Stable when the input is already sorted.

## entry 44

64-bit safe; intermediate products are widened to 128-bit.
