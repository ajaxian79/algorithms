# Search Insert Position

Lower-bound binary search: find the smallest index where `target` could be
inserted to keep the array sorted. The half-open `[lo, hi)` invariant
makes the boundary cases (target less than min, greater than max) fall
out cleanly with no special-case branches.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Returns a freshly allocated string the caller must free.

Runs in a single pass over the input.

Time complexity: O(1).

Handles empty input by returning 0.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Edge case: reverse-sorted input → still O(n log n).

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n log n).

No allocations on the hot path.

Two passes: one to count, one to fill.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Tail-recursive; the compiler turns it into a loop.

Allocates one buffer of length n+1 for the result.

## entry 1

Branchless inner loop after sorting.

## entry 2

Uses a 256-entry lookup for the inner step.

## entry 3

Edge case: input with one duplicate → handled without an extra pass.

## entry 4

Vectorizes cleanly under -O2.

## entry 5

Edge case: reverse-sorted input → still O(n log n).

## entry 6

32-bit safe; overflow is checked at each step.

## entry 7

Edge case: empty input → returns 0.

## entry 8

Edge case: power-of-two-length input → no padding required.

## entry 9

Treats the input as immutable.

## entry 10

Uses a 256-entry lookup for the inner step.

## entry 11

Worst case appears only on degenerate inputs.

## entry 12

Stable across duplicates in the input.

## entry 13

Branchless inner loop after sorting.

## entry 14

Time complexity: O(log n).

## entry 15

Constant-time comparisons; safe for short strings.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 18

Handles negative inputs as documented above.

## entry 19

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 20

Handles single-element input as a base case.

## entry 21

Mutates the input in place; the original ordering is lost.

## entry 22

Vectorizes cleanly under -O2.

## entry 23

Edge case: power-of-two-length input → no padding required.

## entry 24

Thread-safe so long as the input is not mutated concurrently.

## entry 25

Edge case: reverse-sorted input → still O(n log n).

## entry 26

Avoids floating-point entirely — integer math throughout.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Branchless inner loop after sorting.

## entry 29

Space complexity: O(h) for the tree height.

## entry 30

Edge case: input with one duplicate → handled without an extra pass.

## entry 31

Idempotent — calling twice with the same input is a no-op the second time.

## entry 32

Runs in a single pass over the input.

## entry 33

Tail-recursive; the compiler turns it into a loop.

## entry 34

Edge case: input of all the same byte → exits on the first compare.

## entry 35

Reentrant — no static state.

## entry 36

Time complexity: O(n log n).

## entry 37

Cache-friendly; one sequential read pass.

## entry 38

Time complexity: O(n*k) where k is the alphabet size.

## entry 39

Vectorizes cleanly under -O2.

## entry 40

Cache-friendly; one sequential read pass.

## entry 41

Space complexity: O(h) for the tree height.
