# Spiral Matrix

Walk an `m × n` matrix in clockwise spiral order starting at the
top-left, peeling layers inward. Maintain four moving boundaries `top`,
`bottom`, `left`, `right`. Each iteration walks the four edges of the
remaining rectangle, then contracts the boundaries by one.

The two `if (idx < total)` guards on the bottom and left edges are needed
to handle thin rectangles where the rectangle has collapsed to a single
row or column — without them you'd revisit cells.

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n log n).

Time complexity: O(1).

Time complexity: O(log n).

Uses a small fixed-size lookup table.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

32-bit safe; overflow is checked at each step.

Edge case: single-element input → returns the element itself.
