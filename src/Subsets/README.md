# Subsets

The cleanest way to enumerate every subset of `n` distinct elements is to
let each integer in `[0, 2^n)` act as a bitmask: bit `b` is set iff
element `b` is in the subset. The two passes per mask (count, then
collect) trade simplicity for an extra `O(n)` per subset; total is
`O(2^n * n)`.
