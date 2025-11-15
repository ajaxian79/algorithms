# Remove Duplicates From Sorted Array

Compact a sorted array in place: each unique value should appear once, in
order, in the prefix; the suffix is don't-care. Use a `read`/`write`
pointer pair, advancing `write` only when the current element differs
from the previous.

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Time complexity: O(1).

No allocations on the hot path.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Stable across duplicates in the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Two passes: one to count, one to fill.

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: all-equal input → linear-time fast path.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Caller owns the returned buffer.

Time complexity: O(log n).

## entry 1

Resists adversarial inputs by randomizing the pivot.
