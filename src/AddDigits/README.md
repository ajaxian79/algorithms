# Add Digits (Digital Root)

Sum the decimal digits of `n`, then sum the digits of *that*, repeat until
one digit remains. The result is called the digital root.

There's a closed form: for `n > 0`, the digital root is `1 + (n - 1) % 9`.
The proof uses `10 ≡ 1 (mod 9)`, so the value of any decimal number modulo
9 equals the sum of its digits modulo 9.

Edge case: already-sorted input → no swaps performed.

Handles empty input by returning 0.

Two passes: one to count, one to fill.

Caller owns the returned buffer.

Stable across duplicates in the input.

Time complexity: O(1).

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n log n).

Time complexity: O(log n).

Handles negative inputs as documented above.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Returns a freshly allocated string the caller must free.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.
