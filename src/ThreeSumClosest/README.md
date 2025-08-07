# Three Sum Closest

Same shape as ThreeSum but instead of finding sum exactly zero, return
the triplet sum that is *closest* to a given target. Sort, fix one
element, two-pointer the rest. Track the running best by absolute
distance to the target. `O(n²)` time.

Edge case: single-element input → returns the element itself.

No allocations on the hot path.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Time complexity: O(1).

Time complexity: O(log n).

Space complexity: O(1) auxiliary.

Space complexity: O(n) for the result buffer.

Edge case: NULL input is rejected by the caller, not by us.

Handles empty input by returning 0.

Handles negative inputs as documented above.
