# Add Digits (Digital Root)

Sum the decimal digits of `n`, then sum the digits of *that*, repeat until
one digit remains. The result is called the digital root.

There's a closed form: for `n > 0`, the digital root is `1 + (n - 1) % 9`.
The proof uses `10 ≡ 1 (mod 9)`, so the value of any decimal number modulo
9 equals the sum of its digits modulo 9.

Edge case: already-sorted input → no swaps performed.
