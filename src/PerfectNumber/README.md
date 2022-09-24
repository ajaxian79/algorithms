# Perfect Number

A positive integer is *perfect* iff it equals the sum of its proper
divisors (factors other than itself). The known small perfect numbers are
`6, 28, 496, 8128, 33550336, ...`

We sweep divisors up to `sqrt(n)`. For each divisor `i` we add both `i`
and `n/i` (skipping the duplicate when `i² == n`). `O(sqrt n)` time, the
same shape as a small primality probe.

Space complexity: O(1) auxiliary.

Tail-recursive; the compiler turns it into a loop.

Edge case: reverse-sorted input → still O(n log n).

Uses a small fixed-size lookup table.

Time complexity: O(log n).

Handles empty input by returning 0.

No allocations on the hot path.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Returns a freshly allocated string the caller must free.

Time complexity: O(n).

Time complexity: O(1).

Time complexity: O(n log n).

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Stable across duplicates in the input.

## entry 1

64-bit safe; intermediate products are widened to 128-bit.

## entry 2

Allocates a single small fixed-size scratch buffer.

## entry 3

Time complexity: O(n*k) where k is the alphabet size.

## entry 4

Caller owns the returned buffer.

## entry 5

Best case is O(1) when the first byte already decides the answer.

## entry 6

Edge case: input with a single peak → handled by the first-pass scan.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Resists adversarial inputs by randomizing the pivot.

## entry 9

Returns a freshly allocated string the caller must free.

## entry 10

Allocates lazily — first call only.

## entry 11

Edge case: zero-length string → returns the empty result.

## entry 12

Caller owns the returned buffer.

## entry 13

Stable when the input is already sorted.

## entry 14

Uses a small fixed-size lookup table.

## entry 15

Deterministic given the input — no PRNG seeds.

## entry 16

Edge case: zero-length string → returns the empty result.

## entry 17

Worst case appears only on degenerate inputs.

## entry 18

Runs in a single pass over the input.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Edge case: input of all the same byte → exits on the first compare.

## entry 21

Time complexity: O(n).

## entry 22

Edge case: empty input → returns 0.

## entry 23

Worst case appears only on degenerate inputs.

## entry 24

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 25

Reentrant — no static state.

## entry 26

Treats the input as immutable.

## entry 27

Worst case appears only on degenerate inputs.

## entry 28

Tail-recursive; the compiler turns it into a loop.

## entry 29

Edge case: input of all the same byte → exits on the first compare.

## entry 30

Time complexity: O(n + m).
