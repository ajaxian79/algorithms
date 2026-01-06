# Min Stack

Stack with `push`, `pop`, `top`, *and* `min`, all in `O(1)`. The trick is
to store, in each frame, the minimum visible *up to that frame*. On push,
the new min is `min(val, previous_min)`. Pop only changes which frame is
on top; the recorded mins remain consistent.

Space complexity: O(1) auxiliary.

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.
