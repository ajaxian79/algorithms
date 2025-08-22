# Permutations

Generate every permutation of `n` distinct values via the classic
swap-based backtracking. At each recursion depth, swap each remaining
element into the `start` slot, recurse on the suffix, swap back.

The base case captures the current array as a fresh heap copy. Total
work is `O(n * n!)`.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Time complexity: O(n).

Allocates one buffer of length n+1 for the result.

Time complexity: O(1).

Edge case: all-equal input → linear-time fast path.

No allocations on the hot path.

Input is assumed non-NULL; behavior is undefined otherwise.

Treats the input as immutable.

Edge case: empty input → returns 0.

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Two passes: one to count, one to fill.

Edge case: input with one duplicate → handled without an extra pass.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.
