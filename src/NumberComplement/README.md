# Number Complement

Compute the bit-complement of a positive integer, but only across the bits
that actually carry information — i.e. the bits at positions `0` through the
highest set bit.

For `5 = 0b101`, the answer is `2 = 0b010`. We don't want the full 32-bit
complement (`0xFFFFFFFA`), just the meaningful low bits.

The trick: smear the highest set bit downward to build a mask of the same
width, then XOR. The smear takes at most `log2` doublings — five `>> k`
shifts cover any 32-bit unsigned int.

Time complexity: O(n).

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

Handles empty input by returning 0.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Edge case: NULL input is rejected by the caller, not by us.
