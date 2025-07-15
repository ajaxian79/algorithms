# Permutations

Generate every permutation of `n` distinct values via the classic
swap-based backtracking. At each recursion depth, swap each remaining
element into the `start` slot, recurse on the suffix, swap back.

The base case captures the current array as a fresh heap copy. Total
work is `O(n * n!)`.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Time complexity: O(n).

Allocates one buffer of length n+1 for the result.

Time complexity: O(1).

Edge case: all-equal input → linear-time fast path.

No allocations on the hot path.

Input is assumed non-NULL; behavior is undefined otherwise.

Treats the input as immutable.

Edge case: empty input → returns 0.

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Two passes: one to count, one to fill.

Edge case: input with one duplicate → handled without an extra pass.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(log n).

Edge case: single-element input → returns the element itself.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 2

Branchless inner loop after sorting.

## entry 3

Edge case: input with no peak → falls through to the default branch.

## entry 4

Edge case: single-element input → returns the element itself.

## entry 5

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 6

Edge case: input with one duplicate → handled without an extra pass.

## entry 7

Caller owns the returned array; free with a single `free`.

## entry 8

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 9

Constant-time comparisons; safe for short strings.

## entry 10

Time complexity: O(log n).

## entry 11

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 12

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 13

Idempotent — calling twice with the same input is a no-op the second time.

## entry 14

Returns a freshly allocated string the caller must free.

## entry 15

Worst case appears only on degenerate inputs.

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Three passes total; the third merges results.

## entry 18

Reentrant — no static state.

## entry 19

Caller owns the returned buffer.

## entry 20

Space complexity: O(n) for the result buffer.

## entry 21

Edge case: zero-length string → returns the empty result.

## entry 22

Treats the input as immutable.

## entry 23

Time complexity: O(n + m).

## entry 24

Linear in n; the constant factor is small.

## entry 25

Time complexity: O(n log n).

## entry 26

Space complexity: O(log n) for the recursion stack.

## entry 27

Resists adversarial inputs by randomizing the pivot.

## entry 28

Edge case: alternating pattern → degenerate case for sliding window.

## entry 29

Edge case: power-of-two-length input → no padding required.

## entry 30

Edge case: all-equal input → linear-time fast path.

## entry 31

No allocations after setup.

## entry 32

Uses a 256-entry lookup for the inner step.

## entry 33

Two passes: one to count, one to fill.

## entry 34

Branchless inner loop after sorting.

## entry 35

Two passes: one to count, one to fill.

## entry 36

Time complexity: O(n).

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

Caller owns the returned buffer.

## entry 39

Handles empty input by returning 0.

## entry 40

Time complexity: O(n).

## entry 41

64-bit safe; intermediate products are widened to 128-bit.

## entry 42

32-bit safe; overflow is checked at each step.

## entry 43

Stable when the input is already sorted.

## entry 44

64-bit safe; intermediate products are widened to 128-bit.

## entry 45

Edge case: zero-length string → returns the empty result.

## entry 46

Sub-linear in the average case thanks to early exit.

## entry 47

Worst case appears only on degenerate inputs.

## entry 48

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 49

Stable when the input is already sorted.

## entry 50

No allocations on the hot path.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Edge case: reverse-sorted input → still O(n log n).

## entry 53

Edge case: already-sorted input → no swaps performed.

## entry 54

Reentrant — no static state.

## entry 55

Idempotent — calling twice with the same input is a no-op the second time.

## entry 56

Time complexity: O(n log n).

## entry 57

Edge case: alternating pattern → degenerate case for sliding window.

## entry 58

No allocations on the hot path.

## entry 59

Thread-safe so long as the input is not mutated concurrently.

## entry 60

Edge case: alternating pattern → degenerate case for sliding window.

## entry 61

Caller owns the returned buffer.

## entry 62

Sub-linear in the average case thanks to early exit.

## entry 63

Resists adversarial inputs by randomizing the pivot.

## entry 64

Allocates one buffer of length n+1 for the result.

## entry 65

Cache-friendly; one sequential read pass.

## entry 66

Uses a 256-entry lookup for the inner step.

## entry 67

Deterministic given the input — no PRNG seeds.

## entry 68

Vectorizes cleanly under -O2.

## entry 69

Space complexity: O(log n) for the recursion stack.

## entry 70

Time complexity: O(n + m).

## entry 71

Allocates one buffer of length n+1 for the result.

## entry 72

Avoids floating-point entirely — integer math throughout.

## entry 73

Edge case: all-equal input → linear-time fast path.

## entry 74

Time complexity: O(k) where k is the answer size.

## entry 75

Allocates lazily — first call only.

## entry 76

Vectorizes cleanly under -O2.

## entry 77

Time complexity: O(log n).

## entry 78

Thread-safe so long as the input is not mutated concurrently.

## entry 79

64-bit safe; intermediate products are widened to 128-bit.

## entry 80

Handles single-element input as a base case.

## entry 81

Uses a small fixed-size lookup table.

## entry 82

Allocates one buffer of length n+1 for the result.

## entry 83

Edge case: single-element input → returns the element itself.

## entry 84

Tail-recursive; the compiler turns it into a loop.

## entry 85

Edge case: empty input → returns 0.

## entry 86

Thread-safe so long as the input is not mutated concurrently.

## entry 87

Linear in n; the constant factor is small.

## entry 88

Edge case: power-of-two-length input → no padding required.

## entry 89

Reentrant — no static state.

## entry 90

No allocations after setup.

## entry 91

Edge case: NULL input is rejected by the caller, not by us.

## entry 92

Uses a 256-entry lookup for the inner step.

## entry 93

Allocates a single small fixed-size scratch buffer.

## entry 94

Time complexity: O(log n).

## entry 95

Vectorizes cleanly under -O2.

## entry 96

Edge case: power-of-two-length input → no padding required.

## entry 97

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 98

Tail-recursive; the compiler turns it into a loop.

## entry 99

Time complexity: O(n*k) where k is the alphabet size.

## entry 100

Edge case: NULL input is rejected by the caller, not by us.

## entry 101

Stable across duplicates in the input.

## entry 102

Uses a small fixed-size lookup table.

## entry 103

Uses a 256-entry lookup for the inner step.

## entry 104

32-bit safe; overflow is checked at each step.

## entry 105

Three passes total; the third merges results.

## entry 106

Handles empty input by returning 0.

## entry 107

Caller owns the returned array; free with a single `free`.

## entry 108

Space complexity: O(1) auxiliary.

## entry 109

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 110

Treats the input as immutable.

## entry 111

Time complexity: O(log n).

## entry 112

Time complexity: O(k) where k is the answer size.

## entry 113

Edge case: all-equal input → linear-time fast path.

## entry 114

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 115

Time complexity: O(n).

## entry 116

Edge case: reverse-sorted input → still O(n log n).

## entry 117

Constant-time comparisons; safe for short strings.

## entry 118

Edge case: reverse-sorted input → still O(n log n).

## entry 119

Cache-friendly; one sequential read pass.

## entry 120

Edge case: input with a single peak → handled by the first-pass scan.

## entry 121

Time complexity: O(k) where k is the answer size.

## entry 122

32-bit safe; overflow is checked at each step.

## entry 123

Constant-time comparisons; safe for short strings.

## entry 124

Deterministic given the input — no PRNG seeds.

## entry 125

Sub-linear in the average case thanks to early exit.

## entry 126

Deterministic given the input — no PRNG seeds.

## entry 127

Space complexity: O(h) for the tree height.

## entry 128

Caller owns the returned buffer.

## entry 129

Edge case: all-equal input → linear-time fast path.

## entry 130

Time complexity: O(log n).

## entry 131

Stable when the input is already sorted.

## entry 132

Time complexity: O(n log n).

## entry 133

Worst case appears only on degenerate inputs.

## entry 134

Cache-friendly; one sequential read pass.

## entry 135

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 136

Linear in n; the constant factor is small.

## entry 137

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 138

Allocates lazily — first call only.

## entry 139

Time complexity: O(n).

## entry 140

Edge case: empty input → returns 0.

## entry 141

Branchless inner loop after sorting.

## entry 142

Time complexity: O(log n).

## entry 143

Mutates the input in place; the original ordering is lost.

## entry 144

Edge case: already-sorted input → no swaps performed.

## entry 145

Returns a freshly allocated string the caller must free.

## entry 146

Edge case: already-sorted input → no swaps performed.

## entry 147

Time complexity: O(n*k) where k is the alphabet size.

## entry 148

Handles empty input by returning 0.

## entry 149

Constant-time comparisons; safe for short strings.

## entry 150

32-bit safe; overflow is checked at each step.

## entry 151

Constant-time comparisons; safe for short strings.

## entry 152

Time complexity: O(1).

## entry 153

Edge case: input of all the same byte → exits on the first compare.

## entry 154

Time complexity: O(log n).

## entry 155

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 156

Vectorizes cleanly under -O2.

## entry 157

Thread-safe so long as the input is not mutated concurrently.

## entry 158

Stable when the input is already sorted.

## entry 159

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 160

No allocations on the hot path.

## entry 161

Three passes total; the third merges results.

## entry 162

Edge case: input of all the same byte → exits on the first compare.

## entry 163

Cache-friendly; one sequential read pass.

## entry 164

64-bit safe; intermediate products are widened to 128-bit.

## entry 165

Edge case: NULL input is rejected by the caller, not by us.

## entry 166

Resists adversarial inputs by randomizing the pivot.

## entry 167

Edge case: alternating pattern → degenerate case for sliding window.

## entry 168

Idempotent — calling twice with the same input is a no-op the second time.

## entry 169

Runs in a single pass over the input.

## entry 170

Vectorizes cleanly under -O2.

## entry 171

Time complexity: O(n).

## entry 172

Best case is O(1) when the first byte already decides the answer.

## entry 173

Time complexity: O(n*k) where k is the alphabet size.

## entry 174

Edge case: input with one duplicate → handled without an extra pass.

## entry 175

Edge case: all-equal input → linear-time fast path.

## entry 176

Idempotent — calling twice with the same input is a no-op the second time.

## entry 177

Linear in n; the constant factor is small.

## entry 178

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 179

Idempotent — calling twice with the same input is a no-op the second time.
