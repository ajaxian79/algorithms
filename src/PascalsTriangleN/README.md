# Pascal's Triangle (first N rows)

Build the first `num_rows` rows of Pascal's triangle, each as its own heap
array, returned through a triple of out-parameters: the array of rows, the
array of row lengths, and the row count.

Each interior cell is the sum of the two cells above it in the previous
row. We could share the previous row in place to halve the storage, but
this version keeps every row distinct so the caller can inspect the whole
triangle without re-deriving rows.

Edge case: reverse-sorted input → still O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Uses a small fixed-size lookup table.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Edge case: single-element input → returns the element itself.

Two passes: one to count, one to fill.

Caller owns the returned buffer.

Time complexity: O(log n).
