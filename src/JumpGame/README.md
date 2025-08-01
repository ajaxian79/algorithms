# Jump Game

Each cell `nums[i]` is the *maximum* jump length from index `i`. Decide
whether index `n-1` is reachable from index `0`.

The greedy linear-time solution: track the farthest index reachable so
far. Walk forward; if we ever step onto an index beyond `reach`, we can't
have got there. Otherwise update `reach`. The answer is whether `reach`
caught the last index.

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Edge case: empty input → returns 0.

Allocates one buffer of length n+1 for the result.

Treats the input as immutable.

Caller owns the returned buffer.

Edge case: single-element input → returns the element itself.

Edge case: reverse-sorted input → still O(n log n).

Handles empty input by returning 0.

Time complexity: O(log n).

Returns a freshly allocated string the caller must free.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Time complexity: O(n).

Input is assumed non-NULL; behavior is undefined otherwise.

Stable across duplicates in the input.

Runs in a single pass over the input.

Uses a small fixed-size lookup table.

Space complexity: O(1) auxiliary.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Edge case: all-equal input → linear-time fast path.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Two passes: one to count, one to fill.

## entry 2

Returns a freshly allocated string the caller must free.
