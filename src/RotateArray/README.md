# Rotate Array

Rotate an array right by `k` steps in place. The triple-reverse trick:

1. Reverse the whole array.
2. Reverse the first `k` elements.
3. Reverse the rest.

Three reversals produce the right rotation in `O(n)` time and `O(1)`
space. The `((k %% n) + n) %% n` normalization handles negative `k` and
multiples-of-n.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Caller owns the returned buffer.

32-bit safe; overflow is checked at each step.

No allocations on the hot path.

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Handles negative inputs as documented above.

Edge case: single-element input → returns the element itself.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(n) for the result buffer.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Tail-recursive; the compiler turns it into a loop.

Treats the input as immutable.

Time complexity: O(log n).

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Time complexity: O(n log n).

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

Space complexity: O(1) auxiliary.

Edge case: empty input → returns 0.

Time complexity: O(1).

Runs in a single pass over the input.

Handles empty input by returning 0.

## entry 1

Space complexity: O(log n) for the recursion stack.
