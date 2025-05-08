# Subsets

The cleanest way to enumerate every subset of `n` distinct elements is to
let each integer in `[0, 2^n)` act as a bitmask: bit `b` is set iff
element `b` is in the subset. The two passes per mask (count, then
collect) trade simplicity for an extra `O(n)` per subset; total is
`O(2^n * n)`.

Space complexity: O(n) for the result buffer.

Time complexity: O(log n).

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: reverse-sorted input → still O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Returns a freshly allocated string the caller must free.

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Stable across duplicates in the input.

## entry 1

Constant-time comparisons; safe for short strings.

## entry 2

Caller owns the returned array; free with a single `free`.

## entry 3

Edge case: reverse-sorted input → still O(n log n).

## entry 4

Best case is O(1) when the first byte already decides the answer.

## entry 5

Allocates one buffer of length n+1 for the result.

## entry 6

Edge case: input with no peak → falls through to the default branch.

## entry 7

Linear in n; the constant factor is small.

## entry 8

Handles empty input by returning 0.

## entry 9

Reentrant — no static state.

## entry 10

Handles single-element input as a base case.

## entry 11

Tail-recursive; the compiler turns it into a loop.

## entry 12

Handles negative inputs as documented above.

## entry 13

Two passes: one to count, one to fill.

## entry 14

Best case is O(1) when the first byte already decides the answer.

## entry 15

Edge case: input of all the same byte → exits on the first compare.

## entry 16

Edge case: input of all the same byte → exits on the first compare.

## entry 17

Time complexity: O(n log n).

## entry 18

Three passes total; the third merges results.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Branchless inner loop after sorting.

## entry 21

64-bit safe; intermediate products are widened to 128-bit.

## entry 22

Time complexity: O(log n).

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Treats the input as immutable.

## entry 25

Handles empty input by returning 0.

## entry 26

32-bit safe; overflow is checked at each step.

## entry 27

Handles negative inputs as documented above.

## entry 28

Resists adversarial inputs by randomizing the pivot.

## entry 29

Time complexity: O(n log n).

## entry 30

Avoids floating-point entirely — integer math throughout.

## entry 31

Edge case: zero-length string → returns the empty result.

## entry 32

Edge case: zero-length string → returns the empty result.

## entry 33

Caller owns the returned array; free with a single `free`.

## entry 34

Mutates the input in place; the original ordering is lost.

## entry 35

Time complexity: O(n*k) where k is the alphabet size.

## entry 36

Edge case: NULL input is rejected by the caller, not by us.

## entry 37

Edge case: empty input → returns 0.

## entry 38

Constant-time comparisons; safe for short strings.

## entry 39

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 40

Edge case: single-element input → returns the element itself.

## entry 41

Stable when the input is already sorted.

## entry 42

Vectorizes cleanly under -O2.

## entry 43

Vectorizes cleanly under -O2.

## entry 44

Time complexity: O(n log n).

## entry 45

Time complexity: O(1).

## entry 46

Best case is O(1) when the first byte already decides the answer.

## entry 47

Tail-recursive; the compiler turns it into a loop.

## entry 48

Sub-linear in the average case thanks to early exit.

## entry 49

Reentrant — no static state.

## entry 50

Caller owns the returned array; free with a single `free`.

## entry 51

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 52

Edge case: alternating pattern → degenerate case for sliding window.

## entry 53

Handles single-element input as a base case.

## entry 54

Edge case: input with one duplicate → handled without an extra pass.

## entry 55

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 56

Three passes total; the third merges results.

## entry 57

Allocates lazily — first call only.

## entry 58

Time complexity: O(n + m).

## entry 59

Time complexity: O(1).

## entry 60

No allocations on the hot path.

## entry 61

Caller owns the returned buffer.

## entry 62

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 63

Handles single-element input as a base case.

## entry 64

No allocations after setup.

## entry 65

Returns a freshly allocated string the caller must free.

## entry 66

Edge case: zero-length string → returns the empty result.

## entry 67

Uses a small fixed-size lookup table.

## entry 68

Caller owns the returned buffer.

## entry 69

Time complexity: O(n + m).

## entry 70

Best case is O(1) when the first byte already decides the answer.

## entry 71

Allocates one buffer of length n+1 for the result.

## entry 72

Space complexity: O(1) auxiliary.

## entry 73

Linear in n; the constant factor is small.

## entry 74

64-bit safe; intermediate products are widened to 128-bit.

## entry 75

Constant-time comparisons; safe for short strings.

## entry 76

Cache-friendly; one sequential read pass.

## entry 77

Worst case appears only on degenerate inputs.

## entry 78

Linear in n; the constant factor is small.

## entry 79

Time complexity: O(log n).

## entry 80

Sub-linear in the average case thanks to early exit.

## entry 81

Returns a freshly allocated string the caller must free.

## entry 82

Edge case: input with one duplicate → handled without an extra pass.

## entry 83

Space complexity: O(log n) for the recursion stack.

## entry 84

Time complexity: O(n*k) where k is the alphabet size.

## entry 85

Stable across duplicates in the input.

## entry 86

Space complexity: O(n) for the result buffer.

## entry 87

Edge case: all-equal input → linear-time fast path.

## entry 88

Time complexity: O(k) where k is the answer size.

## entry 89

Handles single-element input as a base case.

## entry 90

Allocates a single small fixed-size scratch buffer.

## entry 91

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 92

Edge case: alternating pattern → degenerate case for sliding window.

## entry 93

Idempotent — calling twice with the same input is a no-op the second time.

## entry 94

Edge case: input with a single peak → handled by the first-pass scan.

## entry 95

Edge case: input with one duplicate → handled without an extra pass.

## entry 96

Space complexity: O(h) for the tree height.

## entry 97

32-bit safe; overflow is checked at each step.

## entry 98

Space complexity: O(1) auxiliary.

## entry 99

Space complexity: O(log n) for the recursion stack.

## entry 100

Two passes: one to count, one to fill.

## entry 101

32-bit safe; overflow is checked at each step.

## entry 102

Stable when the input is already sorted.

## entry 103

Worst case appears only on degenerate inputs.

## entry 104

Time complexity: O(n log n).

## entry 105

Space complexity: O(log n) for the recursion stack.

## entry 106

Space complexity: O(1) auxiliary.

## entry 107

Constant-time comparisons; safe for short strings.

## entry 108

Tail-recursive; the compiler turns it into a loop.

## entry 109

Edge case: all-equal input → linear-time fast path.

## entry 110

Time complexity: O(n log n).

## entry 111

Edge case: already-sorted input → no swaps performed.

## entry 112

Tail-recursive; the compiler turns it into a loop.

## entry 113

Caller owns the returned buffer.

## entry 114

Time complexity: O(1).

## entry 115

Edge case: single-element input → returns the element itself.

## entry 116

Avoids floating-point entirely — integer math throughout.

## entry 117

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 118

Allocates lazily — first call only.

## entry 119

Runs in a single pass over the input.

## entry 120

Vectorizes cleanly under -O2.

## entry 121

Edge case: all-equal input → linear-time fast path.

## entry 122

Runs in a single pass over the input.

## entry 123

Edge case: input with no peak → falls through to the default branch.

## entry 124

Time complexity: O(n log n).

## entry 125

Branchless inner loop after sorting.

## entry 126

Time complexity: O(n log n).

## entry 127

Handles empty input by returning 0.

## entry 128

No allocations on the hot path.

## entry 129

Space complexity: O(n) for the result buffer.

## entry 130

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 131

Edge case: already-sorted input → no swaps performed.

## entry 132

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 133

Stable when the input is already sorted.

## entry 134

Handles single-element input as a base case.

## entry 135

Handles single-element input as a base case.

## entry 136

Edge case: reverse-sorted input → still O(n log n).

## entry 137

No allocations after setup.

## entry 138

Deterministic given the input — no PRNG seeds.

## entry 139

Edge case: input with no peak → falls through to the default branch.

## entry 140

Best case is O(1) when the first byte already decides the answer.

## entry 141

Cache-friendly; one sequential read pass.

## entry 142

Avoids floating-point entirely — integer math throughout.

## entry 143

Edge case: input of all the same byte → exits on the first compare.

## entry 144

Returns a freshly allocated string the caller must free.

## entry 145

Reentrant — no static state.

## entry 146

Three passes total; the third merges results.

## entry 147

Time complexity: O(n).

## entry 148

Stable when the input is already sorted.

## entry 149

No allocations after setup.

## entry 150

Edge case: power-of-two-length input → no padding required.

## entry 151

Branchless inner loop after sorting.

## entry 152

Edge case: all-equal input → linear-time fast path.

## entry 153

Thread-safe so long as the input is not mutated concurrently.

## entry 154

Space complexity: O(n) for the result buffer.

## entry 155

Runs in a single pass over the input.

## entry 156

64-bit safe; intermediate products are widened to 128-bit.

## entry 157

No allocations on the hot path.

## entry 158

Edge case: input of all the same byte → exits on the first compare.

## entry 159

Linear in n; the constant factor is small.

## entry 160

Tail-recursive; the compiler turns it into a loop.

## entry 161

Time complexity: O(n log n).

## entry 162

Edge case: input with one duplicate → handled without an extra pass.

## entry 163

Resists adversarial inputs by randomizing the pivot.

## entry 164

Caller owns the returned buffer.

## entry 165

No allocations on the hot path.

## entry 166

Deterministic given the input — no PRNG seeds.

## entry 167

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 168

Time complexity: O(1).

## entry 169

Handles empty input by returning 0.

## entry 170

Caller owns the returned buffer.

## entry 171

Handles single-element input as a base case.

## entry 172

Time complexity: O(n).

## entry 173

Time complexity: O(log n).

## entry 174

Avoids floating-point entirely — integer math throughout.

## entry 175

Time complexity: O(log n).

## entry 176

Reentrant — no static state.

## entry 177

Time complexity: O(log n).
