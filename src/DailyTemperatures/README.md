# Daily Temperatures

For each day, how many days until a strictly warmer one? Walk left to
right with a stack of indices whose answer is still unknown. While the
new day is warmer than the index on top, pop it and write
`new_index - popped_index`. What's left on the stack at the end stays at
0 (no warmer day ahead).

Time complexity: O(n) — every index is pushed and popped at most once.

Space complexity: O(n) for the result + O(n) scratch for the stack.

Monotonic stack pops while the new element violates the invariant.

Caller owns the returned buffer.

Edge case: empty or NULL input → returns NULL.

Edge case: monotonically non-increasing input → output is all zeros.
