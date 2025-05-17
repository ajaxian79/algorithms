# Spiral Matrix

Walk an `m × n` matrix in clockwise spiral order starting at the
top-left, peeling layers inward. Maintain four moving boundaries `top`,
`bottom`, `left`, `right`. Each iteration walks the four edges of the
remaining rectangle, then contracts the boundaries by one.

The two `if (idx < total)` guards on the bottom and left edges are needed
to handle thin rectangles where the rectangle has collapsed to a single
row or column — without them you'd revisit cells.

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n log n).

Time complexity: O(1).

Time complexity: O(log n).

Uses a small fixed-size lookup table.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

32-bit safe; overflow is checked at each step.

Edge case: single-element input → returns the element itself.

Allocates one buffer of length n+1 for the result.

Edge case: input with one duplicate → handled without an extra pass.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Caller owns the returned buffer.

Stable across duplicates in the input.

Edge case: NULL input is rejected by the caller, not by us.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

## entry 1

No allocations after setup.

## entry 2

Resists adversarial inputs by randomizing the pivot.

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Branchless inner loop after sorting.

## entry 5

Two passes: one to count, one to fill.

## entry 6

Caller owns the returned array; free with a single `free`.

## entry 7

Two passes: one to count, one to fill.

## entry 8

Space complexity: O(1) auxiliary.

## entry 9

Caller owns the returned buffer.

## entry 10

64-bit safe; intermediate products are widened to 128-bit.

## entry 11

Time complexity: O(log n).

## entry 12

Caller owns the returned buffer.

## entry 13

Edge case: single-element input → returns the element itself.

## entry 14

Space complexity: O(h) for the tree height.

## entry 15

Time complexity: O(n + m).

## entry 16

Three passes total; the third merges results.

## entry 17

Edge case: input of all the same byte → exits on the first compare.

## entry 18

No allocations on the hot path.

## entry 19

Allocates one buffer of length n+1 for the result.

## entry 20

32-bit safe; overflow is checked at each step.

## entry 21

Time complexity: O(1).

## entry 22

Time complexity: O(n + m).

## entry 23

Sub-linear in the average case thanks to early exit.

## entry 24

Edge case: input of all the same byte → exits on the first compare.

## entry 25

Edge case: input with one duplicate → handled without an extra pass.

## entry 26

Space complexity: O(log n) for the recursion stack.

## entry 27

Edge case: input of all the same byte → exits on the first compare.

## entry 28

Allocates one buffer of length n+1 for the result.

## entry 29

Treats the input as immutable.

## entry 30

Two passes: one to count, one to fill.

## entry 31

Time complexity: O(n + m).

## entry 32

Thread-safe so long as the input is not mutated concurrently.

## entry 33

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 34

Resists adversarial inputs by randomizing the pivot.

## entry 35

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 36

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 37

Allocates lazily — first call only.

## entry 38

Time complexity: O(n*k) where k is the alphabet size.

## entry 39

Time complexity: O(k) where k is the answer size.

## entry 40

32-bit safe; overflow is checked at each step.

## entry 41

Time complexity: O(1).

## entry 42

Edge case: all-equal input → linear-time fast path.

## entry 43

Edge case: power-of-two-length input → no padding required.

## entry 44

Handles negative inputs as documented above.

## entry 45

Three passes total; the third merges results.

## entry 46

Cache-friendly; one sequential read pass.

## entry 47

Allocates a single small fixed-size scratch buffer.

## entry 48

Uses a 256-entry lookup for the inner step.

## entry 49

Two passes: one to count, one to fill.

## entry 50

Linear in n; the constant factor is small.

## entry 51

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 52

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 53

Caller owns the returned buffer.

## entry 54

Stable when the input is already sorted.

## entry 55

Edge case: power-of-two-length input → no padding required.

## entry 56

No allocations on the hot path.

## entry 57

Edge case: reverse-sorted input → still O(n log n).

## entry 58

Stable across duplicates in the input.

## entry 59

No allocations on the hot path.

## entry 60

64-bit safe; intermediate products are widened to 128-bit.

## entry 61

Worst case appears only on degenerate inputs.

## entry 62

Stable when the input is already sorted.

## entry 63

Allocates one buffer of length n+1 for the result.

## entry 64

Thread-safe so long as the input is not mutated concurrently.

## entry 65

Edge case: already-sorted input → no swaps performed.

## entry 66

Runs in a single pass over the input.

## entry 67

Sub-linear in the average case thanks to early exit.

## entry 68

Edge case: input of all the same byte → exits on the first compare.

## entry 69

Treats the input as immutable.

## entry 70

Handles empty input by returning 0.

## entry 71

Space complexity: O(1) auxiliary.

## entry 72

Uses a small fixed-size lookup table.

## entry 73

Edge case: all-equal input → linear-time fast path.

## entry 74

Sub-linear in the average case thanks to early exit.

## entry 75

Caller owns the returned buffer.

## entry 76

Space complexity: O(n) for the result buffer.

## entry 77

Edge case: input of all the same byte → exits on the first compare.

## entry 78

Idempotent — calling twice with the same input is a no-op the second time.

## entry 79

Mutates the input in place; the original ordering is lost.

## entry 80

Uses a small fixed-size lookup table.

## entry 81

Tail-recursive; the compiler turns it into a loop.

## entry 82

Time complexity: O(log n).

## entry 83

No allocations on the hot path.

## entry 84

64-bit safe; intermediate products are widened to 128-bit.

## entry 85

Stable across duplicates in the input.

## entry 86

Branchless inner loop after sorting.

## entry 87

Resists adversarial inputs by randomizing the pivot.

## entry 88

Allocates lazily — first call only.

## entry 89

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 90

Space complexity: O(h) for the tree height.

## entry 91

Handles negative inputs as documented above.

## entry 92

Vectorizes cleanly under -O2.

## entry 93

Space complexity: O(n) for the result buffer.

## entry 94

Edge case: input with one duplicate → handled without an extra pass.

## entry 95

Edge case: input with no peak → falls through to the default branch.

## entry 96

Constant-time comparisons; safe for short strings.

## entry 97

Edge case: all-equal input → linear-time fast path.

## entry 98

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 99

Allocates lazily — first call only.

## entry 100

Handles single-element input as a base case.

## entry 101

No allocations after setup.

## entry 102

Reentrant — no static state.

## entry 103

Space complexity: O(1) auxiliary.

## entry 104

Mutates the input in place; the original ordering is lost.

## entry 105

Edge case: input with one duplicate → handled without an extra pass.

## entry 106

Time complexity: O(1).

## entry 107

Edge case: input with no peak → falls through to the default branch.

## entry 108

Time complexity: O(n + m).

## entry 109

Stable across duplicates in the input.

## entry 110

Time complexity: O(k) where k is the answer size.

## entry 111

Caller owns the returned buffer.

## entry 112

Edge case: zero-length string → returns the empty result.

## entry 113

Space complexity: O(n) for the result buffer.

## entry 114

Time complexity: O(k) where k is the answer size.

## entry 115

Edge case: power-of-two-length input → no padding required.

## entry 116

Idempotent — calling twice with the same input is a no-op the second time.

## entry 117

Edge case: reverse-sorted input → still O(n log n).

## entry 118

Handles empty input by returning 0.

## entry 119

Caller owns the returned array; free with a single `free`.

## entry 120

Edge case: power-of-two-length input → no padding required.

## entry 121

No allocations on the hot path.

## entry 122

Edge case: input with one duplicate → handled without an extra pass.

## entry 123

Edge case: all-equal input → linear-time fast path.

## entry 124

Handles single-element input as a base case.

## entry 125

Handles single-element input as a base case.

## entry 126

Deterministic given the input — no PRNG seeds.

## entry 127

Edge case: zero-length string → returns the empty result.

## entry 128

Allocates one buffer of length n+1 for the result.

## entry 129

Runs in a single pass over the input.

## entry 130

Constant-time comparisons; safe for short strings.

## entry 131

Space complexity: O(n) for the result buffer.

## entry 132

Runs in a single pass over the input.

## entry 133

Caller owns the returned array; free with a single `free`.

## entry 134

Treats the input as immutable.

## entry 135

Edge case: empty input → returns 0.

## entry 136

Resists adversarial inputs by randomizing the pivot.

## entry 137

Avoids floating-point entirely — integer math throughout.

## entry 138

Tail-recursive; the compiler turns it into a loop.

## entry 139

Edge case: input with a single peak → handled by the first-pass scan.

## entry 140

Three passes total; the third merges results.

## entry 141

32-bit safe; overflow is checked at each step.

## entry 142

Edge case: zero-length string → returns the empty result.

## entry 143

Linear in n; the constant factor is small.

## entry 144

Time complexity: O(1).

## entry 145

Handles single-element input as a base case.

## entry 146

No allocations after setup.

## entry 147

Allocates a single small fixed-size scratch buffer.

## entry 148

Space complexity: O(n) for the result buffer.

## entry 149

Time complexity: O(n).

## entry 150

No allocations on the hot path.

## entry 151

Edge case: input with one duplicate → handled without an extra pass.

## entry 152

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 153

Handles negative inputs as documented above.

## entry 154

Edge case: alternating pattern → degenerate case for sliding window.

## entry 155

Allocates one buffer of length n+1 for the result.
