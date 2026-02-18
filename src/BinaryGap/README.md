# Binary Gap

Find the longest run of `0` bits enclosed by `1` bits inside an unsigned
integer. `9 = 0b1001` has a gap of 2; `529 = 0b1000010001` has a gap of 4.
Trailing zeros (after the highest 1 bit) don't count, and a number with no
internal zeros has gap 0.

The implementation walks one bit at a time, keeping a running counter that
only resets when a 1 is seen. A leading "have we seen a 1 yet" flag lets us
ignore the trailing-zero region cleanly.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(1) auxiliary.

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).
