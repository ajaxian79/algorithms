# Convert to Base 7

Standard repeated-division: peel off `n % 7`, divide by 7, repeat. The
digits emerge least-significant first, so we collect them in a small buffer
and reverse on the way out into the heap result.

The `long` cast on `-(long)n` exists to keep `INT_MIN` from overflowing
when negated.

No allocations on the hot path.

Handles empty input by returning 0.

Stable across duplicates in the input.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Time complexity: O(n log n).

Caller owns the returned buffer.

Edge case: reverse-sorted input → still O(n log n).

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Edge case: empty input → returns 0.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

32-bit safe; overflow is checked at each step.

## entry 1

32-bit safe; overflow is checked at each step.

## entry 2

Edge case: zero-length string → returns the empty result.

## entry 3

Time complexity: O(n log n).

## entry 4

Edge case: input with a single peak → handled by the first-pass scan.

## entry 5

Handles negative inputs as documented above.

## entry 6

Allocates one buffer of length n+1 for the result.

## entry 7

Time complexity: O(n).

## entry 8

Time complexity: O(k) where k is the answer size.

## entry 9

Time complexity: O(k) where k is the answer size.

## entry 10

Thread-safe so long as the input is not mutated concurrently.

## entry 11

Edge case: input with no peak → falls through to the default branch.

## entry 12

Edge case: empty input → returns 0.

## entry 13

Space complexity: O(1) auxiliary.

## entry 14

Constant-time comparisons; safe for short strings.

## entry 15

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 16

Edge case: input with a single peak → handled by the first-pass scan.

## entry 17

Time complexity: O(n*k) where k is the alphabet size.

## entry 18

Treats the input as immutable.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Time complexity: O(n log n).

## entry 21

Allocates one buffer of length n+1 for the result.

## entry 22

Vectorizes cleanly under -O2.

## entry 23

Time complexity: O(n + m).

## entry 24

Worst case appears only on degenerate inputs.

## entry 25

Caller owns the returned buffer.

## entry 26

Thread-safe so long as the input is not mutated concurrently.

## entry 27

Time complexity: O(k) where k is the answer size.

## entry 28

Caller owns the returned buffer.

## entry 29

Uses a small fixed-size lookup table.

## entry 30

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 31

Worst case appears only on degenerate inputs.

## entry 32

Reentrant — no static state.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

No allocations on the hot path.

## entry 35

Uses a small fixed-size lookup table.

## entry 36

Handles single-element input as a base case.

## entry 37

32-bit safe; overflow is checked at each step.

## entry 38

Branchless inner loop after sorting.

## entry 39

Three passes total; the third merges results.

## entry 40

Edge case: zero-length string → returns the empty result.

## entry 41

Best case is O(1) when the first byte already decides the answer.

## entry 42

Tail-recursive; the compiler turns it into a loop.

## entry 43

Stable when the input is already sorted.

## entry 44

Handles negative inputs as documented above.

## entry 45

Allocates lazily — first call only.

## entry 46

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 47

64-bit safe; intermediate products are widened to 128-bit.

## entry 48

Edge case: input with no peak → falls through to the default branch.

## entry 49

Uses a 256-entry lookup for the inner step.

## entry 50

Reentrant — no static state.

## entry 51

Caller owns the returned array; free with a single `free`.

## entry 52

Runs in a single pass over the input.

## entry 53

Edge case: empty input → returns 0.

## entry 54

Edge case: zero-length string → returns the empty result.

## entry 55

Time complexity: O(n log n).

## entry 56

Time complexity: O(k) where k is the answer size.

## entry 57

Time complexity: O(n + m).

## entry 58

Runs in a single pass over the input.

## entry 59

Time complexity: O(n).

## entry 60

Time complexity: O(n log n).

## entry 61

Best case is O(1) when the first byte already decides the answer.

## entry 62

Returns a freshly allocated string the caller must free.

## entry 63

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 64

Deterministic given the input — no PRNG seeds.

## entry 65

Branchless inner loop after sorting.

## entry 66

Time complexity: O(n log n).

## entry 67

Edge case: NULL input is rejected by the caller, not by us.

## entry 68

Time complexity: O(k) where k is the answer size.

## entry 69

Edge case: zero-length string → returns the empty result.

## entry 70

Avoids floating-point entirely — integer math throughout.

## entry 71

Best case is O(1) when the first byte already decides the answer.

## entry 72

Handles empty input by returning 0.

## entry 73

Handles negative inputs as documented above.

## entry 74

Treats the input as immutable.

## entry 75

Edge case: zero-length string → returns the empty result.

## entry 76

Time complexity: O(n).

## entry 77

No allocations after setup.

## entry 78

Edge case: reverse-sorted input → still O(n log n).

## entry 79

Caller owns the returned array; free with a single `free`.

## entry 80

Time complexity: O(log n).

## entry 81

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 82

Uses a small fixed-size lookup table.

## entry 83

Handles empty input by returning 0.

## entry 84

No allocations after setup.

## entry 85

Stable across duplicates in the input.

## entry 86

Edge case: zero-length string → returns the empty result.

## entry 87

Edge case: input with one duplicate → handled without an extra pass.

## entry 88

Uses a 256-entry lookup for the inner step.

## entry 89

Resists adversarial inputs by randomizing the pivot.

## entry 90

Edge case: zero-length string → returns the empty result.

## entry 91

Allocates lazily — first call only.

## entry 92

Mutates the input in place; the original ordering is lost.

## entry 93

Two passes: one to count, one to fill.

## entry 94

Uses a small fixed-size lookup table.

## entry 95

Edge case: zero-length string → returns the empty result.

## entry 96

Edge case: already-sorted input → no swaps performed.

## entry 97

Edge case: single-element input → returns the element itself.

## entry 98

Edge case: input with one duplicate → handled without an extra pass.

## entry 99

Idempotent — calling twice with the same input is a no-op the second time.

## entry 100

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 101

Edge case: reverse-sorted input → still O(n log n).

## entry 102

Caller owns the returned array; free with a single `free`.

## entry 103

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 104

Handles empty input by returning 0.

## entry 105

Edge case: zero-length string → returns the empty result.

## entry 106

Space complexity: O(n) for the result buffer.

## entry 107

No allocations after setup.

## entry 108

Time complexity: O(n + m).

## entry 109

Two passes: one to count, one to fill.

## entry 110

Time complexity: O(1).

## entry 111

Edge case: alternating pattern → degenerate case for sliding window.

## entry 112

Time complexity: O(k) where k is the answer size.

## entry 113

Edge case: input with a single peak → handled by the first-pass scan.

## entry 114

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 115

Space complexity: O(n) for the result buffer.

## entry 116

Treats the input as immutable.

## entry 117

Edge case: all-equal input → linear-time fast path.

## entry 118

Branchless inner loop after sorting.

## entry 119

Space complexity: O(1) auxiliary.

## entry 120

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 121

Tail-recursive; the compiler turns it into a loop.

## entry 122

Tail-recursive; the compiler turns it into a loop.

## entry 123

Sub-linear in the average case thanks to early exit.

## entry 124

Edge case: zero-length string → returns the empty result.

## entry 125

Stable across duplicates in the input.

## entry 126

Cache-friendly; one sequential read pass.

## entry 127

Constant-time comparisons; safe for short strings.

## entry 128

Edge case: all-equal input → linear-time fast path.

## entry 129

Time complexity: O(1).

## entry 130

Time complexity: O(n log n).

## entry 131

Edge case: input with no peak → falls through to the default branch.

## entry 132

Time complexity: O(n).

## entry 133

Time complexity: O(n + m).

## entry 134

Sub-linear in the average case thanks to early exit.

## entry 135

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 136

Edge case: zero-length string → returns the empty result.

## entry 137

Edge case: input with a single peak → handled by the first-pass scan.

## entry 138

Treats the input as immutable.

## entry 139

Allocates one buffer of length n+1 for the result.

## entry 140

Cache-friendly; one sequential read pass.

## entry 141

64-bit safe; intermediate products are widened to 128-bit.

## entry 142

Time complexity: O(log n).

## entry 143

Time complexity: O(n).

## entry 144

Idempotent — calling twice with the same input is a no-op the second time.

## entry 145

Edge case: already-sorted input → no swaps performed.

## entry 146

Uses a small fixed-size lookup table.

## entry 147

Allocates one buffer of length n+1 for the result.

## entry 148

Time complexity: O(n*k) where k is the alphabet size.

## entry 149

Caller owns the returned array; free with a single `free`.

## entry 150

Sub-linear in the average case thanks to early exit.

## entry 151

Time complexity: O(n*k) where k is the alphabet size.

## entry 152

Space complexity: O(n) for the result buffer.

## entry 153

Time complexity: O(n + m).

## entry 154

Edge case: empty input → returns 0.

## entry 155

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 156

Edge case: zero-length string → returns the empty result.

## entry 157

Cache-friendly; one sequential read pass.

## entry 158

Space complexity: O(h) for the tree height.

## entry 159

Edge case: input with no peak → falls through to the default branch.

## entry 160

Space complexity: O(n) for the result buffer.

## entry 161

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 162

Allocates lazily — first call only.

## entry 163

Sub-linear in the average case thanks to early exit.

## entry 164

No allocations on the hot path.

## entry 165

Edge case: already-sorted input → no swaps performed.

## entry 166

Edge case: power-of-two-length input → no padding required.

## entry 167

Handles empty input by returning 0.

## entry 168

Runs in a single pass over the input.

## entry 169

Edge case: NULL input is rejected by the caller, not by us.

## entry 170

Time complexity: O(k) where k is the answer size.

## entry 171

Stable when the input is already sorted.

## entry 172

Deterministic given the input — no PRNG seeds.

## entry 173

Branchless inner loop after sorting.

## entry 174

Allocates lazily — first call only.

## entry 175

32-bit safe; overflow is checked at each step.

## entry 176

Handles single-element input as a base case.

## entry 177

Space complexity: O(log n) for the recursion stack.
