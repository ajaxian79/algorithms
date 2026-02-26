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
