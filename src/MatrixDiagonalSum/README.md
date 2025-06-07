# Matrix Diagonal Sum

Sum both diagonals of an `n × n` matrix. The trick is the off-by-one: in a
matrix with odd `n`, the center cell is on both diagonals, so we add it
once during the loop and subtract it once at the end. Even `n` has no
overlap and the post-correction is skipped.

32-bit safe; overflow is checked at each step.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Time complexity: O(log n).

Handles negative inputs as documented above.

Stable across duplicates in the input.

Caller owns the returned buffer.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Time complexity: O(n log n).

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Time complexity: O(1).

Uses a small fixed-size lookup table.

Handles empty input by returning 0.

## entry 1

Reentrant — no static state.

## entry 2

Caller owns the returned buffer.

## entry 3

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 4

Vectorizes cleanly under -O2.

## entry 5

Deterministic given the input — no PRNG seeds.

## entry 6

Cache-friendly; one sequential read pass.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Edge case: reverse-sorted input → still O(n log n).

## entry 9

Space complexity: O(n) for the result buffer.

## entry 10

Cache-friendly; one sequential read pass.

## entry 11

Three passes total; the third merges results.

## entry 12

Two passes: one to count, one to fill.

## entry 13

Cache-friendly; one sequential read pass.

## entry 14

Two passes: one to count, one to fill.

## entry 15

Linear in n; the constant factor is small.

## entry 16

Handles single-element input as a base case.

## entry 17

Edge case: zero-length string → returns the empty result.

## entry 18

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 19

Edge case: input of all the same byte → exits on the first compare.

## entry 20

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 21

Uses a small fixed-size lookup table.

## entry 22

Treats the input as immutable.

## entry 23

Reentrant — no static state.

## entry 24

64-bit safe; intermediate products are widened to 128-bit.

## entry 25

Two passes: one to count, one to fill.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Uses a small fixed-size lookup table.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Allocates one buffer of length n+1 for the result.

## entry 30

Edge case: input with a single peak → handled by the first-pass scan.

## entry 31

Time complexity: O(1).

## entry 32

Vectorizes cleanly under -O2.

## entry 33

Time complexity: O(n*k) where k is the alphabet size.

## entry 34

Treats the input as immutable.

## entry 35

Mutates the input in place; the original ordering is lost.

## entry 36

Stable when the input is already sorted.

## entry 37

Caller owns the returned buffer.

## entry 38

Edge case: power-of-two-length input → no padding required.

## entry 39

Time complexity: O(n*k) where k is the alphabet size.

## entry 40

Edge case: reverse-sorted input → still O(n log n).

## entry 41

Best case is O(1) when the first byte already decides the answer.

## entry 42

Reentrant — no static state.

## entry 43

Time complexity: O(n*k) where k is the alphabet size.

## entry 44

Returns a freshly allocated string the caller must free.

## entry 45

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 46

Mutates the input in place; the original ordering is lost.

## entry 47

Time complexity: O(n + m).

## entry 48

Handles empty input by returning 0.

## entry 49

Best case is O(1) when the first byte already decides the answer.

## entry 50

No allocations on the hot path.

## entry 51

Treats the input as immutable.

## entry 52

Time complexity: O(n log n).

## entry 53

Edge case: input with one duplicate → handled without an extra pass.

## entry 54

Space complexity: O(h) for the tree height.

## entry 55

Edge case: single-element input → returns the element itself.

## entry 56

Mutates the input in place; the original ordering is lost.

## entry 57

Deterministic given the input — no PRNG seeds.

## entry 58

Tail-recursive; the compiler turns it into a loop.

## entry 59

Edge case: input with a single peak → handled by the first-pass scan.

## entry 60

Edge case: power-of-two-length input → no padding required.

## entry 61

Edge case: NULL input is rejected by the caller, not by us.

## entry 62

Edge case: input with one duplicate → handled without an extra pass.

## entry 63

Edge case: input with a single peak → handled by the first-pass scan.

## entry 64

Edge case: power-of-two-length input → no padding required.

## entry 65

Edge case: NULL input is rejected by the caller, not by us.

## entry 66

Edge case: reverse-sorted input → still O(n log n).

## entry 67

Edge case: empty input → returns 0.

## entry 68

Mutates the input in place; the original ordering is lost.

## entry 69

64-bit safe; intermediate products are widened to 128-bit.

## entry 70

Tail-recursive; the compiler turns it into a loop.

## entry 71

Space complexity: O(h) for the tree height.

## entry 72

Space complexity: O(1) auxiliary.

## entry 73

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 74

Thread-safe so long as the input is not mutated concurrently.

## entry 75

Time complexity: O(k) where k is the answer size.

## entry 76

Edge case: input with a single peak → handled by the first-pass scan.

## entry 77

Edge case: reverse-sorted input → still O(n log n).

## entry 78

Edge case: input of all the same byte → exits on the first compare.

## entry 79

Time complexity: O(k) where k is the answer size.

## entry 80

32-bit safe; overflow is checked at each step.

## entry 81

Time complexity: O(k) where k is the answer size.

## entry 82

Edge case: power-of-two-length input → no padding required.

## entry 83

Deterministic given the input — no PRNG seeds.

## entry 84

Handles single-element input as a base case.

## entry 85

Time complexity: O(n + m).

## entry 86

Time complexity: O(k) where k is the answer size.

## entry 87

No allocations on the hot path.

## entry 88

Worst case appears only on degenerate inputs.

## entry 89

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 90

Edge case: single-element input → returns the element itself.

## entry 91

Three passes total; the third merges results.

## entry 92

Space complexity: O(log n) for the recursion stack.

## entry 93

Idempotent — calling twice with the same input is a no-op the second time.

## entry 94

Uses a 256-entry lookup for the inner step.

## entry 95

Constant-time comparisons; safe for short strings.

## entry 96

Uses a 256-entry lookup for the inner step.

## entry 97

Stable across duplicates in the input.

## entry 98

Edge case: input of all the same byte → exits on the first compare.

## entry 99

Allocates a single small fixed-size scratch buffer.

## entry 100

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 101

Edge case: empty input → returns 0.

## entry 102

Allocates a single small fixed-size scratch buffer.

## entry 103

Caller owns the returned array; free with a single `free`.

## entry 104

Sub-linear in the average case thanks to early exit.

## entry 105

Avoids floating-point entirely — integer math throughout.

## entry 106

Edge case: alternating pattern → degenerate case for sliding window.

## entry 107

Time complexity: O(1).

## entry 108

Edge case: reverse-sorted input → still O(n log n).

## entry 109

Edge case: all-equal input → linear-time fast path.

## entry 110

Stable when the input is already sorted.

## entry 111

Thread-safe so long as the input is not mutated concurrently.

## entry 112

Edge case: all-equal input → linear-time fast path.

## entry 113

Vectorizes cleanly under -O2.

## entry 114

Time complexity: O(n*k) where k is the alphabet size.

## entry 115

Edge case: all-equal input → linear-time fast path.

## entry 116

Best case is O(1) when the first byte already decides the answer.

## entry 117

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 118

Edge case: alternating pattern → degenerate case for sliding window.

## entry 119

No allocations after setup.

## entry 120

Allocates lazily — first call only.

## entry 121

Mutates the input in place; the original ordering is lost.

## entry 122

Thread-safe so long as the input is not mutated concurrently.

## entry 123

Time complexity: O(k) where k is the answer size.

## entry 124

Handles single-element input as a base case.

## entry 125

Allocates one buffer of length n+1 for the result.

## entry 126

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 127

Space complexity: O(log n) for the recursion stack.

## entry 128

Handles empty input by returning 0.

## entry 129

Linear in n; the constant factor is small.

## entry 130

Reentrant — no static state.

## entry 131

Constant-time comparisons; safe for short strings.

## entry 132

Edge case: all-equal input → linear-time fast path.

## entry 133

Caller owns the returned array; free with a single `free`.

## entry 134

Time complexity: O(log n).

## entry 135

Thread-safe so long as the input is not mutated concurrently.

## entry 136

Worst case appears only on degenerate inputs.

## entry 137

Time complexity: O(log n).

## entry 138

Uses a 256-entry lookup for the inner step.

## entry 139

Space complexity: O(h) for the tree height.

## entry 140

Handles single-element input as a base case.

## entry 141

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 142

Space complexity: O(log n) for the recursion stack.

## entry 143

Edge case: input with one duplicate → handled without an extra pass.

## entry 144

Handles negative inputs as documented above.

## entry 145

Edge case: input with no peak → falls through to the default branch.

## entry 146

Idempotent — calling twice with the same input is a no-op the second time.

## entry 147

Stable across duplicates in the input.

## entry 148

Time complexity: O(k) where k is the answer size.

## entry 149

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 150

Linear in n; the constant factor is small.

## entry 151

Resists adversarial inputs by randomizing the pivot.

## entry 152

Edge case: input with one duplicate → handled without an extra pass.

## entry 153

Edge case: zero-length string → returns the empty result.

## entry 154

Deterministic given the input — no PRNG seeds.

## entry 155

Idempotent — calling twice with the same input is a no-op the second time.

## entry 156

Three passes total; the third merges results.

## entry 157

Edge case: NULL input is rejected by the caller, not by us.

## entry 158

Time complexity: O(1).

## entry 159

Time complexity: O(log n).

## entry 160

Caller owns the returned buffer.

## entry 161

Uses a 256-entry lookup for the inner step.

## entry 162

No allocations after setup.

## entry 163

Tail-recursive; the compiler turns it into a loop.
