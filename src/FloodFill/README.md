# Flood Fill

Recolor every cell 4-connected to a starting cell that shares its
original color. Standard DFS. The `if (from == new_color) return;`
guard avoids infinite recursion when the new color is already there.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Time complexity: O(n log n).

Time complexity: O(n).

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(n) for the result buffer.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.
