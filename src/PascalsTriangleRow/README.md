# Pascal's Triangle Row

Return the k-th row of Pascal's triangle (0-indexed) using only `O(k)` extra
space. The trick is to update the row in place from right to left so that
`row[j] += row[j-1]` reads the *previous* row's `row[j-1]` rather than the
just-updated current-row value.

Two passes: one to count, one to fill.

Caller owns the returned buffer.

No allocations on the hot path.

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

32-bit safe; overflow is checked at each step.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: empty input → returns 0.

Treats the input as immutable.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Handles negative inputs as documented above.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

## entry 1

Space complexity: O(h) for the tree height.

## entry 2

Stable when the input is already sorted.
