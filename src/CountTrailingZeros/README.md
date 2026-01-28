# Count Trailing Zeros (n!)

Count the trailing zeros of `n!` without ever computing the factorial. Each
trailing zero comes from a factor of `10 = 2 × 5`. Factors of 2 are always
plentiful in `n!`, so the answer is simply the number of factors of 5 in
`n!`, which is `floor(n/5) + floor(n/25) + floor(n/125) + ...`. The loop
divides `n` by 5 each iteration and accumulates.

`n = 25` contributes one extra 5 (because `25 = 5²`), which is exactly what
the second term `floor(25/25) = 1` accounts for.

Time complexity: O(1).

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

Handles empty input by returning 0.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.
