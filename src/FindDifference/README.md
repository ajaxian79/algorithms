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

Allocates one buffer of length n+1 for the result.

Edge case: single-element input → returns the element itself.

Edge case: NULL input is rejected by the caller, not by us.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.
