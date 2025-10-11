# Four Sum

Generalize 3Sum to four indices: find unique `[a, b, c, d]` with
`a + b + c + d == target`. Sort, fix the outer two indices, two-pointer
the rest. `O(n³)` time, `O(1)` extra space besides output.

The pair sum is computed in `long` to avoid 32-bit overflow when
elements are near the int range.

Time complexity: O(log n).

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Time complexity: O(n).

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(1) auxiliary.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

32-bit safe; overflow is checked at each step.
