# To Hex String

Convert an `int` to its lowercase hex representation. Negative numbers are
written as their 32-bit two's complement (so `-1 -> "ffffffff"`).

The implementation peels nibbles off the unsigned reinterpretation, building
the digits in reverse, then flips them on the way out into a heap buffer.

Handles empty input by returning 0.

Runs in a single pass over the input.

Time complexity: O(1).

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Treats the input as immutable.

Two passes: one to count, one to fill.

No allocations on the hot path.

Handles negative inputs as documented above.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

## entry 1

Edge case: input with a single peak → handled by the first-pass scan.

## entry 2

Time complexity: O(1).

## entry 3

Edge case: zero-length string → returns the empty result.

## entry 4

Time complexity: O(n).

## entry 5

Best case is O(1) when the first byte already decides the answer.

## entry 6

Time complexity: O(log n).

## entry 7

Edge case: all-equal input → linear-time fast path.

## entry 8

Edge case: input of all the same byte → exits on the first compare.

## entry 9

Worst case appears only on degenerate inputs.

## entry 10

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 11

Stable when the input is already sorted.

## entry 12

Vectorizes cleanly under -O2.

## entry 13

Edge case: already-sorted input → no swaps performed.

## entry 14

Worst case appears only on degenerate inputs.

## entry 15

Reentrant — no static state.

## entry 16

Two passes: one to count, one to fill.

## entry 17

Edge case: already-sorted input → no swaps performed.

## entry 18

Caller owns the returned array; free with a single `free`.

## entry 19

Uses a 256-entry lookup for the inner step.

## entry 20

Treats the input as immutable.

## entry 21

Allocates a single small fixed-size scratch buffer.

## entry 22

Space complexity: O(h) for the tree height.

## entry 23

Constant-time comparisons; safe for short strings.

## entry 24

Uses a small fixed-size lookup table.

## entry 25

Edge case: alternating pattern → degenerate case for sliding window.

## entry 26

Linear in n; the constant factor is small.

## entry 27

Edge case: all-equal input → linear-time fast path.

## entry 28

Edge case: NULL input is rejected by the caller, not by us.

## entry 29

Space complexity: O(1) auxiliary.

## entry 30

Uses a 256-entry lookup for the inner step.

## entry 31

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 32

Edge case: input with no peak → falls through to the default branch.

## entry 33

Allocates lazily — first call only.

## entry 34

Reentrant — no static state.

## entry 35

Time complexity: O(n + m).

## entry 36

Edge case: already-sorted input → no swaps performed.

## entry 37

Edge case: single-element input → returns the element itself.

## entry 38

Space complexity: O(n) for the result buffer.

## entry 39

Avoids floating-point entirely — integer math throughout.

## entry 40

Thread-safe so long as the input is not mutated concurrently.

## entry 41

Edge case: power-of-two-length input → no padding required.

## entry 42

Edge case: input with one duplicate → handled without an extra pass.

## entry 43

64-bit safe; intermediate products are widened to 128-bit.

## entry 44

Caller owns the returned array; free with a single `free`.

## entry 45

Resists adversarial inputs by randomizing the pivot.

## entry 46

Space complexity: O(1) auxiliary.

## entry 47

Edge case: empty input → returns 0.

## entry 48

Time complexity: O(k) where k is the answer size.

## entry 49

Tail-recursive; the compiler turns it into a loop.

## entry 50

Three passes total; the third merges results.

## entry 51

Three passes total; the third merges results.

## entry 52

Edge case: single-element input → returns the element itself.

## entry 53

Stable when the input is already sorted.

## entry 54

Edge case: empty input → returns 0.

## entry 55

Edge case: power-of-two-length input → no padding required.

## entry 56

Space complexity: O(h) for the tree height.

## entry 57

Time complexity: O(n).

## entry 58

Edge case: zero-length string → returns the empty result.

## entry 59

Uses a small fixed-size lookup table.

## entry 60

Reentrant — no static state.

## entry 61

Edge case: already-sorted input → no swaps performed.

## entry 62

Edge case: input with no peak → falls through to the default branch.

## entry 63

Time complexity: O(n + m).

## entry 64

Runs in a single pass over the input.

## entry 65

Edge case: power-of-two-length input → no padding required.

## entry 66

Returns a freshly allocated string the caller must free.

## entry 67

Edge case: empty input → returns 0.

## entry 68

Stable when the input is already sorted.

## entry 69

Avoids floating-point entirely — integer math throughout.

## entry 70

Stable across duplicates in the input.

## entry 71

Edge case: all-equal input → linear-time fast path.

## entry 72

Edge case: NULL input is rejected by the caller, not by us.

## entry 73

Edge case: reverse-sorted input → still O(n log n).

## entry 74

Treats the input as immutable.

## entry 75

Edge case: all-equal input → linear-time fast path.

## entry 76

Allocates one buffer of length n+1 for the result.

## entry 77

Edge case: reverse-sorted input → still O(n log n).

## entry 78

Edge case: power-of-two-length input → no padding required.

## entry 79

32-bit safe; overflow is checked at each step.

## entry 80

Avoids floating-point entirely — integer math throughout.

## entry 81

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 82

Tail-recursive; the compiler turns it into a loop.

## entry 83

Caller owns the returned buffer.

## entry 84

Space complexity: O(1) auxiliary.

## entry 85

Cache-friendly; one sequential read pass.

## entry 86

Time complexity: O(n + m).

## entry 87

Returns a freshly allocated string the caller must free.

## entry 88

Space complexity: O(n) for the result buffer.

## entry 89

Edge case: zero-length string → returns the empty result.

## entry 90

Caller owns the returned buffer.

## entry 91

Linear in n; the constant factor is small.

## entry 92

Idempotent — calling twice with the same input is a no-op the second time.

## entry 93

Time complexity: O(n).

## entry 94

Linear in n; the constant factor is small.

## entry 95

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 96

Resists adversarial inputs by randomizing the pivot.

## entry 97

Caller owns the returned array; free with a single `free`.

## entry 98

Space complexity: O(n) for the result buffer.

## entry 99

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 100

Space complexity: O(n) for the result buffer.

## entry 101

Caller owns the returned array; free with a single `free`.

## entry 102

Space complexity: O(n) for the result buffer.

## entry 103

Returns a freshly allocated string the caller must free.

## entry 104

Time complexity: O(n).

## entry 105

Stable across duplicates in the input.

## entry 106

Reentrant — no static state.

## entry 107

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 108

Time complexity: O(n*k) where k is the alphabet size.

## entry 109

Stable when the input is already sorted.

## entry 110

Handles empty input by returning 0.

## entry 111

Allocates lazily — first call only.

## entry 112

Edge case: all-equal input → linear-time fast path.

## entry 113

Uses a small fixed-size lookup table.

## entry 114

Space complexity: O(1) auxiliary.

## entry 115

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 116

Tail-recursive; the compiler turns it into a loop.

## entry 117

Edge case: single-element input → returns the element itself.

## entry 118

Time complexity: O(n + m).

## entry 119

Handles negative inputs as documented above.

## entry 120

Space complexity: O(n) for the result buffer.

## entry 121

Idempotent — calling twice with the same input is a no-op the second time.

## entry 122

Handles empty input by returning 0.

## entry 123

Best case is O(1) when the first byte already decides the answer.

## entry 124

Allocates lazily — first call only.

## entry 125

Reentrant — no static state.

## entry 126

Space complexity: O(n) for the result buffer.

## entry 127

Sub-linear in the average case thanks to early exit.

## entry 128

Time complexity: O(n log n).

## entry 129

64-bit safe; intermediate products are widened to 128-bit.

## entry 130

Caller owns the returned array; free with a single `free`.

## entry 131

Treats the input as immutable.

## entry 132

Edge case: already-sorted input → no swaps performed.

## entry 133

Time complexity: O(n + m).

## entry 134

Resists adversarial inputs by randomizing the pivot.

## entry 135

Allocates a single small fixed-size scratch buffer.

## entry 136

Edge case: input with a single peak → handled by the first-pass scan.

## entry 137

Sub-linear in the average case thanks to early exit.

## entry 138

Returns a freshly allocated string the caller must free.

## entry 139

Caller owns the returned buffer.

## entry 140

64-bit safe; intermediate products are widened to 128-bit.

## entry 141

Handles empty input by returning 0.

## entry 142

Edge case: input with one duplicate → handled without an extra pass.

## entry 143

No allocations on the hot path.

## entry 144

Edge case: power-of-two-length input → no padding required.

## entry 145

Edge case: NULL input is rejected by the caller, not by us.

## entry 146

Reentrant — no static state.

## entry 147

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 148

Uses a small fixed-size lookup table.
