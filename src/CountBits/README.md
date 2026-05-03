# Count Bits

For each integer `i` in `[0, n]`, fill `out[i]` with the popcount of `i`.
The trick is `i & (i - 1)` clears the lowest set bit, so
`popcount(i) == popcount(i & (i - 1)) + 1`. Read the answer for the
already-filled smaller index and add one. The whole table fills in a
single linear pass.

Time complexity: O(n).

Space complexity: O(n) for the result array (excluding the result itself
the algorithm uses O(1) auxiliary).

Caller owns the returned buffer; free with a single `free`.

Edge case: `n < 0` returns NULL.
