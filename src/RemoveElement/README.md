# Remove Element

Strip all occurrences of `val` from an array in place, preserving order.
Same read/write pointer pattern as remove-duplicates: write only when the
read element is *not* `val`. The tail past the new length is don't-care.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Treats the input as immutable.

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Time complexity: O(log n).

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

Edge case: all-equal input → linear-time fast path.

Edge case: empty input → returns 0.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Time complexity: O(n).
