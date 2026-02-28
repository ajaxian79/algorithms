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
