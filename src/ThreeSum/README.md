# Three Sum

Find every unique triplet `[a, b, c]` in `nums` with `a + b + c == 0`.
Sort first, then for each fixed `nums[i]` use a two-pointer scan over the
remainder. Skip duplicates by jumping over equal consecutive values at
all three positions.

`O(n²)` time, dominated by the inner two-pointer pass; `O(1)` extra space
besides the output buffer.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: reverse-sorted input → still O(n log n).
