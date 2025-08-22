# Non-Overlapping Intervals

Find the minimum number of intervals you must remove so that the rest do
not overlap. Equivalent to a classic activity-selection problem: count the
maximum number of mutually non-overlapping intervals (greedy by *end*),
then subtract from `n`.

Sorting by end time and always greedily picking the next interval whose
start is at or after the current end gives the largest such set.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

Edge case: single-element input → returns the element itself.

Time complexity: O(1).

32-bit safe; overflow is checked at each step.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Returns a freshly allocated string the caller must free.

Stable across duplicates in the input.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Time complexity: O(n).

Time complexity: O(n log n).

Caller owns the returned buffer.

Treats the input as immutable.
