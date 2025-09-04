# Perfect Square

Decide whether a positive integer is a perfect square — without using
`sqrt`. Binary-search the candidate value `mid` in `[1, n]`, comparing
`mid * mid` against `n`. Use `long` for the multiplication to avoid 32-bit
overflow on near-`INT_MAX` inputs (e.g. `2147395600 = 46340²`).

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Time complexity: O(n log n).

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Edge case: empty input → returns 0.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

No allocations on the hot path.

Time complexity: O(log n).

Edge case: reverse-sorted input → still O(n log n).

Tail-recursive; the compiler turns it into a loop.

32-bit safe; overflow is checked at each step.

Runs in a single pass over the input.

Handles negative inputs as documented above.

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Uses a small fixed-size lookup table.
