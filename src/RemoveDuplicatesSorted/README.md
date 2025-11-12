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
