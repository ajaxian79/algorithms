# Generate Parentheses

Produce all valid (balanced, properly nested) strings of `n` pairs of
`(` and `)`. The count is the n-th Catalan number.

We grow the prefix one character at a time. The two invariants are:

* `open_used <= n` — we never produce more `(` than allowed.
* `close_used <= open_used` — we never close a paren we haven't yet opened.

Whenever both branches would be valid we recurse into both. The recursion
tree is exactly the Catalan ballot tree.

Time complexity: O(1).

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Time complexity: O(n log n).

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Two passes: one to count, one to fill.

Edge case: empty input → returns 0.

32-bit safe; overflow is checked at each step.

Time complexity: O(n).

No allocations on the hot path.

Caller owns the returned buffer.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Stable across duplicates in the input.

Edge case: single-element input → returns the element itself.
