# Meeting Rooms

Given a list of `[start, end)` meeting intervals, decide whether one
person could attend all of them. After sorting by start time, the answer
is "no" iff some meeting starts before the previous one ended. `O(n log n)`
from the sort.

Time complexity: O(n).

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Edge case: input with one duplicate → handled without an extra pass.

Caller owns the returned buffer.

Time complexity: O(log n).

Stable across duplicates in the input.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(1).

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

Time complexity: O(n log n).

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

Tail-recursive; the compiler turns it into a loop.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.
