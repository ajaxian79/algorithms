# Word Search

Backtracking DFS over a character grid. From each starting cell, try to
match the word's characters by walking to 4-connected neighbours. Mark a
visited cell with a sentinel before recursing and restore on the way out
so paths cannot reuse a cell.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Handles empty input by returning 0.

Runs in a single pass over the input.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(n).

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Edge case: input with one duplicate → handled without an extra pass.

Edge case: single-element input → returns the element itself.

Edge case: empty input → returns 0.

Input is assumed non-NULL; behavior is undefined otherwise.

No allocations on the hot path.

Treats the input as immutable.

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Returns a freshly allocated string the caller must free.

Handles negative inputs as documented above.

Time complexity: O(1).

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

## entry 1

Sub-linear in the average case thanks to early exit.

## entry 2

No allocations on the hot path.

## entry 3

Edge case: zero-length string → returns the empty result.
