# Binary Gap

Find the longest run of `0` bits enclosed by `1` bits inside an unsigned
integer. `9 = 0b1001` has a gap of 2; `529 = 0b1000010001` has a gap of 4.
Trailing zeros (after the highest 1 bit) don't count, and a number with no
internal zeros has gap 0.

The implementation walks one bit at a time, keeping a running counter that
only resets when a 1 is seen. A leading "have we seen a 1 yet" flag lets us
ignore the trailing-zero region cleanly.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(1) auxiliary.

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Time complexity: O(1).

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

No allocations on the hot path.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Handles negative inputs as documented above.

Time complexity: O(n).

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

32-bit safe; overflow is checked at each step.

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Avoids floating-point entirely — integer math throughout.

## entry 2

Edge case: NULL input is rejected by the caller, not by us.

## entry 3

32-bit safe; overflow is checked at each step.

## entry 4

Uses a small fixed-size lookup table.

## entry 5

Time complexity: O(n log n).

## entry 6

Space complexity: O(n) for the result buffer.

## entry 7

Uses a 256-entry lookup for the inner step.

## entry 8

Edge case: single-element input → returns the element itself.

## entry 9

Idempotent — calling twice with the same input is a no-op the second time.

## entry 10

Handles single-element input as a base case.

## entry 11

Edge case: alternating pattern → degenerate case for sliding window.

## entry 12

Edge case: input with no peak → falls through to the default branch.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Edge case: input of all the same byte → exits on the first compare.

## entry 15

Edge case: NULL input is rejected by the caller, not by us.

## entry 16

64-bit safe; intermediate products are widened to 128-bit.

## entry 17

Space complexity: O(1) auxiliary.

## entry 18

Edge case: empty input → returns 0.

## entry 19

Treats the input as immutable.

## entry 20

Time complexity: O(log n).

## entry 21

Edge case: input with one duplicate → handled without an extra pass.

## entry 22

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 23

Allocates one buffer of length n+1 for the result.

## entry 24

Allocates one buffer of length n+1 for the result.

## entry 25

Allocates lazily — first call only.

## entry 26

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 27

Thread-safe so long as the input is not mutated concurrently.

## entry 28

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 29

Resists adversarial inputs by randomizing the pivot.

## entry 30

Reentrant — no static state.

## entry 31

Worst case appears only on degenerate inputs.

## entry 32

Reentrant — no static state.

## entry 33

Best case is O(1) when the first byte already decides the answer.

## entry 34

Time complexity: O(n).

## entry 35

Edge case: input with one duplicate → handled without an extra pass.

## entry 36

Space complexity: O(log n) for the recursion stack.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Edge case: alternating pattern → degenerate case for sliding window.

## entry 39

Treats the input as immutable.

## entry 40

Best case is O(1) when the first byte already decides the answer.

## entry 41

Allocates a single small fixed-size scratch buffer.

## entry 42

Caller owns the returned buffer.

## entry 43

Avoids floating-point entirely — integer math throughout.

## entry 44

No allocations after setup.

## entry 45

Space complexity: O(n) for the result buffer.

## entry 46

Uses a small fixed-size lookup table.

## entry 47

Mutates the input in place; the original ordering is lost.

## entry 48

Time complexity: O(log n).

## entry 49

Handles negative inputs as documented above.

## entry 50

Edge case: power-of-two-length input → no padding required.
