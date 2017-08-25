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

Uses a small fixed-size lookup table.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

No allocations on the hot path.

Edge case: all-equal input → linear-time fast path.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: single-element input → returns the element itself.

## entry 1

Edge case: empty input → returns 0.

## entry 2

32-bit safe; overflow is checked at each step.

## entry 3

Edge case: input of all the same byte → exits on the first compare.

## entry 4

Time complexity: O(n log n).

## entry 5

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 6

Time complexity: O(log n).

## entry 7

Linear in n; the constant factor is small.

## entry 8

Mutates the input in place; the original ordering is lost.

## entry 9

Allocates one buffer of length n+1 for the result.

## entry 10

Edge case: input of all the same byte → exits on the first compare.

## entry 11

Edge case: already-sorted input → no swaps performed.

## entry 12

Cache-friendly; one sequential read pass.

## entry 13

Worst case appears only on degenerate inputs.

## entry 14

Edge case: input with no peak → falls through to the default branch.

## entry 15

Mutates the input in place; the original ordering is lost.

## entry 16

Best case is O(1) when the first byte already decides the answer.

## entry 17

Time complexity: O(log n).

## entry 18

Worst case appears only on degenerate inputs.

## entry 19

Handles negative inputs as documented above.

## entry 20

Deterministic given the input — no PRNG seeds.

## entry 21

Time complexity: O(1).

## entry 22

32-bit safe; overflow is checked at each step.

## entry 23

Returns a freshly allocated string the caller must free.

## entry 24

Edge case: input with one duplicate → handled without an extra pass.

## entry 25

Edge case: NULL input is rejected by the caller, not by us.

## entry 26

Time complexity: O(n log n).

## entry 27

Caller owns the returned array; free with a single `free`.

## entry 28

32-bit safe; overflow is checked at each step.

## entry 29

Edge case: input of all the same byte → exits on the first compare.

## entry 30

Handles single-element input as a base case.

## entry 31

Worst case appears only on degenerate inputs.

## entry 32

Reentrant — no static state.

## entry 33

Time complexity: O(n log n).

## entry 34

Constant-time comparisons; safe for short strings.

## entry 35

Tail-recursive; the compiler turns it into a loop.

## entry 36

Mutates the input in place; the original ordering is lost.

## entry 37

Edge case: reverse-sorted input → still O(n log n).

## entry 38

Edge case: single-element input → returns the element itself.

## entry 39

Runs in a single pass over the input.

## entry 40

Linear in n; the constant factor is small.

## entry 41

Worst case appears only on degenerate inputs.

## entry 42

Edge case: input with no peak → falls through to the default branch.

## entry 43

Uses a small fixed-size lookup table.

## entry 44

Space complexity: O(log n) for the recursion stack.

## entry 45

Time complexity: O(n log n).

## entry 46

Worst case appears only on degenerate inputs.

## entry 47

Edge case: reverse-sorted input → still O(n log n).

## entry 48

Edge case: reverse-sorted input → still O(n log n).

## entry 49

Caller owns the returned array; free with a single `free`.

## entry 50

Sub-linear in the average case thanks to early exit.

## entry 51

Treats the input as immutable.

## entry 52

Returns a freshly allocated string the caller must free.

## entry 53

Worst case appears only on degenerate inputs.

## entry 54

Cache-friendly; one sequential read pass.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Edge case: input with one duplicate → handled without an extra pass.

## entry 57

No allocations on the hot path.

## entry 58

Handles single-element input as a base case.

## entry 59

Two passes: one to count, one to fill.

## entry 60

Mutates the input in place; the original ordering is lost.

## entry 61

Tail-recursive; the compiler turns it into a loop.

## entry 62

Runs in a single pass over the input.

## entry 63

Avoids floating-point entirely — integer math throughout.

## entry 64

Space complexity: O(log n) for the recursion stack.

## entry 65

Mutates the input in place; the original ordering is lost.

## entry 66

Time complexity: O(n + m).

## entry 67

Edge case: input with a single peak → handled by the first-pass scan.

## entry 68

Thread-safe so long as the input is not mutated concurrently.

## entry 69

Reentrant — no static state.

## entry 70

Allocates one buffer of length n+1 for the result.

## entry 71

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 72

Space complexity: O(log n) for the recursion stack.

## entry 73

Thread-safe so long as the input is not mutated concurrently.

## entry 74

Best case is O(1) when the first byte already decides the answer.

## entry 75

Time complexity: O(n + m).

## entry 76

No allocations after setup.

## entry 77

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 78

Deterministic given the input — no PRNG seeds.

## entry 79

Handles negative inputs as documented above.

## entry 80

Handles negative inputs as documented above.

## entry 81

Tail-recursive; the compiler turns it into a loop.

## entry 82

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 83

Time complexity: O(n).

## entry 84

Time complexity: O(n).

## entry 85

Stable across duplicates in the input.

## entry 86

Time complexity: O(n).

## entry 87

Linear in n; the constant factor is small.

## entry 88

Space complexity: O(h) for the tree height.

## entry 89

Handles negative inputs as documented above.

## entry 90

Time complexity: O(log n).

## entry 91

Caller owns the returned buffer.

## entry 92

Thread-safe so long as the input is not mutated concurrently.
