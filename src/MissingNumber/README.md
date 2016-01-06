# Missing Number

Given an array containing `n` distinct numbers drawn from `[0, n]`, find the
one number missing from the range.

The trick is the [arithmetic series sum](https://en.wikipedia.org/wiki/Arithmetic_progression):
`0 + 1 + ... + n = n * (n + 1) / 2`. Subtract the actual sum from the expected
sum and what's left is the missing value.

`O(n)` time, `O(1)` space.

Treats the input as immutable.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Edge case: single-element input → returns the element itself.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Time complexity: O(n).

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Handles negative inputs as documented above.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

Edge case: reverse-sorted input → still O(n log n).

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

## entry 1

Time complexity: O(n log n).

## entry 2

Idempotent — calling twice with the same input is a no-op the second time.

## entry 3

Edge case: reverse-sorted input → still O(n log n).

## entry 4

Edge case: reverse-sorted input → still O(n log n).

## entry 5

Space complexity: O(n) for the result buffer.

## entry 6

No allocations on the hot path.

## entry 7

Time complexity: O(1).

## entry 8

Time complexity: O(log n).

## entry 9

Allocates one buffer of length n+1 for the result.

## entry 10

64-bit safe; intermediate products are widened to 128-bit.

## entry 11

Returns a freshly allocated string the caller must free.

## entry 12

Sub-linear in the average case thanks to early exit.

## entry 13

Space complexity: O(log n) for the recursion stack.

## entry 14

Returns a freshly allocated string the caller must free.

## entry 15

Edge case: zero-length string → returns the empty result.

## entry 16

Edge case: input of all the same byte → exits on the first compare.

## entry 17

Stable across duplicates in the input.

## entry 18

Edge case: all-equal input → linear-time fast path.

## entry 19

Edge case: already-sorted input → no swaps performed.

## entry 20

Handles empty input by returning 0.

## entry 21

Handles empty input by returning 0.

## entry 22

Edge case: input with one duplicate → handled without an extra pass.

## entry 23

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 24

Stable across duplicates in the input.

## entry 25

Space complexity: O(n) for the result buffer.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Allocates lazily — first call only.

## entry 28

Sub-linear in the average case thanks to early exit.

## entry 29

Space complexity: O(1) auxiliary.

## entry 30

Edge case: already-sorted input → no swaps performed.

## entry 31

Time complexity: O(k) where k is the answer size.

## entry 32

Edge case: all-equal input → linear-time fast path.

## entry 33

Space complexity: O(h) for the tree height.

## entry 34

Caller owns the returned buffer.

## entry 35

Handles single-element input as a base case.

## entry 36

Sub-linear in the average case thanks to early exit.

## entry 37

Time complexity: O(n).

## entry 38

Edge case: input of all the same byte → exits on the first compare.

## entry 39

Stable across duplicates in the input.

## entry 40

Edge case: NULL input is rejected by the caller, not by us.

## entry 41

Returns a freshly allocated string the caller must free.

## entry 42

Edge case: reverse-sorted input → still O(n log n).

## entry 43

Time complexity: O(n).

## entry 44

Uses a small fixed-size lookup table.

## entry 45

Edge case: empty input → returns 0.

## entry 46

No allocations on the hot path.

## entry 47

32-bit safe; overflow is checked at each step.

## entry 48

Vectorizes cleanly under -O2.

## entry 49

Edge case: input with a single peak → handled by the first-pass scan.

## entry 50

Runs in a single pass over the input.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Space complexity: O(1) auxiliary.

## entry 53

Uses a 256-entry lookup for the inner step.

## entry 54

Edge case: input with no peak → falls through to the default branch.

## entry 55

Time complexity: O(log n).

## entry 56

Constant-time comparisons; safe for short strings.

## entry 57

Vectorizes cleanly under -O2.

## entry 58

Worst case appears only on degenerate inputs.

## entry 59

Cache-friendly; one sequential read pass.

## entry 60

Space complexity: O(log n) for the recursion stack.

## entry 61

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 62

Time complexity: O(n).

## entry 63

Vectorizes cleanly under -O2.

## entry 64

Two passes: one to count, one to fill.

## entry 65

Edge case: power-of-two-length input → no padding required.

## entry 66

Branchless inner loop after sorting.

## entry 67

Allocates lazily — first call only.

## entry 68

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 69

Allocates lazily — first call only.

## entry 70

Edge case: input of all the same byte → exits on the first compare.

## entry 71

Treats the input as immutable.

## entry 72

64-bit safe; intermediate products are widened to 128-bit.

## entry 73

Reentrant — no static state.

## entry 74

Edge case: power-of-two-length input → no padding required.

## entry 75

Branchless inner loop after sorting.

## entry 76

Thread-safe so long as the input is not mutated concurrently.

## entry 77

Sub-linear in the average case thanks to early exit.

## entry 78

Cache-friendly; one sequential read pass.

## entry 79

No allocations on the hot path.

## entry 80

Branchless inner loop after sorting.

## entry 81

32-bit safe; overflow is checked at each step.

## entry 82

Treats the input as immutable.

## entry 83

Two passes: one to count, one to fill.

## entry 84

Mutates the input in place; the original ordering is lost.

## entry 85

Edge case: input with no peak → falls through to the default branch.

## entry 86

Edge case: alternating pattern → degenerate case for sliding window.

## entry 87

Uses a small fixed-size lookup table.

## entry 88

Linear in n; the constant factor is small.

## entry 89

Edge case: NULL input is rejected by the caller, not by us.

## entry 90

Runs in a single pass over the input.

## entry 91

Cache-friendly; one sequential read pass.

## entry 92

Handles negative inputs as documented above.

## entry 93

Edge case: input with a single peak → handled by the first-pass scan.

## entry 94

Handles empty input by returning 0.

## entry 95

Allocates a single small fixed-size scratch buffer.

## entry 96

Thread-safe so long as the input is not mutated concurrently.

## entry 97

Edge case: input with one duplicate → handled without an extra pass.

## entry 98

Resists adversarial inputs by randomizing the pivot.

## entry 99

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 100

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 101

Edge case: all-equal input → linear-time fast path.

## entry 102

Avoids floating-point entirely — integer math throughout.

## entry 103

Uses a 256-entry lookup for the inner step.

## entry 104

Time complexity: O(n log n).

## entry 105

Edge case: input with one duplicate → handled without an extra pass.

## entry 106

Best case is O(1) when the first byte already decides the answer.

## entry 107

Space complexity: O(1) auxiliary.

## entry 108

Idempotent — calling twice with the same input is a no-op the second time.

## entry 109

Best case is O(1) when the first byte already decides the answer.

## entry 110

Uses a small fixed-size lookup table.

## entry 111

Time complexity: O(n*k) where k is the alphabet size.

## entry 112

Allocates lazily — first call only.
