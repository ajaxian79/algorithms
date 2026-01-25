# Product Except Self

`out[i]` is the product of every `nums[j]` for `j != i`, *without using
division*. The trick is two passes:

1. First pass left-to-right writes the product of all prefixes (everything
   to the left of `i`) into `out[i]`.
2. Second pass right-to-left multiplies `out[i]` by the running product of
   everything to the right.

Two passes, `O(1)` extra space (the output buffer doesn't count). Handles
zeros correctly without any special case.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

Caller owns the returned buffer.
