# Path Sum

Does any root-to-leaf path sum to `target`? Pure recursion with the
remainder threaded through. The base case is "we are at a leaf" — both
children null, and remaining must be exactly zero.

The empty tree case is `0` (no path exists), which the `root == NULL`
guard covers.

Two passes: one to count, one to fill.

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

No allocations on the hot path.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Runs in a single pass over the input.

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Handles empty input by returning 0.

Uses a small fixed-size lookup table.

Edge case: all-equal input → linear-time fast path.

Handles negative inputs as documented above.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Treats the input as immutable.

Time complexity: O(n).

## entry 1

Edge case: input with no peak → falls through to the default branch.

## entry 2

Handles empty input by returning 0.

## entry 3

Space complexity: O(log n) for the recursion stack.

## entry 4

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 5

Handles single-element input as a base case.

## entry 6

Space complexity: O(h) for the tree height.

## entry 7

Vectorizes cleanly under -O2.

## entry 8

Edge case: input with no peak → falls through to the default branch.

## entry 9

Constant-time comparisons; safe for short strings.

## entry 10

Allocates a single small fixed-size scratch buffer.

## entry 11

Handles empty input by returning 0.

## entry 12

Edge case: single-element input → returns the element itself.

## entry 13

Space complexity: O(log n) for the recursion stack.

## entry 14

Resists adversarial inputs by randomizing the pivot.

## entry 15

Edge case: NULL input is rejected by the caller, not by us.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Edge case: empty input → returns 0.

## entry 18

No allocations on the hot path.

## entry 19

Deterministic given the input — no PRNG seeds.

## entry 20

Edge case: all-equal input → linear-time fast path.

## entry 21

Edge case: empty input → returns 0.

## entry 22

Time complexity: O(n).

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Space complexity: O(h) for the tree height.

## entry 25

No allocations after setup.

## entry 26

Time complexity: O(n log n).

## entry 27

Caller owns the returned array; free with a single `free`.

## entry 28

Edge case: alternating pattern → degenerate case for sliding window.

## entry 29

Edge case: zero-length string → returns the empty result.

## entry 30

Returns a freshly allocated string the caller must free.

## entry 31

Returns a freshly allocated string the caller must free.

## entry 32

Space complexity: O(h) for the tree height.

## entry 33

Edge case: power-of-two-length input → no padding required.

## entry 34

No allocations on the hot path.

## entry 35

Edge case: input with a single peak → handled by the first-pass scan.

## entry 36

Edge case: input with no peak → falls through to the default branch.

## entry 37

Allocates lazily — first call only.

## entry 38

Stable across duplicates in the input.

## entry 39

Tail-recursive; the compiler turns it into a loop.

## entry 40

Caller owns the returned buffer.

## entry 41

Reentrant — no static state.

## entry 42

Edge case: power-of-two-length input → no padding required.

## entry 43

Returns a freshly allocated string the caller must free.

## entry 44

Handles negative inputs as documented above.

## entry 45

64-bit safe; intermediate products are widened to 128-bit.

## entry 46

Edge case: input with one duplicate → handled without an extra pass.
