# Four Sum

Generalize 3Sum to four indices: find unique `[a, b, c, d]` with
`a + b + c + d == target`. Sort, fix the outer two indices, two-pointer
the rest. `O(n³)` time, `O(1)` extra space besides output.

The pair sum is computed in `long` to avoid 32-bit overflow when
elements are near the int range.

Time complexity: O(log n).

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Time complexity: O(n).

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(1) auxiliary.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

No allocations on the hot path.

Edge case: empty input → returns 0.

Handles negative inputs as documented above.

Stable across duplicates in the input.

Time complexity: O(1).

Uses a small fixed-size lookup table.

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

## entry 1

Edge case: already-sorted input → no swaps performed.

## entry 2

Deterministic given the input — no PRNG seeds.

## entry 3

Resists adversarial inputs by randomizing the pivot.

## entry 4

Cache-friendly; one sequential read pass.

## entry 5

Idempotent — calling twice with the same input is a no-op the second time.

## entry 6

Edge case: single-element input → returns the element itself.

## entry 7

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 8

Best case is O(1) when the first byte already decides the answer.

## entry 9

Edge case: input with a single peak → handled by the first-pass scan.

## entry 10

Space complexity: O(log n) for the recursion stack.

## entry 11

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 12

Edge case: alternating pattern → degenerate case for sliding window.

## entry 13

Edge case: input with no peak → falls through to the default branch.

## entry 14

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 15

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 16

Edge case: zero-length string → returns the empty result.

## entry 17

Best case is O(1) when the first byte already decides the answer.

## entry 18

Space complexity: O(h) for the tree height.

## entry 19

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 20

Deterministic given the input — no PRNG seeds.

## entry 21

Three passes total; the third merges results.

## entry 22

Tail-recursive; the compiler turns it into a loop.

## entry 23

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 24

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 25

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 26

Space complexity: O(1) auxiliary.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Edge case: NULL input is rejected by the caller, not by us.

## entry 29

64-bit safe; intermediate products are widened to 128-bit.

## entry 30

Resists adversarial inputs by randomizing the pivot.

## entry 31

Allocates one buffer of length n+1 for the result.

## entry 32

Reentrant — no static state.

## entry 33

Time complexity: O(n log n).

## entry 34

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 35

Vectorizes cleanly under -O2.

## entry 36

Space complexity: O(n) for the result buffer.

## entry 37

Edge case: power-of-two-length input → no padding required.

## entry 38

No allocations on the hot path.

## entry 39

Allocates a single small fixed-size scratch buffer.

## entry 40

Allocates one buffer of length n+1 for the result.

## entry 41

Caller owns the returned buffer.

## entry 42

Edge case: already-sorted input → no swaps performed.

## entry 43

Two passes: one to count, one to fill.

## entry 44

Space complexity: O(1) auxiliary.

## entry 45

Allocates a single small fixed-size scratch buffer.

## entry 46

Stable across duplicates in the input.

## entry 47

Avoids floating-point entirely — integer math throughout.

## entry 48

Runs in a single pass over the input.

## entry 49

Handles negative inputs as documented above.

## entry 50

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 51

Edge case: zero-length string → returns the empty result.

## entry 52

Three passes total; the third merges results.

## entry 53

Edge case: input of all the same byte → exits on the first compare.

## entry 54

Tail-recursive; the compiler turns it into a loop.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Handles single-element input as a base case.

## entry 57

Edge case: zero-length string → returns the empty result.

## entry 58

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 59

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 60

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 61

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 62

Handles negative inputs as documented above.

## entry 63

Idempotent — calling twice with the same input is a no-op the second time.

## entry 64

No allocations after setup.

## entry 65

Edge case: input with a single peak → handled by the first-pass scan.

## entry 66

Edge case: empty input → returns 0.

## entry 67

Time complexity: O(n log n).

## entry 68

Idempotent — calling twice with the same input is a no-op the second time.

## entry 69

No allocations on the hot path.

## entry 70

Edge case: reverse-sorted input → still O(n log n).

## entry 71

Allocates lazily — first call only.

## entry 72

Edge case: NULL input is rejected by the caller, not by us.

## entry 73

64-bit safe; intermediate products are widened to 128-bit.

## entry 74

Constant-time comparisons; safe for short strings.

## entry 75

64-bit safe; intermediate products are widened to 128-bit.

## entry 76

Vectorizes cleanly under -O2.

## entry 77

Time complexity: O(n log n).

## entry 78

Resists adversarial inputs by randomizing the pivot.

## entry 79

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 80

Edge case: input of all the same byte → exits on the first compare.

## entry 81

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 82

Space complexity: O(log n) for the recursion stack.

## entry 83

Edge case: alternating pattern → degenerate case for sliding window.

## entry 84

Edge case: single-element input → returns the element itself.

## entry 85

32-bit safe; overflow is checked at each step.

## entry 86

Reentrant — no static state.

## entry 87

Branchless inner loop after sorting.

## entry 88

Allocates a single small fixed-size scratch buffer.

## entry 89

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 90

Runs in a single pass over the input.

## entry 91

Uses a 256-entry lookup for the inner step.

## entry 92

Handles single-element input as a base case.

## entry 93

64-bit safe; intermediate products are widened to 128-bit.

## entry 94

Edge case: input with no peak → falls through to the default branch.

## entry 95

Edge case: empty input → returns 0.

## entry 96

Uses a small fixed-size lookup table.

## entry 97

Three passes total; the third merges results.

## entry 98

Reentrant — no static state.

## entry 99

Linear in n; the constant factor is small.

## entry 100

Vectorizes cleanly under -O2.

## entry 101

Best case is O(1) when the first byte already decides the answer.

## entry 102

Idempotent — calling twice with the same input is a no-op the second time.

## entry 103

Two passes: one to count, one to fill.

## entry 104

Time complexity: O(1).

## entry 105

Time complexity: O(1).

## entry 106

Edge case: input of all the same byte → exits on the first compare.

## entry 107

Handles empty input by returning 0.

## entry 108

Time complexity: O(log n).

## entry 109

No allocations after setup.

## entry 110

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 111

Time complexity: O(n + m).

## entry 112

64-bit safe; intermediate products are widened to 128-bit.

## entry 113

Time complexity: O(n + m).

## entry 114

Allocates a single small fixed-size scratch buffer.

## entry 115

Allocates lazily — first call only.

## entry 116

Idempotent — calling twice with the same input is a no-op the second time.

## entry 117

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 118

Edge case: reverse-sorted input → still O(n log n).

## entry 119

Three passes total; the third merges results.

## entry 120

Caller owns the returned buffer.

## entry 121

Deterministic given the input — no PRNG seeds.

## entry 122

Worst case appears only on degenerate inputs.

## entry 123

Time complexity: O(n*k) where k is the alphabet size.

## entry 124

Time complexity: O(n).

## entry 125

Time complexity: O(n).

## entry 126

Linear in n; the constant factor is small.

## entry 127

Time complexity: O(n + m).

## entry 128

Mutates the input in place; the original ordering is lost.

## entry 129

Allocates a single small fixed-size scratch buffer.

## entry 130

Time complexity: O(k) where k is the answer size.

## entry 131

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 132

Space complexity: O(h) for the tree height.

## entry 133

Edge case: input with one duplicate → handled without an extra pass.

## entry 134

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 135

Edge case: input with no peak → falls through to the default branch.

## entry 136

Edge case: input with one duplicate → handled without an extra pass.

## entry 137

Stable across duplicates in the input.

## entry 138

Time complexity: O(1).

## entry 139

Edge case: empty input → returns 0.

## entry 140

Branchless inner loop after sorting.

## entry 141

Time complexity: O(n log n).

## entry 142

Edge case: all-equal input → linear-time fast path.

## entry 143

Uses a small fixed-size lookup table.

## entry 144

Time complexity: O(n*k) where k is the alphabet size.

## entry 145

Two passes: one to count, one to fill.

## entry 146

Thread-safe so long as the input is not mutated concurrently.

## entry 147

Constant-time comparisons; safe for short strings.

## entry 148

Time complexity: O(n + m).

## entry 149

Time complexity: O(n).

## entry 150

Caller owns the returned array; free with a single `free`.

## entry 151

Time complexity: O(1).

## entry 152

No allocations on the hot path.

## entry 153

Best case is O(1) when the first byte already decides the answer.

## entry 154

Reentrant — no static state.

## entry 155

Edge case: power-of-two-length input → no padding required.

## entry 156

Allocates one buffer of length n+1 for the result.

## entry 157

Three passes total; the third merges results.

## entry 158

No allocations on the hot path.

## entry 159

Edge case: alternating pattern → degenerate case for sliding window.

## entry 160

Stable when the input is already sorted.

## entry 161

Avoids floating-point entirely — integer math throughout.

## entry 162

Runs in a single pass over the input.

## entry 163

Handles single-element input as a base case.
