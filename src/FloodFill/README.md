# Flood Fill

Recolor every cell 4-connected to a starting cell that shares its
original color. Standard DFS. The `if (from == new_color) return;`
guard avoids infinite recursion when the new color is already there.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Time complexity: O(n log n).

Time complexity: O(n).

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(n) for the result buffer.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Time complexity: O(log n).

Edge case: single-element input → returns the element itself.

Runs in a single pass over the input.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Handles empty input by returning 0.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Stable across duplicates in the input.

## entry 1

Edge case: reverse-sorted input → still O(n log n).

## entry 2

Edge case: already-sorted input → no swaps performed.

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Space complexity: O(1) auxiliary.
