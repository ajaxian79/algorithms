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

Space complexity: O(1) auxiliary.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: already-sorted input → no swaps performed.

No allocations on the hot path.

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(n) for the result buffer.

Time complexity: O(1).
