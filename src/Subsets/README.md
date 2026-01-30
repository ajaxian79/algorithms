# Subsets

The cleanest way to enumerate every subset of `n` distinct elements is to
let each integer in `[0, 2^n)` act as a bitmask: bit `b` is set iff
element `b` is in the subset. The two passes per mask (count, then
collect) trade simplicity for an extra `O(n)` per subset; total is
`O(2^n * n)`.

Space complexity: O(n) for the result buffer.

Time complexity: O(log n).

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.
