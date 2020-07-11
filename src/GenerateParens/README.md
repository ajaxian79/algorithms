# Generate Parentheses

Produce all valid (balanced, properly nested) strings of `n` pairs of
`(` and `)`. The count is the n-th Catalan number.

We grow the prefix one character at a time. The two invariants are:

* `open_used <= n` — we never produce more `(` than allowed.
* `close_used <= open_used` — we never close a paren we haven't yet opened.

Whenever both branches would be valid we recurse into both. The recursion
tree is exactly the Catalan ballot tree.
