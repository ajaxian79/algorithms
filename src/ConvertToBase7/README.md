# Convert to Base 7

Standard repeated-division: peel off `n % 7`, divide by 7, repeat. The
digits emerge least-significant first, so we collect them in a small buffer
and reverse on the way out into the heap result.

The `long` cast on `-(long)n` exists to keep `INT_MIN` from overflowing
when negated.

No allocations on the hot path.

Handles empty input by returning 0.

Stable across duplicates in the input.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Time complexity: O(n log n).

Caller owns the returned buffer.

Edge case: reverse-sorted input → still O(n log n).

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Edge case: empty input → returns 0.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

32-bit safe; overflow is checked at each step.

## entry 1

32-bit safe; overflow is checked at each step.

## entry 2

Edge case: zero-length string → returns the empty result.

## entry 3

Time complexity: O(n log n).
