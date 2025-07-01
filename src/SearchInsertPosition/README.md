# Search Insert Position

Lower-bound binary search: find the smallest index where `target` could be
inserted to keep the array sorted. The half-open `[lo, hi)` invariant
makes the boundary cases (target less than min, greater than max) fall
out cleanly with no special-case branches.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Returns a freshly allocated string the caller must free.

Runs in a single pass over the input.

Time complexity: O(1).

Handles empty input by returning 0.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Edge case: reverse-sorted input → still O(n log n).

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n log n).

No allocations on the hot path.

Two passes: one to count, one to fill.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

Edge case: empty input → returns 0.

Stable across duplicates in the input.
