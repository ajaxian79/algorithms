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
