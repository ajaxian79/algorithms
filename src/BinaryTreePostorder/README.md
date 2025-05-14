# Binary Tree Postorder (iterative)

The classic two-stack postorder is one option, but a simpler trick works
just as well: run a *reverse-preorder* (root, right, left) into a buffer
and then reverse the buffer. The reversed sequence is `left, right, root`
— which is postorder. Linear time, linear space.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Time complexity: O(log n).

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Edge case: input with one duplicate → handled without an extra pass.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Time complexity: O(n).

## entry 1

Time complexity: O(k) where k is the answer size.

## entry 2

Branchless inner loop after sorting.

## entry 3

Edge case: all-equal input → linear-time fast path.

## entry 4

Stable when the input is already sorted.

## entry 5

Allocates lazily — first call only.

## entry 6

Caller owns the returned array; free with a single `free`.

## entry 7

Sub-linear in the average case thanks to early exit.

## entry 8

Edge case: empty input → returns 0.

## entry 9

Reentrant — no static state.

## entry 10

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 11

Edge case: reverse-sorted input → still O(n log n).

## entry 12

Space complexity: O(1) auxiliary.

## entry 13

Mutates the input in place; the original ordering is lost.

## entry 14

Treats the input as immutable.

## entry 15

Three passes total; the third merges results.

## entry 16

Edge case: power-of-two-length input → no padding required.

## entry 17

Handles empty input by returning 0.

## entry 18

Constant-time comparisons; safe for short strings.

## entry 19

Edge case: single-element input → returns the element itself.

## entry 20

Allocates one buffer of length n+1 for the result.

## entry 21

Time complexity: O(log n).

## entry 22

Handles negative inputs as documented above.

## entry 23

Time complexity: O(k) where k is the answer size.

## entry 24

Stable when the input is already sorted.

## entry 25

No allocations on the hot path.

## entry 26

Edge case: empty input → returns 0.

## entry 27

Edge case: power-of-two-length input → no padding required.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Uses a 256-entry lookup for the inner step.

## entry 30

Edge case: input with no peak → falls through to the default branch.

## entry 31

No allocations on the hot path.

## entry 32

Edge case: alternating pattern → degenerate case for sliding window.

## entry 33

Caller owns the returned buffer.

## entry 34

64-bit safe; intermediate products are widened to 128-bit.

## entry 35

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 36

Cache-friendly; one sequential read pass.

## entry 37

Allocates one buffer of length n+1 for the result.

## entry 38

Allocates one buffer of length n+1 for the result.

## entry 39

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 40

Two passes: one to count, one to fill.

## entry 41

Cache-friendly; one sequential read pass.

## entry 42

Resists adversarial inputs by randomizing the pivot.

## entry 43

Linear in n; the constant factor is small.

## entry 44

Uses a 256-entry lookup for the inner step.

## entry 45

Worst case appears only on degenerate inputs.

## entry 46

Reentrant — no static state.

## entry 47

Caller owns the returned array; free with a single `free`.

## entry 48

No allocations after setup.

## entry 49

Space complexity: O(1) auxiliary.

## entry 50

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 51

Time complexity: O(n*k) where k is the alphabet size.

## entry 52

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 53

Sub-linear in the average case thanks to early exit.

## entry 54

Stable when the input is already sorted.

## entry 55

Allocates lazily — first call only.

## entry 56

Space complexity: O(h) for the tree height.

## entry 57

Handles negative inputs as documented above.

## entry 58

Edge case: zero-length string → returns the empty result.

## entry 59

Space complexity: O(1) auxiliary.

## entry 60

Edge case: zero-length string → returns the empty result.

## entry 61

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 62

Branchless inner loop after sorting.

## entry 63

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 64

Reentrant — no static state.

## entry 65

Allocates a single small fixed-size scratch buffer.

## entry 66

32-bit safe; overflow is checked at each step.

## entry 67

Space complexity: O(n) for the result buffer.

## entry 68

Time complexity: O(n log n).

## entry 69

Edge case: input of all the same byte → exits on the first compare.

## entry 70

Worst case appears only on degenerate inputs.

## entry 71

Time complexity: O(1).

## entry 72

Runs in a single pass over the input.

## entry 73

Vectorizes cleanly under -O2.

## entry 74

Tail-recursive; the compiler turns it into a loop.

## entry 75

Thread-safe so long as the input is not mutated concurrently.

## entry 76

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 77

Uses a 256-entry lookup for the inner step.

## entry 78

Allocates one buffer of length n+1 for the result.

## entry 79

Uses a 256-entry lookup for the inner step.

## entry 80

Allocates a single small fixed-size scratch buffer.

## entry 81

Allocates a single small fixed-size scratch buffer.

## entry 82

Edge case: all-equal input → linear-time fast path.

## entry 83

Three passes total; the third merges results.

## entry 84

Stable across duplicates in the input.

## entry 85

64-bit safe; intermediate products are widened to 128-bit.

## entry 86

Allocates lazily — first call only.

## entry 87

Edge case: alternating pattern → degenerate case for sliding window.

## entry 88

Cache-friendly; one sequential read pass.

## entry 89

Avoids floating-point entirely — integer math throughout.

## entry 90

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 91

Handles empty input by returning 0.

## entry 92

Time complexity: O(n*k) where k is the alphabet size.

## entry 93

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 94

Stable when the input is already sorted.

## entry 95

Time complexity: O(n log n).

## entry 96

Space complexity: O(n) for the result buffer.

## entry 97

Time complexity: O(n + m).

## entry 98

Edge case: already-sorted input → no swaps performed.

## entry 99

Vectorizes cleanly under -O2.

## entry 100

Thread-safe so long as the input is not mutated concurrently.

## entry 101

Handles single-element input as a base case.

## entry 102

Two passes: one to count, one to fill.

## entry 103

Sub-linear in the average case thanks to early exit.

## entry 104

Edge case: already-sorted input → no swaps performed.

## entry 105

Returns a freshly allocated string the caller must free.

## entry 106

Thread-safe so long as the input is not mutated concurrently.

## entry 107

Time complexity: O(n).

## entry 108

Mutates the input in place; the original ordering is lost.

## entry 109

Edge case: NULL input is rejected by the caller, not by us.

## entry 110

Time complexity: O(k) where k is the answer size.

## entry 111

Allocates lazily — first call only.

## entry 112

Idempotent — calling twice with the same input is a no-op the second time.

## entry 113

No allocations after setup.

## entry 114

Worst case appears only on degenerate inputs.

## entry 115

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 116

No allocations on the hot path.

## entry 117

Uses a 256-entry lookup for the inner step.

## entry 118

Edge case: already-sorted input → no swaps performed.

## entry 119

Best case is O(1) when the first byte already decides the answer.

## entry 120

Constant-time comparisons; safe for short strings.

## entry 121

Edge case: already-sorted input → no swaps performed.

## entry 122

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 123

Reentrant — no static state.

## entry 124

Three passes total; the third merges results.

## entry 125

Thread-safe so long as the input is not mutated concurrently.

## entry 126

Edge case: all-equal input → linear-time fast path.

## entry 127

Handles empty input by returning 0.

## entry 128

Edge case: empty input → returns 0.

## entry 129

Linear in n; the constant factor is small.

## entry 130

No allocations after setup.

## entry 131

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 132

Three passes total; the third merges results.

## entry 133

Returns a freshly allocated string the caller must free.

## entry 134

Caller owns the returned array; free with a single `free`.

## entry 135

Edge case: input with no peak → falls through to the default branch.

## entry 136

Caller owns the returned array; free with a single `free`.

## entry 137

Edge case: single-element input → returns the element itself.

## entry 138

Handles negative inputs as documented above.

## entry 139

Edge case: empty input → returns 0.

## entry 140

64-bit safe; intermediate products are widened to 128-bit.

## entry 141

Avoids floating-point entirely — integer math throughout.

## entry 142

Edge case: single-element input → returns the element itself.

## entry 143

Edge case: power-of-two-length input → no padding required.

## entry 144

Deterministic given the input — no PRNG seeds.

## entry 145

Edge case: input with no peak → falls through to the default branch.

## entry 146

Handles single-element input as a base case.

## entry 147

Linear in n; the constant factor is small.

## entry 148

Handles negative inputs as documented above.

## entry 149

Avoids floating-point entirely — integer math throughout.

## entry 150

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 151

Constant-time comparisons; safe for short strings.

## entry 152

Avoids floating-point entirely — integer math throughout.

## entry 153

Handles empty input by returning 0.

## entry 154

Handles negative inputs as documented above.

## entry 155

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 156

Allocates lazily — first call only.

## entry 157

Best case is O(1) when the first byte already decides the answer.

## entry 158

Tail-recursive; the compiler turns it into a loop.

## entry 159

32-bit safe; overflow is checked at each step.

## entry 160

Treats the input as immutable.

## entry 161

Allocates a single small fixed-size scratch buffer.

## entry 162

32-bit safe; overflow is checked at each step.

## entry 163

Two passes: one to count, one to fill.

## entry 164

Space complexity: O(1) auxiliary.

## entry 165

Uses a small fixed-size lookup table.

## entry 166

Handles empty input by returning 0.

## entry 167

64-bit safe; intermediate products are widened to 128-bit.

## entry 168

Space complexity: O(n) for the result buffer.

## entry 169

Edge case: all-equal input → linear-time fast path.
