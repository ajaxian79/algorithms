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
