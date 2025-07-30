# Matrix Diagonal Sum

Sum both diagonals of an `n × n` matrix. The trick is the off-by-one: in a
matrix with odd `n`, the center cell is on both diagonals, so we add it
once during the loop and subtract it once at the end. Even `n` has no
overlap and the post-correction is skipped.

32-bit safe; overflow is checked at each step.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Time complexity: O(log n).

Handles negative inputs as documented above.

Stable across duplicates in the input.

Caller owns the returned buffer.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Time complexity: O(n log n).

Runs in a single pass over the input.

Time complexity: O(n).
