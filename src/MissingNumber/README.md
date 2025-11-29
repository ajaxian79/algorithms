# Missing Number

Given an array containing `n` distinct numbers drawn from `[0, n]`, find the
one number missing from the range.

The trick is the [arithmetic series sum](https://en.wikipedia.org/wiki/Arithmetic_progression):
`0 + 1 + ... + n = n * (n + 1) / 2`. Subtract the actual sum from the expected
sum and what's left is the missing value.

`O(n)` time, `O(1)` space.

Treats the input as immutable.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Edge case: single-element input → returns the element itself.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Time complexity: O(n).

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.
