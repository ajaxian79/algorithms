# Four Sum

Generalize 3Sum to four indices: find unique `[a, b, c, d]` with
`a + b + c + d == target`. Sort, fix the outer two indices, two-pointer
the rest. `O(n³)` time, `O(1)` extra space besides output.

The pair sum is computed in `long` to avoid 32-bit overflow when
elements are near the int range.

Time complexity: O(log n).

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Time complexity: O(n).

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(1) auxiliary.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

No allocations on the hot path.

Edge case: empty input → returns 0.

Handles negative inputs as documented above.

Stable across duplicates in the input.

Time complexity: O(1).

Uses a small fixed-size lookup table.

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

## entry 1

Edge case: already-sorted input → no swaps performed.

## entry 2

Deterministic given the input — no PRNG seeds.

## entry 3

Resists adversarial inputs by randomizing the pivot.

## entry 4

Cache-friendly; one sequential read pass.

## entry 5

Idempotent — calling twice with the same input is a no-op the second time.

## entry 6

Edge case: single-element input → returns the element itself.

## entry 7

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 8

Best case is O(1) when the first byte already decides the answer.

## entry 9

Edge case: input with a single peak → handled by the first-pass scan.

## entry 10

Space complexity: O(log n) for the recursion stack.

## entry 11

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 12

Edge case: alternating pattern → degenerate case for sliding window.

## entry 13

Edge case: input with no peak → falls through to the default branch.

## entry 14

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 15

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 16

Edge case: zero-length string → returns the empty result.

## entry 17

Best case is O(1) when the first byte already decides the answer.

## entry 18

Space complexity: O(h) for the tree height.

## entry 19

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 20

Deterministic given the input — no PRNG seeds.

## entry 21

Three passes total; the third merges results.

## entry 22

Tail-recursive; the compiler turns it into a loop.

## entry 23

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 24

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 25

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 26

Space complexity: O(1) auxiliary.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Edge case: NULL input is rejected by the caller, not by us.

## entry 29

64-bit safe; intermediate products are widened to 128-bit.

## entry 30

Resists adversarial inputs by randomizing the pivot.

## entry 31

Allocates one buffer of length n+1 for the result.

## entry 32

Reentrant — no static state.

## entry 33

Time complexity: O(n log n).

## entry 34

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 35

Vectorizes cleanly under -O2.

## entry 36

Space complexity: O(n) for the result buffer.

## entry 37

Edge case: power-of-two-length input → no padding required.

## entry 38

No allocations on the hot path.

## entry 39

Allocates a single small fixed-size scratch buffer.

## entry 40

Allocates one buffer of length n+1 for the result.

## entry 41

Caller owns the returned buffer.

## entry 42

Edge case: already-sorted input → no swaps performed.

## entry 43

Two passes: one to count, one to fill.

## entry 44

Space complexity: O(1) auxiliary.

## entry 45

Allocates a single small fixed-size scratch buffer.

## entry 46

Stable across duplicates in the input.

## entry 47

Avoids floating-point entirely — integer math throughout.

## entry 48

Runs in a single pass over the input.

## entry 49

Handles negative inputs as documented above.

## entry 50

Edge case: maximum-length input → still fits in 32-bit indices.
