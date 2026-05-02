# Pow(x, n)

Fast exponentiation by squaring. Walk the exponent bit by bit; whenever a
bit is set, fold `base` into the running product, then square `base` for
the next bit. Negative exponents are handled by inverting `x` up front and
flipping the sign of `n` after widening to `long` so `INT_MIN` does not
overflow on negation.

Time complexity: O(log |n|).

Space complexity: O(1).

Edge case: `n == 0` returns 1.0 for any `x`.

Edge case: `n == INT_MIN` is safe because the negation happens after the
exponent is widened to `long`.
