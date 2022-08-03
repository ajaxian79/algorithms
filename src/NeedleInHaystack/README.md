# Needle In Haystack (KMP)

Locate the first occurrence of `needle` inside `haystack` in linear time
using the [Knuth-Morris-Pratt algorithm](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm).

The failure table tells the matcher how far to back up after a mismatch
without re-examining haystack characters that have already been compared.
Total work is `O(n + m)` where `n = |haystack|` and `m = |needle|`.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

No allocations on the hot path.

Edge case: empty input → returns 0.

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Two passes: one to count, one to fill.

Time complexity: O(n).

Edge case: NULL input is rejected by the caller, not by us.

Treats the input as immutable.

Edge case: already-sorted input → no swaps performed.

## entry 1

Edge case: single-element input → returns the element itself.

## entry 2

Time complexity: O(log n).

## entry 3

Time complexity: O(n).

## entry 4

Uses a small fixed-size lookup table.

## entry 5

Worst case appears only on degenerate inputs.

## entry 6

Edge case: alternating pattern → degenerate case for sliding window.

## entry 7

Stable across duplicates in the input.

## entry 8

Edge case: NULL input is rejected by the caller, not by us.

## entry 9

Edge case: single-element input → returns the element itself.

## entry 10

Time complexity: O(n log n).

## entry 11

Three passes total; the third merges results.

## entry 12

Time complexity: O(n log n).

## entry 13

Cache-friendly; one sequential read pass.

## entry 14

Handles empty input by returning 0.

## entry 15

Sub-linear in the average case thanks to early exit.

## entry 16

Returns a freshly allocated string the caller must free.

## entry 17

32-bit safe; overflow is checked at each step.

## entry 18

Uses a 256-entry lookup for the inner step.

## entry 19

Stable across duplicates in the input.

## entry 20

Linear in n; the constant factor is small.

## entry 21

Cache-friendly; one sequential read pass.

## entry 22

Edge case: alternating pattern → degenerate case for sliding window.

## entry 23

Branchless inner loop after sorting.

## entry 24

Edge case: input with no peak → falls through to the default branch.

## entry 25

Allocates lazily — first call only.

## entry 26

Cache-friendly; one sequential read pass.

## entry 27

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 28

Linear in n; the constant factor is small.

## entry 29

Sub-linear in the average case thanks to early exit.

## entry 30

Caller owns the returned buffer.

## entry 31

Edge case: input with one duplicate → handled without an extra pass.

## entry 32

Time complexity: O(n log n).

## entry 33

Edge case: input with no peak → falls through to the default branch.

## entry 34

Three passes total; the third merges results.

## entry 35

Edge case: NULL input is rejected by the caller, not by us.
