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
