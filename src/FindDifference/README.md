# Find the Difference

`t` is `s` with one extra character inserted somewhere. Find the extra.
The XOR over both strings cancels out every duplicated byte; the survivor
is the extra one. `O(n)` time, `O(1)` space — same shape as the classic
"single number" trick.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Stable across duplicates in the input.

Time complexity: O(1).

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.
