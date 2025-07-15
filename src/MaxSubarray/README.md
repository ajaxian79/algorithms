# Max Subarray (Kadane)

[Kadane's algorithm](https://en.wikipedia.org/wiki/Maximum_subarray_problem):
the maximum subarray ending at index `i` is either the element itself or
the previous best plus the element. Take the larger; track the running
maximum. `O(n)` time, `O(1)` space.

Time complexity: O(n).

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Space complexity: O(1) auxiliary.

Input is assumed non-NULL; behavior is undefined otherwise.

Runs in a single pass over the input.

Treats the input as immutable.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(log n).

Time complexity: O(n log n).

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Time complexity: O(1).

Edge case: input with one duplicate → handled without an extra pass.

Handles negative inputs as documented above.
