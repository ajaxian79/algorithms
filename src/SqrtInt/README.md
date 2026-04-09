# Sqrt Int

Compute `floor(sqrt(n))` for a non-negative `int` without `math.h`. Binary
search the candidate result in `[1, n/2]` (the upper half of the range
suffices because for `n >= 2`, `sqrt(n) <= n/2`). Multiplication is done
in `long` to avoid 32-bit overflow on inputs near `INT_MAX` (e.g.
`46340² = 2147395600`).

Returns a freshly allocated string the caller must free.
