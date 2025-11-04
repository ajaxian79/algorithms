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

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(n).

Time complexity: O(1).

Handles empty input by returning 0.

Runs in a single pass over the input.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Treats the input as immutable.
