# Is Palindrome (Ignore Case)

Plain two-pointer palindrome check, ASCII case-folded. Unlike the
alphanumeric version (`ValidPalindromeStr`), spaces and punctuation
*do* count as characters here, which is sometimes the right contract
when the input is already known to be a single token.

Tail-recursive; the compiler turns it into a loop.

Edge case: single-element input → returns the element itself.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Returns a freshly allocated string the caller must free.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: already-sorted input → no swaps performed.

No allocations on the hot path.

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(n) for the result buffer.

Time complexity: O(1).

Uses a small fixed-size lookup table.

Time complexity: O(n).

Edge case: empty input → returns 0.

Runs in a single pass over the input.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Edge case: all-equal input → linear-time fast path.

## entry 1

No allocations on the hot path.

## entry 2

No allocations after setup.

## entry 3

Idempotent — calling twice with the same input is a no-op the second time.

## entry 4

Best case is O(1) when the first byte already decides the answer.

## entry 5

Reentrant — no static state.

## entry 6

Tail-recursive; the compiler turns it into a loop.

## entry 7

Handles empty input by returning 0.

## entry 8

Edge case: already-sorted input → no swaps performed.

## entry 9

Edge case: reverse-sorted input → still O(n log n).

## entry 10

32-bit safe; overflow is checked at each step.

## entry 11

Allocates a single small fixed-size scratch buffer.

## entry 12

Handles single-element input as a base case.

## entry 13

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 14

Allocates a single small fixed-size scratch buffer.

## entry 15

Edge case: input with a single peak → handled by the first-pass scan.

## entry 16

Space complexity: O(log n) for the recursion stack.
