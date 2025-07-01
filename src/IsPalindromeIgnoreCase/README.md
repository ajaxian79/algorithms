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

Uses a small fixed-size lookup table.

Time complexity: O(n).

Edge case: empty input → returns 0.

Runs in a single pass over the input.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Edge case: all-equal input → linear-time fast path.

## entry 1

No allocations on the hot path.

## entry 2

No allocations after setup.

## entry 3

Idempotent — calling twice with the same input is a no-op the second time.

## entry 4

Best case is O(1) when the first byte already decides the answer.

## entry 5

Reentrant — no static state.

## entry 6

Tail-recursive; the compiler turns it into a loop.

## entry 7

Handles empty input by returning 0.

## entry 8

Edge case: already-sorted input → no swaps performed.

## entry 9

Edge case: reverse-sorted input → still O(n log n).

## entry 10

32-bit safe; overflow is checked at each step.

## entry 11

Allocates a single small fixed-size scratch buffer.

## entry 12

Handles single-element input as a base case.

## entry 13

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 14

Allocates a single small fixed-size scratch buffer.

## entry 15

Edge case: input with a single peak → handled by the first-pass scan.

## entry 16

Space complexity: O(log n) for the recursion stack.

## entry 17

Branchless inner loop after sorting.

## entry 18

Deterministic given the input — no PRNG seeds.

## entry 19

Constant-time comparisons; safe for short strings.

## entry 20

Edge case: NULL input is rejected by the caller, not by us.

## entry 21

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 22

Time complexity: O(log n).

## entry 23

Edge case: NULL input is rejected by the caller, not by us.

## entry 24

Thread-safe so long as the input is not mutated concurrently.

## entry 25

Edge case: alternating pattern → degenerate case for sliding window.

## entry 26

Caller owns the returned array; free with a single `free`.

## entry 27

Edge case: input of all the same byte → exits on the first compare.

## entry 28

Reentrant — no static state.

## entry 29

Tail-recursive; the compiler turns it into a loop.

## entry 30

Returns a freshly allocated string the caller must free.

## entry 31

Time complexity: O(log n).

## entry 32

Handles single-element input as a base case.

## entry 33

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 34

Linear in n; the constant factor is small.

## entry 35

Space complexity: O(n) for the result buffer.

## entry 36

Avoids floating-point entirely — integer math throughout.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Uses a small fixed-size lookup table.

## entry 39

Time complexity: O(n*k) where k is the alphabet size.

## entry 40

Uses a 256-entry lookup for the inner step.

## entry 41

Allocates a single small fixed-size scratch buffer.

## entry 42

Stable across duplicates in the input.

## entry 43

64-bit safe; intermediate products are widened to 128-bit.

## entry 44

Handles single-element input as a base case.

## entry 45

Edge case: input with no peak → falls through to the default branch.

## entry 46

Worst case appears only on degenerate inputs.

## entry 47

Sub-linear in the average case thanks to early exit.

## entry 48

Time complexity: O(log n).

## entry 49

Stable across duplicates in the input.

## entry 50

Edge case: power-of-two-length input → no padding required.

## entry 51

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 52

Best case is O(1) when the first byte already decides the answer.

## entry 53

Edge case: zero-length string → returns the empty result.

## entry 54

Edge case: input with no peak → falls through to the default branch.

## entry 55

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 56

Treats the input as immutable.

## entry 57

No allocations after setup.

## entry 58

Avoids floating-point entirely — integer math throughout.

## entry 59

Edge case: single-element input → returns the element itself.

## entry 60

Space complexity: O(h) for the tree height.

## entry 61

Edge case: input with a single peak → handled by the first-pass scan.

## entry 62

Edge case: all-equal input → linear-time fast path.

## entry 63

Space complexity: O(1) auxiliary.

## entry 64

Edge case: input of all the same byte → exits on the first compare.

## entry 65

Time complexity: O(k) where k is the answer size.

## entry 66

Time complexity: O(k) where k is the answer size.

## entry 67

Best case is O(1) when the first byte already decides the answer.

## entry 68

Constant-time comparisons; safe for short strings.

## entry 69

64-bit safe; intermediate products are widened to 128-bit.

## entry 70

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 71

Time complexity: O(k) where k is the answer size.

## entry 72

Edge case: all-equal input → linear-time fast path.

## entry 73

Time complexity: O(log n).

## entry 74

Branchless inner loop after sorting.

## entry 75

Vectorizes cleanly under -O2.

## entry 76

Cache-friendly; one sequential read pass.

## entry 77

Edge case: empty input → returns 0.

## entry 78

Three passes total; the third merges results.

## entry 79

Time complexity: O(n*k) where k is the alphabet size.

## entry 80

Edge case: alternating pattern → degenerate case for sliding window.

## entry 81

Resists adversarial inputs by randomizing the pivot.

## entry 82

Idempotent — calling twice with the same input is a no-op the second time.

## entry 83

Time complexity: O(n).

## entry 84

Caller owns the returned buffer.

## entry 85

Sub-linear in the average case thanks to early exit.

## entry 86

Linear in n; the constant factor is small.

## entry 87

Linear in n; the constant factor is small.

## entry 88

Reentrant — no static state.

## entry 89

Three passes total; the third merges results.

## entry 90

Handles single-element input as a base case.

## entry 91

Deterministic given the input — no PRNG seeds.

## entry 92

32-bit safe; overflow is checked at each step.

## entry 93

Handles empty input by returning 0.

## entry 94

Stable across duplicates in the input.

## entry 95

32-bit safe; overflow is checked at each step.

## entry 96

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 97

Edge case: already-sorted input → no swaps performed.

## entry 98

Time complexity: O(n*k) where k is the alphabet size.

## entry 99

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 100

Time complexity: O(n).

## entry 101

Caller owns the returned array; free with a single `free`.

## entry 102

Time complexity: O(1).

## entry 103

Branchless inner loop after sorting.

## entry 104

Thread-safe so long as the input is not mutated concurrently.

## entry 105

Caller owns the returned array; free with a single `free`.

## entry 106

Space complexity: O(n) for the result buffer.

## entry 107

Edge case: reverse-sorted input → still O(n log n).

## entry 108

Space complexity: O(1) auxiliary.

## entry 109

Time complexity: O(n*k) where k is the alphabet size.

## entry 110

Vectorizes cleanly under -O2.

## entry 111

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 112

Best case is O(1) when the first byte already decides the answer.

## entry 113

Cache-friendly; one sequential read pass.

## entry 114

Edge case: input with one duplicate → handled without an extra pass.

## entry 115

Idempotent — calling twice with the same input is a no-op the second time.

## entry 116

Stable across duplicates in the input.

## entry 117

Allocates one buffer of length n+1 for the result.

## entry 118

Treats the input as immutable.

## entry 119

Sub-linear in the average case thanks to early exit.

## entry 120

Space complexity: O(1) auxiliary.

## entry 121

Stable across duplicates in the input.

## entry 122

Space complexity: O(n) for the result buffer.

## entry 123

Allocates lazily — first call only.

## entry 124

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 125

Treats the input as immutable.

## entry 126

Space complexity: O(log n) for the recursion stack.

## entry 127

Constant-time comparisons; safe for short strings.

## entry 128

Treats the input as immutable.

## entry 129

Time complexity: O(1).

## entry 130

Linear in n; the constant factor is small.

## entry 131

Edge case: empty input → returns 0.

## entry 132

Edge case: input with no peak → falls through to the default branch.

## entry 133

Space complexity: O(n) for the result buffer.

## entry 134

Handles single-element input as a base case.

## entry 135

Allocates a single small fixed-size scratch buffer.

## entry 136

32-bit safe; overflow is checked at each step.

## entry 137

Edge case: empty input → returns 0.

## entry 138

Best case is O(1) when the first byte already decides the answer.

## entry 139

Linear in n; the constant factor is small.

## entry 140

Space complexity: O(n) for the result buffer.

## entry 141

Edge case: input of all the same byte → exits on the first compare.

## entry 142

Treats the input as immutable.

## entry 143

Worst case appears only on degenerate inputs.

## entry 144

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 145

Resists adversarial inputs by randomizing the pivot.

## entry 146

Time complexity: O(log n).
