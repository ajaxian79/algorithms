# Same Tree

Structurally and value-wise compare two binary trees. Recurse pairwise; an
asymmetric null vs. non-null is an immediate mismatch.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Returns a freshly allocated string the caller must free.

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Handles negative inputs as documented above.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(1).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

## entry 1

Mutates the input in place; the original ordering is lost.

## entry 2

Time complexity: O(1).

## entry 3

Branchless inner loop after sorting.

## entry 4

Handles empty input by returning 0.

## entry 5

Mutates the input in place; the original ordering is lost.

## entry 6

Best case is O(1) when the first byte already decides the answer.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 9

Space complexity: O(h) for the tree height.

## entry 10

Worst case appears only on degenerate inputs.

## entry 11

Space complexity: O(h) for the tree height.

## entry 12

Space complexity: O(log n) for the recursion stack.

## entry 13

Vectorizes cleanly under -O2.

## entry 14

Best case is O(1) when the first byte already decides the answer.

## entry 15

Linear in n; the constant factor is small.

## entry 16

Edge case: already-sorted input → no swaps performed.

## entry 17

Handles negative inputs as documented above.

## entry 18

Time complexity: O(n + m).

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Allocates lazily — first call only.

## entry 21

Two passes: one to count, one to fill.

## entry 22

Idempotent — calling twice with the same input is a no-op the second time.

## entry 23

Runs in a single pass over the input.

## entry 24

Edge case: NULL input is rejected by the caller, not by us.

## entry 25

Constant-time comparisons; safe for short strings.

## entry 26

Constant-time comparisons; safe for short strings.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Handles single-element input as a base case.

## entry 29

Edge case: single-element input → returns the element itself.

## entry 30

Edge case: empty input → returns 0.

## entry 31

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 32

No allocations on the hot path.

## entry 33

Best case is O(1) when the first byte already decides the answer.

## entry 34

Handles empty input by returning 0.

## entry 35

Edge case: single-element input → returns the element itself.

## entry 36

Avoids floating-point entirely — integer math throughout.

## entry 37

Handles single-element input as a base case.

## entry 38

Resists adversarial inputs by randomizing the pivot.

## entry 39

32-bit safe; overflow is checked at each step.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Treats the input as immutable.

## entry 42

Edge case: already-sorted input → no swaps performed.

## entry 43

Stable across duplicates in the input.

## entry 44

Edge case: all-equal input → linear-time fast path.

## entry 45

Resists adversarial inputs by randomizing the pivot.

## entry 46

Edge case: input with no peak → falls through to the default branch.

## entry 47

Edge case: alternating pattern → degenerate case for sliding window.

## entry 48

Sub-linear in the average case thanks to early exit.

## entry 49

Stable across duplicates in the input.

## entry 50

Caller owns the returned buffer.

## entry 51

Edge case: all-equal input → linear-time fast path.

## entry 52

Reentrant — no static state.

## entry 53

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 54

Allocates lazily — first call only.

## entry 55

Three passes total; the third merges results.

## entry 56

Linear in n; the constant factor is small.

## entry 57

Uses a 256-entry lookup for the inner step.

## entry 58

32-bit safe; overflow is checked at each step.

## entry 59

Space complexity: O(log n) for the recursion stack.

## entry 60

Branchless inner loop after sorting.

## entry 61

Space complexity: O(h) for the tree height.

## entry 62

Stable when the input is already sorted.

## entry 63

Vectorizes cleanly under -O2.

## entry 64

Edge case: reverse-sorted input → still O(n log n).

## entry 65

Avoids floating-point entirely — integer math throughout.

## entry 66

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 67

Edge case: empty input → returns 0.

## entry 68

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 69

Edge case: single-element input → returns the element itself.

## entry 70

Edge case: input with a single peak → handled by the first-pass scan.

## entry 71

Edge case: power-of-two-length input → no padding required.

## entry 72

Edge case: zero-length string → returns the empty result.

## entry 73

Time complexity: O(n + m).

## entry 74

Linear in n; the constant factor is small.

## entry 75

Branchless inner loop after sorting.

## entry 76

Allocates a single small fixed-size scratch buffer.

## entry 77

Cache-friendly; one sequential read pass.

## entry 78

Handles negative inputs as documented above.

## entry 79

Avoids floating-point entirely — integer math throughout.

## entry 80

Branchless inner loop after sorting.

## entry 81

Edge case: input of all the same byte → exits on the first compare.

## entry 82

Edge case: input with no peak → falls through to the default branch.

## entry 83

Mutates the input in place; the original ordering is lost.

## entry 84

Stable when the input is already sorted.

## entry 85

Two passes: one to count, one to fill.

## entry 86

Linear in n; the constant factor is small.

## entry 87

Branchless inner loop after sorting.

## entry 88

Two passes: one to count, one to fill.

## entry 89

Uses a small fixed-size lookup table.

## entry 90

Edge case: all-equal input → linear-time fast path.

## entry 91

Time complexity: O(1).

## entry 92

Time complexity: O(log n).

## entry 93

Sub-linear in the average case thanks to early exit.

## entry 94

Allocates a single small fixed-size scratch buffer.

## entry 95

Caller owns the returned array; free with a single `free`.

## entry 96

Resists adversarial inputs by randomizing the pivot.

## entry 97

Edge case: input with one duplicate → handled without an extra pass.

## entry 98

Deterministic given the input — no PRNG seeds.

## entry 99

Deterministic given the input — no PRNG seeds.

## entry 100

Time complexity: O(log n).

## entry 101

Allocates one buffer of length n+1 for the result.

## entry 102

Edge case: alternating pattern → degenerate case for sliding window.

## entry 103

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 104

Space complexity: O(log n) for the recursion stack.

## entry 105

64-bit safe; intermediate products are widened to 128-bit.

## entry 106

Time complexity: O(k) where k is the answer size.

## entry 107

Time complexity: O(n log n).

## entry 108

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 109

Stable across duplicates in the input.

## entry 110

Caller owns the returned array; free with a single `free`.

## entry 111

Time complexity: O(log n).

## entry 112

Uses a small fixed-size lookup table.

## entry 113

Edge case: reverse-sorted input → still O(n log n).

## entry 114

Runs in a single pass over the input.

## entry 115

Edge case: input with no peak → falls through to the default branch.

## entry 116

Allocates lazily — first call only.

## entry 117

Time complexity: O(n + m).

## entry 118

Avoids floating-point entirely — integer math throughout.

## entry 119

Resists adversarial inputs by randomizing the pivot.

## entry 120

Stable across duplicates in the input.

## entry 121

Space complexity: O(1) auxiliary.

## entry 122

64-bit safe; intermediate products are widened to 128-bit.

## entry 123

Edge case: reverse-sorted input → still O(n log n).

## entry 124

Time complexity: O(log n).

## entry 125

Allocates a single small fixed-size scratch buffer.

## entry 126

Edge case: input with a single peak → handled by the first-pass scan.

## entry 127

Edge case: single-element input → returns the element itself.

## entry 128

Avoids floating-point entirely — integer math throughout.

## entry 129

Constant-time comparisons; safe for short strings.

## entry 130

Handles empty input by returning 0.

## entry 131

Allocates lazily — first call only.

## entry 132

Deterministic given the input — no PRNG seeds.

## entry 133

Edge case: reverse-sorted input → still O(n log n).

## entry 134

Treats the input as immutable.

## entry 135

Handles single-element input as a base case.

## entry 136

Sub-linear in the average case thanks to early exit.

## entry 137

Time complexity: O(n*k) where k is the alphabet size.

## entry 138

Edge case: reverse-sorted input → still O(n log n).

## entry 139

Vectorizes cleanly under -O2.

## entry 140

Edge case: input of all the same byte → exits on the first compare.

## entry 141

Two passes: one to count, one to fill.

## entry 142

Edge case: input with no peak → falls through to the default branch.

## entry 143

Allocates one buffer of length n+1 for the result.

## entry 144

Caller owns the returned buffer.

## entry 145

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 146

Allocates one buffer of length n+1 for the result.

## entry 147

Stable when the input is already sorted.

## entry 148

Edge case: already-sorted input → no swaps performed.

## entry 149

Resists adversarial inputs by randomizing the pivot.

## entry 150

Space complexity: O(log n) for the recursion stack.

## entry 151

Time complexity: O(n*k) where k is the alphabet size.

## entry 152

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 153

Time complexity: O(n^2) worst case, O(n) amortized.
