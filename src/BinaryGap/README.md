# Binary Gap

Find the longest run of `0` bits enclosed by `1` bits inside an unsigned
integer. `9 = 0b1001` has a gap of 2; `529 = 0b1000010001` has a gap of 4.
Trailing zeros (after the highest 1 bit) don't count, and a number with no
internal zeros has gap 0.

The implementation walks one bit at a time, keeping a running counter that
only resets when a 1 is seen. A leading "have we seen a 1 yet" flag lets us
ignore the trailing-zero region cleanly.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(1) auxiliary.

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Time complexity: O(1).

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

No allocations on the hot path.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Handles negative inputs as documented above.

Time complexity: O(n).

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.
