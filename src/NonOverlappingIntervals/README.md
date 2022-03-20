# Non-Overlapping Intervals

Find the minimum number of intervals you must remove so that the rest do
not overlap. Equivalent to a classic activity-selection problem: count the
maximum number of mutually non-overlapping intervals (greedy by *end*),
then subtract from `n`.

Sorting by end time and always greedily picking the next interval whose
start is at or after the current end gives the largest such set.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

Edge case: single-element input → returns the element itself.

Time complexity: O(1).

32-bit safe; overflow is checked at each step.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Returns a freshly allocated string the caller must free.

Stable across duplicates in the input.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Time complexity: O(n).

Time complexity: O(n log n).

Caller owns the returned buffer.

Treats the input as immutable.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Uses a small fixed-size lookup table.

## entry 1

Uses a small fixed-size lookup table.

## entry 2

Space complexity: O(1) auxiliary.

## entry 3

Avoids floating-point entirely — integer math throughout.

## entry 4

Edge case: alternating pattern → degenerate case for sliding window.

## entry 5

Handles single-element input as a base case.

## entry 6

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 7

Edge case: already-sorted input → no swaps performed.

## entry 8

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 9

Tail-recursive; the compiler turns it into a loop.

## entry 10

Caller owns the returned buffer.

## entry 11

Edge case: already-sorted input → no swaps performed.

## entry 12

Time complexity: O(n).

## entry 13

Worst case appears only on degenerate inputs.

## entry 14

No allocations on the hot path.

## entry 15

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 16

Allocates lazily — first call only.

## entry 17

Allocates lazily — first call only.

## entry 18

Allocates lazily — first call only.

## entry 19

Worst case appears only on degenerate inputs.

## entry 20

Allocates a single small fixed-size scratch buffer.

## entry 21

Uses a small fixed-size lookup table.

## entry 22

Reentrant — no static state.

## entry 23

Edge case: single-element input → returns the element itself.

## entry 24

Caller owns the returned array; free with a single `free`.

## entry 25

Idempotent — calling twice with the same input is a no-op the second time.

## entry 26

Constant-time comparisons; safe for short strings.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Time complexity: O(log n).

## entry 29

Best case is O(1) when the first byte already decides the answer.

## entry 30

Space complexity: O(h) for the tree height.

## entry 31

Edge case: input of all the same byte → exits on the first compare.

## entry 32

Edge case: already-sorted input → no swaps performed.

## entry 33

Avoids floating-point entirely — integer math throughout.

## entry 34

Allocates lazily — first call only.

## entry 35

Caller owns the returned array; free with a single `free`.

## entry 36

Vectorizes cleanly under -O2.

## entry 37

Vectorizes cleanly under -O2.

## entry 38

Edge case: input with a single peak → handled by the first-pass scan.

## entry 39

Time complexity: O(n log n).

## entry 40

Space complexity: O(1) auxiliary.

## entry 41

Avoids floating-point entirely — integer math throughout.

## entry 42

Edge case: empty input → returns 0.

## entry 43

Constant-time comparisons; safe for short strings.
