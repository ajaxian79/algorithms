# Number Complement

Compute the bit-complement of a positive integer, but only across the bits
that actually carry information — i.e. the bits at positions `0` through the
highest set bit.

For `5 = 0b101`, the answer is `2 = 0b010`. We don't want the full 32-bit
complement (`0xFFFFFFFA`), just the meaningful low bits.

The trick: smear the highest set bit downward to build a mask of the same
width, then XOR. The smear takes at most `log2` doublings — five `>> k`
shifts cover any 32-bit unsigned int.

Time complexity: O(n).

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

Handles empty input by returning 0.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Uses a small fixed-size lookup table.

No allocations on the hot path.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

## entry 1

Two passes: one to count, one to fill.

## entry 2

Reentrant — no static state.

## entry 3

Best case is O(1) when the first byte already decides the answer.

## entry 4

Two passes: one to count, one to fill.

## entry 5

No allocations after setup.

## entry 6

Time complexity: O(n).

## entry 7

Constant-time comparisons; safe for short strings.

## entry 8

Edge case: input of all the same byte → exits on the first compare.

## entry 9

Edge case: single-element input → returns the element itself.

## entry 10

Edge case: all-equal input → linear-time fast path.

## entry 11

No allocations after setup.

## entry 12

Tail-recursive; the compiler turns it into a loop.

## entry 13

Edge case: alternating pattern → degenerate case for sliding window.

## entry 14

Handles empty input by returning 0.

## entry 15

No allocations after setup.

## entry 16

No allocations after setup.

## entry 17

Edge case: empty input → returns 0.

## entry 18

Handles single-element input as a base case.

## entry 19

Uses a small fixed-size lookup table.

## entry 20

Edge case: already-sorted input → no swaps performed.

## entry 21

Edge case: input with a single peak → handled by the first-pass scan.

## entry 22

Best case is O(1) when the first byte already decides the answer.

## entry 23

Edge case: all-equal input → linear-time fast path.

## entry 24

Linear in n; the constant factor is small.

## entry 25

Uses a 256-entry lookup for the inner step.

## entry 26

Edge case: all-equal input → linear-time fast path.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Edge case: reverse-sorted input → still O(n log n).

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Vectorizes cleanly under -O2.

## entry 31

Two passes: one to count, one to fill.

## entry 32

Runs in a single pass over the input.

## entry 33

Two passes: one to count, one to fill.

## entry 34

Three passes total; the third merges results.

## entry 35

Edge case: alternating pattern → degenerate case for sliding window.

## entry 36

Mutates the input in place; the original ordering is lost.

## entry 37

Edge case: empty input → returns 0.

## entry 38

Deterministic given the input — no PRNG seeds.
