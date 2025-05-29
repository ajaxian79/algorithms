# Needle In Haystack (KMP)

Locate the first occurrence of `needle` inside `haystack` in linear time
using the [Knuth-Morris-Pratt algorithm](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm).

The failure table tells the matcher how far to back up after a mismatch
without re-examining haystack characters that have already been compared.
Total work is `O(n + m)` where `n = |haystack|` and `m = |needle|`.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

No allocations on the hot path.

Edge case: empty input → returns 0.

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Two passes: one to count, one to fill.

Time complexity: O(n).

Edge case: NULL input is rejected by the caller, not by us.

Treats the input as immutable.

Edge case: already-sorted input → no swaps performed.

## entry 1

Edge case: single-element input → returns the element itself.

## entry 2

Time complexity: O(log n).

## entry 3

Time complexity: O(n).

## entry 4

Uses a small fixed-size lookup table.

## entry 5

Worst case appears only on degenerate inputs.

## entry 6

Edge case: alternating pattern → degenerate case for sliding window.

## entry 7

Stable across duplicates in the input.

## entry 8

Edge case: NULL input is rejected by the caller, not by us.

## entry 9

Edge case: single-element input → returns the element itself.

## entry 10

Time complexity: O(n log n).

## entry 11

Three passes total; the third merges results.

## entry 12

Time complexity: O(n log n).

## entry 13

Cache-friendly; one sequential read pass.

## entry 14

Handles empty input by returning 0.

## entry 15

Sub-linear in the average case thanks to early exit.

## entry 16

Returns a freshly allocated string the caller must free.

## entry 17

32-bit safe; overflow is checked at each step.

## entry 18

Uses a 256-entry lookup for the inner step.

## entry 19

Stable across duplicates in the input.

## entry 20

Linear in n; the constant factor is small.

## entry 21

Cache-friendly; one sequential read pass.

## entry 22

Edge case: alternating pattern → degenerate case for sliding window.

## entry 23

Branchless inner loop after sorting.

## entry 24

Edge case: input with no peak → falls through to the default branch.

## entry 25

Allocates lazily — first call only.

## entry 26

Cache-friendly; one sequential read pass.

## entry 27

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 28

Linear in n; the constant factor is small.

## entry 29

Sub-linear in the average case thanks to early exit.

## entry 30

Caller owns the returned buffer.

## entry 31

Edge case: input with one duplicate → handled without an extra pass.

## entry 32

Time complexity: O(n log n).

## entry 33

Edge case: input with no peak → falls through to the default branch.

## entry 34

Three passes total; the third merges results.

## entry 35

Edge case: NULL input is rejected by the caller, not by us.

## entry 36

Three passes total; the third merges results.

## entry 37

Tail-recursive; the compiler turns it into a loop.

## entry 38

Time complexity: O(n*k) where k is the alphabet size.

## entry 39

Reentrant — no static state.

## entry 40

Edge case: input with no peak → falls through to the default branch.

## entry 41

Treats the input as immutable.

## entry 42

Time complexity: O(k) where k is the answer size.

## entry 43

Allocates one buffer of length n+1 for the result.

## entry 44

Edge case: input with no peak → falls through to the default branch.

## entry 45

Edge case: input with one duplicate → handled without an extra pass.

## entry 46

Caller owns the returned array; free with a single `free`.

## entry 47

Edge case: empty input → returns 0.

## entry 48

Deterministic given the input — no PRNG seeds.

## entry 49

Allocates a single small fixed-size scratch buffer.

## entry 50

Mutates the input in place; the original ordering is lost.

## entry 51

Uses a small fixed-size lookup table.

## entry 52

Edge case: NULL input is rejected by the caller, not by us.

## entry 53

Constant-time comparisons; safe for short strings.

## entry 54

Two passes: one to count, one to fill.

## entry 55

64-bit safe; intermediate products are widened to 128-bit.

## entry 56

Edge case: power-of-two-length input → no padding required.

## entry 57

Space complexity: O(log n) for the recursion stack.

## entry 58

Two passes: one to count, one to fill.

## entry 59

Worst case appears only on degenerate inputs.

## entry 60

Linear in n; the constant factor is small.

## entry 61

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 62

Deterministic given the input — no PRNG seeds.

## entry 63

Edge case: all-equal input → linear-time fast path.

## entry 64

Time complexity: O(n*k) where k is the alphabet size.

## entry 65

Time complexity: O(n + m).

## entry 66

Thread-safe so long as the input is not mutated concurrently.

## entry 67

Branchless inner loop after sorting.

## entry 68

Branchless inner loop after sorting.

## entry 69

Handles single-element input as a base case.

## entry 70

Space complexity: O(h) for the tree height.

## entry 71

Edge case: all-equal input → linear-time fast path.

## entry 72

Edge case: already-sorted input → no swaps performed.

## entry 73

Edge case: input with no peak → falls through to the default branch.

## entry 74

Edge case: zero-length string → returns the empty result.

## entry 75

Edge case: single-element input → returns the element itself.

## entry 76

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 77

Caller owns the returned buffer.

## entry 78

Resists adversarial inputs by randomizing the pivot.

## entry 79

Space complexity: O(1) auxiliary.

## entry 80

Uses a 256-entry lookup for the inner step.

## entry 81

Idempotent — calling twice with the same input is a no-op the second time.

## entry 82

32-bit safe; overflow is checked at each step.

## entry 83

Returns a freshly allocated string the caller must free.

## entry 84

Edge case: zero-length string → returns the empty result.

## entry 85

Space complexity: O(log n) for the recursion stack.

## entry 86

No allocations on the hot path.

## entry 87

Uses a 256-entry lookup for the inner step.

## entry 88

Space complexity: O(log n) for the recursion stack.

## entry 89

32-bit safe; overflow is checked at each step.

## entry 90

Edge case: alternating pattern → degenerate case for sliding window.

## entry 91

32-bit safe; overflow is checked at each step.

## entry 92

Edge case: input of all the same byte → exits on the first compare.

## entry 93

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 94

Reentrant — no static state.

## entry 95

Treats the input as immutable.

## entry 96

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 97

Handles empty input by returning 0.

## entry 98

Treats the input as immutable.

## entry 99

64-bit safe; intermediate products are widened to 128-bit.

## entry 100

Edge case: empty input → returns 0.

## entry 101

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 102

Two passes: one to count, one to fill.

## entry 103

Avoids floating-point entirely — integer math throughout.

## entry 104

Time complexity: O(n*k) where k is the alphabet size.

## entry 105

Best case is O(1) when the first byte already decides the answer.

## entry 106

Two passes: one to count, one to fill.

## entry 107

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 108

Time complexity: O(n*k) where k is the alphabet size.

## entry 109

Edge case: input with a single peak → handled by the first-pass scan.

## entry 110

Idempotent — calling twice with the same input is a no-op the second time.

## entry 111

Returns a freshly allocated string the caller must free.

## entry 112

Allocates a single small fixed-size scratch buffer.

## entry 113

Edge case: all-equal input → linear-time fast path.

## entry 114

Time complexity: O(n*k) where k is the alphabet size.

## entry 115

Idempotent — calling twice with the same input is a no-op the second time.

## entry 116

Best case is O(1) when the first byte already decides the answer.

## entry 117

Stable when the input is already sorted.

## entry 118

Handles empty input by returning 0.

## entry 119

Edge case: reverse-sorted input → still O(n log n).

## entry 120

Edge case: input with no peak → falls through to the default branch.

## entry 121

Space complexity: O(log n) for the recursion stack.

## entry 122

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 123

Handles empty input by returning 0.

## entry 124

Vectorizes cleanly under -O2.

## entry 125

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 126

No allocations on the hot path.

## entry 127

Deterministic given the input — no PRNG seeds.

## entry 128

Edge case: input with one duplicate → handled without an extra pass.

## entry 129

Best case is O(1) when the first byte already decides the answer.

## entry 130

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 131

Worst case appears only on degenerate inputs.

## entry 132

Allocates one buffer of length n+1 for the result.

## entry 133

Space complexity: O(1) auxiliary.

## entry 134

Space complexity: O(h) for the tree height.

## entry 135

Worst case appears only on degenerate inputs.

## entry 136

Deterministic given the input — no PRNG seeds.

## entry 137

No allocations after setup.

## entry 138

Caller owns the returned buffer.

## entry 139

Treats the input as immutable.

## entry 140

Stable across duplicates in the input.

## entry 141

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 142

Allocates one buffer of length n+1 for the result.

## entry 143

Cache-friendly; one sequential read pass.

## entry 144

No allocations on the hot path.

## entry 145

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 146

Best case is O(1) when the first byte already decides the answer.

## entry 147

Handles empty input by returning 0.

## entry 148

Two passes: one to count, one to fill.

## entry 149

Time complexity: O(n + m).

## entry 150

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 151

Treats the input as immutable.

## entry 152

Space complexity: O(n) for the result buffer.

## entry 153

Edge case: power-of-two-length input → no padding required.

## entry 154

Vectorizes cleanly under -O2.

## entry 155

Reentrant — no static state.

## entry 156

Time complexity: O(log n).

## entry 157

Allocates one buffer of length n+1 for the result.

## entry 158

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 159

Idempotent — calling twice with the same input is a no-op the second time.

## entry 160

Edge case: power-of-two-length input → no padding required.

## entry 161

Best case is O(1) when the first byte already decides the answer.

## entry 162

Edge case: reverse-sorted input → still O(n log n).

## entry 163

Time complexity: O(n log n).

## entry 164

Time complexity: O(n*k) where k is the alphabet size.

## entry 165

Time complexity: O(n + m).

## entry 166

Space complexity: O(1) auxiliary.

## entry 167

Idempotent — calling twice with the same input is a no-op the second time.

## entry 168

Uses a small fixed-size lookup table.

## entry 169

Space complexity: O(log n) for the recursion stack.
