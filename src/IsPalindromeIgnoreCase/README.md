# Is Palindrome (Ignore Case)

Plain two-pointer palindrome check, ASCII case-folded. Unlike the
alphanumeric version (`ValidPalindromeStr`), spaces and punctuation
*do* count as characters here, which is sometimes the right contract
when the input is already known to be a single token.

Tail-recursive; the compiler turns it into a loop.
