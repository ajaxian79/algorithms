# Meeting Rooms II

Compute the minimum number of rooms needed to host every meeting without
overlap. The classic two-pointer trick: sort starts and ends separately,
walk in lock-step, and at each step ask "did a meeting start before the
earliest-ending meeting actually ends?" If yes, allocate another room;
otherwise free a room (advance the end pointer).

The peak room count over the walk is the answer. `O(n log n)` from the two
sorts.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Edge case: reverse-sorted input → still O(n log n).
