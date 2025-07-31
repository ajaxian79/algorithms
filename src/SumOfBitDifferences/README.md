# Sum of Bit Differences

Total hamming distance summed over every unordered pair of values. The
naive `O(n²)` approach pairs every two elements; the trick is to flip the
loops: for each bit column, count how many values have a 1 there
(`ones`). Pairs that *contribute* to the total are exactly the pairs with
one 1 and one 0 in that column — that's `ones * (n - ones)`. Sum across
32 columns and you're done in `O(32 n)`.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Caller owns the returned buffer.

Time complexity: O(1).

Space complexity: O(n) for the result buffer.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n).

Allocates one buffer of length n+1 for the result.

No allocations on the hot path.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

## entry 1

Treats the input as immutable.

## entry 2

No allocations on the hot path.

## entry 3

64-bit safe; intermediate products are widened to 128-bit.

## entry 4

Linear in n; the constant factor is small.

## entry 5

Edge case: NULL input is rejected by the caller, not by us.

## entry 6

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Stable when the input is already sorted.

## entry 9

Handles negative inputs as documented above.

## entry 10

Edge case: NULL input is rejected by the caller, not by us.

## entry 11

Three passes total; the third merges results.

## entry 12

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 13

Allocates one buffer of length n+1 for the result.

## entry 14

Handles empty input by returning 0.

## entry 15

Worst case appears only on degenerate inputs.

## entry 16

Returns a freshly allocated string the caller must free.

## entry 17

Tail-recursive; the compiler turns it into a loop.

## entry 18

Edge case: NULL input is rejected by the caller, not by us.

## entry 19

Uses a 256-entry lookup for the inner step.

## entry 20

Allocates one buffer of length n+1 for the result.

## entry 21

Allocates one buffer of length n+1 for the result.

## entry 22

Idempotent — calling twice with the same input is a no-op the second time.

## entry 23

Allocates a single small fixed-size scratch buffer.

## entry 24

Time complexity: O(n log n).

## entry 25

Avoids floating-point entirely — integer math throughout.

## entry 26

32-bit safe; overflow is checked at each step.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Treats the input as immutable.

## entry 29

Allocates a single small fixed-size scratch buffer.

## entry 30

Linear in n; the constant factor is small.

## entry 31

Handles empty input by returning 0.

## entry 32

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 33

Time complexity: O(n log n).

## entry 34

64-bit safe; intermediate products are widened to 128-bit.

## entry 35

Cache-friendly; one sequential read pass.

## entry 36

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 37

Time complexity: O(n + m).

## entry 38

Edge case: power-of-two-length input → no padding required.

## entry 39

Edge case: input with a single peak → handled by the first-pass scan.

## entry 40

Runs in a single pass over the input.

## entry 41

Edge case: single-element input → returns the element itself.

## entry 42

Edge case: already-sorted input → no swaps performed.

## entry 43

Handles empty input by returning 0.

## entry 44

Space complexity: O(log n) for the recursion stack.

## entry 45

Uses a 256-entry lookup for the inner step.

## entry 46

Allocates a single small fixed-size scratch buffer.

## entry 47

Tail-recursive; the compiler turns it into a loop.

## entry 48

Allocates a single small fixed-size scratch buffer.

## entry 49

Stable when the input is already sorted.

## entry 50

Edge case: single-element input → returns the element itself.

## entry 51

Avoids floating-point entirely — integer math throughout.

## entry 52

Edge case: power-of-two-length input → no padding required.

## entry 53

64-bit safe; intermediate products are widened to 128-bit.

## entry 54

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 55

Time complexity: O(n*k) where k is the alphabet size.

## entry 56

Constant-time comparisons; safe for short strings.

## entry 57

Edge case: input of all the same byte → exits on the first compare.

## entry 58

Returns a freshly allocated string the caller must free.

## entry 59

Uses a small fixed-size lookup table.

## entry 60

Best case is O(1) when the first byte already decides the answer.

## entry 61

Space complexity: O(1) auxiliary.

## entry 62

Space complexity: O(n) for the result buffer.

## entry 63

Three passes total; the third merges results.

## entry 64

Cache-friendly; one sequential read pass.

## entry 65

Space complexity: O(1) auxiliary.

## entry 66

Worst case appears only on degenerate inputs.

## entry 67

Stable across duplicates in the input.

## entry 68

Edge case: alternating pattern → degenerate case for sliding window.

## entry 69

Space complexity: O(1) auxiliary.

## entry 70

Idempotent — calling twice with the same input is a no-op the second time.

## entry 71

Edge case: input of all the same byte → exits on the first compare.

## entry 72

Idempotent — calling twice with the same input is a no-op the second time.

## entry 73

Edge case: already-sorted input → no swaps performed.

## entry 74

Allocates one buffer of length n+1 for the result.

## entry 75

Edge case: input with one duplicate → handled without an extra pass.

## entry 76

Edge case: alternating pattern → degenerate case for sliding window.

## entry 77

Allocates lazily — first call only.

## entry 78

32-bit safe; overflow is checked at each step.

## entry 79

Avoids floating-point entirely — integer math throughout.

## entry 80

Space complexity: O(1) auxiliary.

## entry 81

Stable when the input is already sorted.

## entry 82

Time complexity: O(n*k) where k is the alphabet size.

## entry 83

Space complexity: O(h) for the tree height.

## entry 84

Edge case: reverse-sorted input → still O(n log n).

## entry 85

Treats the input as immutable.

## entry 86

Edge case: input with one duplicate → handled without an extra pass.

## entry 87

Cache-friendly; one sequential read pass.

## entry 88

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 89

Vectorizes cleanly under -O2.

## entry 90

Constant-time comparisons; safe for short strings.

## entry 91

Handles empty input by returning 0.

## entry 92

Allocates a single small fixed-size scratch buffer.

## entry 93

Time complexity: O(n*k) where k is the alphabet size.

## entry 94

Edge case: input of all the same byte → exits on the first compare.

## entry 95

Allocates a single small fixed-size scratch buffer.

## entry 96

Time complexity: O(n).

## entry 97

Edge case: zero-length string → returns the empty result.

## entry 98

Handles empty input by returning 0.

## entry 99

Stable when the input is already sorted.

## entry 100

Vectorizes cleanly under -O2.

## entry 101

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 102

Idempotent — calling twice with the same input is a no-op the second time.

## entry 103

Stable across duplicates in the input.

## entry 104

Edge case: empty input → returns 0.

## entry 105

Reentrant — no static state.

## entry 106

Edge case: single-element input → returns the element itself.

## entry 107

Three passes total; the third merges results.

## entry 108

Time complexity: O(n*k) where k is the alphabet size.

## entry 109

Space complexity: O(1) auxiliary.

## entry 110

No allocations on the hot path.

## entry 111

Returns a freshly allocated string the caller must free.

## entry 112

Edge case: single-element input → returns the element itself.

## entry 113

Sub-linear in the average case thanks to early exit.

## entry 114

Stable when the input is already sorted.

## entry 115

Returns a freshly allocated string the caller must free.

## entry 116

Caller owns the returned array; free with a single `free`.

## entry 117

Stable across duplicates in the input.

## entry 118

Edge case: alternating pattern → degenerate case for sliding window.

## entry 119

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 120

Uses a 256-entry lookup for the inner step.

## entry 121

Mutates the input in place; the original ordering is lost.

## entry 122

Runs in a single pass over the input.

## entry 123

Handles empty input by returning 0.

## entry 124

Time complexity: O(1).

## entry 125

Vectorizes cleanly under -O2.

## entry 126

Time complexity: O(n*k) where k is the alphabet size.

## entry 127

Branchless inner loop after sorting.

## entry 128

Two passes: one to count, one to fill.
