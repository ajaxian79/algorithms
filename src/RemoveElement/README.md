# Remove Element

Strip all occurrences of `val` from an array in place, preserving order.
Same read/write pointer pattern as remove-duplicates: write only when the
read element is *not* `val`. The tail past the new length is don't-care.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Treats the input as immutable.

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Time complexity: O(log n).

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

Edge case: all-equal input → linear-time fast path.

Edge case: empty input → returns 0.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Time complexity: O(n).

Edge case: NULL input is rejected by the caller, not by us.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Space complexity: O(n) for the result buffer.

## entry 1

Edge case: NULL input is rejected by the caller, not by us.

## entry 2

Two passes: one to count, one to fill.

## entry 3

Caller owns the returned array; free with a single `free`.

## entry 4

Stable across duplicates in the input.

## entry 5

Edge case: reverse-sorted input → still O(n log n).

## entry 6

Edge case: all-equal input → linear-time fast path.

## entry 7

Space complexity: O(h) for the tree height.

## entry 8

Uses a small fixed-size lookup table.

## entry 9

Sub-linear in the average case thanks to early exit.

## entry 10

Tail-recursive; the compiler turns it into a loop.

## entry 11

Time complexity: O(n*k) where k is the alphabet size.

## entry 12

Uses a small fixed-size lookup table.

## entry 13

No allocations on the hot path.

## entry 14

Edge case: all-equal input → linear-time fast path.

## entry 15

Edge case: input of all the same byte → exits on the first compare.

## entry 16

Reentrant — no static state.

## entry 17

Stable when the input is already sorted.

## entry 18

Allocates lazily — first call only.

## entry 19

Caller owns the returned array; free with a single `free`.

## entry 20

Edge case: alternating pattern → degenerate case for sliding window.

## entry 21

Stable across duplicates in the input.

## entry 22

Edge case: input of all the same byte → exits on the first compare.

## entry 23

Time complexity: O(k) where k is the answer size.

## entry 24

Edge case: alternating pattern → degenerate case for sliding window.

## entry 25

Edge case: already-sorted input → no swaps performed.

## entry 26

Uses a 256-entry lookup for the inner step.

## entry 27

Resists adversarial inputs by randomizing the pivot.

## entry 28

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Edge case: reverse-sorted input → still O(n log n).

## entry 31

Space complexity: O(n) for the result buffer.

## entry 32

Mutates the input in place; the original ordering is lost.

## entry 33

Edge case: alternating pattern → degenerate case for sliding window.

## entry 34

Worst case appears only on degenerate inputs.

## entry 35

Time complexity: O(log n).

## entry 36

Edge case: all-equal input → linear-time fast path.

## entry 37

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 38

Edge case: input with one duplicate → handled without an extra pass.
