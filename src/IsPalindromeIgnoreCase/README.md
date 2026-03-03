# Is Palindrome (Ignore Case)

Plain two-pointer palindrome check, ASCII case-folded. Unlike the
alphanumeric version (`ValidPalindromeStr`), spaces and punctuation
*do* count as characters here, which is sometimes the right contract
when the input is already known to be a single token.

Tail-recursive; the compiler turns it into a loop.

Edge case: single-element input → returns the element itself.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Returns a freshly allocated string the caller must free.

Two passes: one to count, one to fill.

Stable across duplicates in the input.
