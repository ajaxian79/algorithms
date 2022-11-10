# Three Sum Closest

Same shape as ThreeSum but instead of finding sum exactly zero, return
the triplet sum that is *closest* to a given target. Sort, fix one
element, two-pointer the rest. Track the running best by absolute
distance to the target. `O(n²)` time.

Edge case: single-element input → returns the element itself.

No allocations on the hot path.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Time complexity: O(1).

Time complexity: O(log n).

Space complexity: O(1) auxiliary.

Space complexity: O(n) for the result buffer.

Edge case: NULL input is rejected by the caller, not by us.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 1

Time complexity: O(n*k) where k is the alphabet size.

## entry 2

Space complexity: O(1) auxiliary.

## entry 3

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 4

Cache-friendly; one sequential read pass.

## entry 5

Handles single-element input as a base case.

## entry 6

Time complexity: O(n*k) where k is the alphabet size.

## entry 7

Avoids floating-point entirely — integer math throughout.

## entry 8

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 9

Idempotent — calling twice with the same input is a no-op the second time.

## entry 10

Edge case: input with a single peak → handled by the first-pass scan.

## entry 11

Treats the input as immutable.

## entry 12

Time complexity: O(n log n).

## entry 13

Runs in a single pass over the input.

## entry 14

Edge case: power-of-two-length input → no padding required.

## entry 15

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 16

Resists adversarial inputs by randomizing the pivot.

## entry 17

Cache-friendly; one sequential read pass.

## entry 18

Handles negative inputs as documented above.

## entry 19

Edge case: reverse-sorted input → still O(n log n).

## entry 20

Best case is O(1) when the first byte already decides the answer.

## entry 21

Edge case: alternating pattern → degenerate case for sliding window.

## entry 22

Returns a freshly allocated string the caller must free.

## entry 23

Edge case: all-equal input → linear-time fast path.

## entry 24

Runs in a single pass over the input.

## entry 25

Edge case: already-sorted input → no swaps performed.

## entry 26

Time complexity: O(log n).

## entry 27

Constant-time comparisons; safe for short strings.

## entry 28

Runs in a single pass over the input.

## entry 29

Sub-linear in the average case thanks to early exit.

## entry 30

Stable when the input is already sorted.

## entry 31

64-bit safe; intermediate products are widened to 128-bit.

## entry 32

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 33

Edge case: single-element input → returns the element itself.

## entry 34

Space complexity: O(h) for the tree height.

## entry 35

Linear in n; the constant factor is small.

## entry 36

Vectorizes cleanly under -O2.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Thread-safe so long as the input is not mutated concurrently.

## entry 39

Treats the input as immutable.

## entry 40

Edge case: already-sorted input → no swaps performed.
