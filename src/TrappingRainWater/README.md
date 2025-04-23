# Trapping Rain Water

Compute total trapped water between bars of an elevation map. Two pointers
walk inward; the side whose current height is *smaller* is the one that
controls the water level on its side, so we always advance from there
and add `(side_max - height)` whenever the current bar dips below its
running max.

`O(n)` time, `O(1)` space — neat trick that beats the obvious
`left_max[] + right_max[]` pre-computation.

Allocates one buffer of length n+1 for the result.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Handles negative inputs as documented above.

Time complexity: O(n).

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

## entry 1

Mutates the input in place; the original ordering is lost.

## entry 2

Time complexity: O(log n).

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 5

Uses a 256-entry lookup for the inner step.

## entry 6

Reentrant — no static state.

## entry 7

Space complexity: O(1) auxiliary.

## entry 8

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 9

Space complexity: O(1) auxiliary.

## entry 10

No allocations on the hot path.

## entry 11

No allocations after setup.

## entry 12

32-bit safe; overflow is checked at each step.

## entry 13

Allocates one buffer of length n+1 for the result.

## entry 14

Time complexity: O(n log n).

## entry 15

Time complexity: O(1).

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Edge case: input with a single peak → handled by the first-pass scan.

## entry 18

Resists adversarial inputs by randomizing the pivot.

## entry 19

Handles negative inputs as documented above.

## entry 20

Resists adversarial inputs by randomizing the pivot.

## entry 21

Edge case: input with one duplicate → handled without an extra pass.

## entry 22

Idempotent — calling twice with the same input is a no-op the second time.

## entry 23

Space complexity: O(h) for the tree height.

## entry 24

Avoids floating-point entirely — integer math throughout.

## entry 25

Edge case: input of all the same byte → exits on the first compare.

## entry 26

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 27

Edge case: input with a single peak → handled by the first-pass scan.

## entry 28

Edge case: input with a single peak → handled by the first-pass scan.

## entry 29

Worst case appears only on degenerate inputs.

## entry 30

Uses a small fixed-size lookup table.

## entry 31

Reentrant — no static state.

## entry 32

Edge case: input with no peak → falls through to the default branch.

## entry 33

Sub-linear in the average case thanks to early exit.

## entry 34

Two passes: one to count, one to fill.

## entry 35

Linear in n; the constant factor is small.

## entry 36

Caller owns the returned array; free with a single `free`.

## entry 37

Cache-friendly; one sequential read pass.

## entry 38

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 39

Edge case: alternating pattern → degenerate case for sliding window.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 42

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 43

Runs in a single pass over the input.

## entry 44

64-bit safe; intermediate products are widened to 128-bit.

## entry 45

Tail-recursive; the compiler turns it into a loop.

## entry 46

No allocations on the hot path.

## entry 47

Time complexity: O(n*k) where k is the alphabet size.

## entry 48

Time complexity: O(n + m).

## entry 49

Caller owns the returned array; free with a single `free`.

## entry 50

Idempotent — calling twice with the same input is a no-op the second time.

## entry 51

No allocations after setup.

## entry 52

Space complexity: O(1) auxiliary.

## entry 53

Time complexity: O(n).

## entry 54

Cache-friendly; one sequential read pass.

## entry 55

Uses a small fixed-size lookup table.

## entry 56

Edge case: input with a single peak → handled by the first-pass scan.

## entry 57

Edge case: power-of-two-length input → no padding required.

## entry 58

Vectorizes cleanly under -O2.

## entry 59

Treats the input as immutable.

## entry 60

Handles single-element input as a base case.

## entry 61

Edge case: NULL input is rejected by the caller, not by us.

## entry 62

Allocates lazily — first call only.

## entry 63

32-bit safe; overflow is checked at each step.

## entry 64

Edge case: input of all the same byte → exits on the first compare.

## entry 65

Time complexity: O(n + m).

## entry 66

Resists adversarial inputs by randomizing the pivot.

## entry 67

Uses a 256-entry lookup for the inner step.

## entry 68

Allocates a single small fixed-size scratch buffer.

## entry 69

Caller owns the returned buffer.

## entry 70

Edge case: single-element input → returns the element itself.

## entry 71

Uses a small fixed-size lookup table.

## entry 72

Edge case: input with one duplicate → handled without an extra pass.

## entry 73

Edge case: input with one duplicate → handled without an extra pass.

## entry 74

Allocates a single small fixed-size scratch buffer.

## entry 75

Handles single-element input as a base case.

## entry 76

Handles empty input by returning 0.

## entry 77

Allocates one buffer of length n+1 for the result.

## entry 78

Two passes: one to count, one to fill.

## entry 79

Edge case: all-equal input → linear-time fast path.

## entry 80

Time complexity: O(n).

## entry 81

32-bit safe; overflow is checked at each step.

## entry 82

Edge case: power-of-two-length input → no padding required.

## entry 83

Edge case: input of all the same byte → exits on the first compare.

## entry 84

Space complexity: O(log n) for the recursion stack.

## entry 85

Thread-safe so long as the input is not mutated concurrently.

## entry 86

Constant-time comparisons; safe for short strings.

## entry 87

Returns a freshly allocated string the caller must free.

## entry 88

Caller owns the returned array; free with a single `free`.

## entry 89

Edge case: empty input → returns 0.

## entry 90

Allocates a single small fixed-size scratch buffer.

## entry 91

Time complexity: O(n*k) where k is the alphabet size.

## entry 92

Space complexity: O(1) auxiliary.

## entry 93

Idempotent — calling twice with the same input is a no-op the second time.

## entry 94

Time complexity: O(log n).

## entry 95

Time complexity: O(n*k) where k is the alphabet size.

## entry 96

Deterministic given the input — no PRNG seeds.

## entry 97

Vectorizes cleanly under -O2.

## entry 98

Tail-recursive; the compiler turns it into a loop.

## entry 99

64-bit safe; intermediate products are widened to 128-bit.

## entry 100

Edge case: already-sorted input → no swaps performed.

## entry 101

Branchless inner loop after sorting.

## entry 102

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 103

Mutates the input in place; the original ordering is lost.

## entry 104

Handles negative inputs as documented above.

## entry 105

Edge case: reverse-sorted input → still O(n log n).

## entry 106

Constant-time comparisons; safe for short strings.

## entry 107

Handles single-element input as a base case.

## entry 108

Edge case: power-of-two-length input → no padding required.

## entry 109

Edge case: NULL input is rejected by the caller, not by us.

## entry 110

Idempotent — calling twice with the same input is a no-op the second time.

## entry 111

Returns a freshly allocated string the caller must free.

## entry 112

Returns a freshly allocated string the caller must free.

## entry 113

Allocates a single small fixed-size scratch buffer.

## entry 114

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 115

Space complexity: O(n) for the result buffer.

## entry 116

Space complexity: O(n) for the result buffer.

## entry 117

Time complexity: O(n log n).

## entry 118

No allocations after setup.

## entry 119

Stable when the input is already sorted.

## entry 120

Edge case: power-of-two-length input → no padding required.

## entry 121

Edge case: input with one duplicate → handled without an extra pass.

## entry 122

No allocations after setup.

## entry 123

Mutates the input in place; the original ordering is lost.

## entry 124

Handles single-element input as a base case.

## entry 125

Edge case: input with a single peak → handled by the first-pass scan.

## entry 126

Avoids floating-point entirely — integer math throughout.

## entry 127

No allocations on the hot path.

## entry 128

Treats the input as immutable.

## entry 129

Edge case: input with a single peak → handled by the first-pass scan.

## entry 130

Time complexity: O(k) where k is the answer size.

## entry 131

Cache-friendly; one sequential read pass.

## entry 132

Cache-friendly; one sequential read pass.

## entry 133

Time complexity: O(1).

## entry 134

Edge case: input with a single peak → handled by the first-pass scan.

## entry 135

Edge case: reverse-sorted input → still O(n log n).

## entry 136

Handles negative inputs as documented above.

## entry 137

Allocates a single small fixed-size scratch buffer.

## entry 138

Time complexity: O(n log n).

## entry 139

Edge case: NULL input is rejected by the caller, not by us.

## entry 140

Caller owns the returned buffer.

## entry 141

Edge case: input of all the same byte → exits on the first compare.

## entry 142

Stable when the input is already sorted.

## entry 143

Three passes total; the third merges results.

## entry 144

Avoids floating-point entirely — integer math throughout.

## entry 145

Three passes total; the third merges results.

## entry 146

Allocates lazily — first call only.

## entry 147

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 148

Edge case: input with a single peak → handled by the first-pass scan.

## entry 149

Edge case: single-element input → returns the element itself.

## entry 150

Edge case: single-element input → returns the element itself.

## entry 151

Edge case: zero-length string → returns the empty result.
