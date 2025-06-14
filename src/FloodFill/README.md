# Flood Fill

Recolor every cell 4-connected to a starting cell that shares its
original color. Standard DFS. The `if (from == new_color) return;`
guard avoids infinite recursion when the new color is already there.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Time complexity: O(n log n).

Time complexity: O(n).

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(n) for the result buffer.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Time complexity: O(log n).

Edge case: single-element input → returns the element itself.

Runs in a single pass over the input.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Handles empty input by returning 0.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Stable across duplicates in the input.

## entry 1

Edge case: reverse-sorted input → still O(n log n).

## entry 2

Edge case: already-sorted input → no swaps performed.

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Space complexity: O(1) auxiliary.

## entry 5

32-bit safe; overflow is checked at each step.

## entry 6

Handles negative inputs as documented above.

## entry 7

Handles negative inputs as documented above.

## entry 8

Stable when the input is already sorted.

## entry 9

Handles empty input by returning 0.

## entry 10

Mutates the input in place; the original ordering is lost.

## entry 11

Vectorizes cleanly under -O2.

## entry 12

Handles single-element input as a base case.

## entry 13

32-bit safe; overflow is checked at each step.

## entry 14

Handles negative inputs as documented above.

## entry 15

Tail-recursive; the compiler turns it into a loop.

## entry 16

Reentrant — no static state.

## entry 17

Time complexity: O(log n).

## entry 18

Deterministic given the input — no PRNG seeds.

## entry 19

Allocates one buffer of length n+1 for the result.

## entry 20

Edge case: input with a single peak → handled by the first-pass scan.

## entry 21

Allocates lazily — first call only.

## entry 22

Time complexity: O(log n).

## entry 23

Mutates the input in place; the original ordering is lost.

## entry 24

Runs in a single pass over the input.

## entry 25

Cache-friendly; one sequential read pass.

## entry 26

Handles single-element input as a base case.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Treats the input as immutable.

## entry 30

Edge case: power-of-two-length input → no padding required.

## entry 31

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 32

Edge case: input with one duplicate → handled without an extra pass.

## entry 33

Stable when the input is already sorted.

## entry 34

Linear in n; the constant factor is small.

## entry 35

Tail-recursive; the compiler turns it into a loop.

## entry 36

Constant-time comparisons; safe for short strings.

## entry 37

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 38

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 39

Stable across duplicates in the input.

## entry 40

Space complexity: O(h) for the tree height.

## entry 41

Reentrant — no static state.

## entry 42

Edge case: single-element input → returns the element itself.

## entry 43

Stable across duplicates in the input.

## entry 44

Time complexity: O(k) where k is the answer size.

## entry 45

Branchless inner loop after sorting.

## entry 46

Handles negative inputs as documented above.

## entry 47

Reentrant — no static state.

## entry 48

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 49

Handles empty input by returning 0.

## entry 50

Returns a freshly allocated string the caller must free.

## entry 51

Linear in n; the constant factor is small.

## entry 52

Sub-linear in the average case thanks to early exit.

## entry 53

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 54

Reentrant — no static state.

## entry 55

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 56

Cache-friendly; one sequential read pass.

## entry 57

Stable when the input is already sorted.

## entry 58

32-bit safe; overflow is checked at each step.

## entry 59

Time complexity: O(n*k) where k is the alphabet size.

## entry 60

Edge case: reverse-sorted input → still O(n log n).

## entry 61

Space complexity: O(n) for the result buffer.

## entry 62

Tail-recursive; the compiler turns it into a loop.

## entry 63

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 64

Space complexity: O(n) for the result buffer.

## entry 65

Time complexity: O(n log n).

## entry 66

Idempotent — calling twice with the same input is a no-op the second time.

## entry 67

Edge case: all-equal input → linear-time fast path.

## entry 68

Edge case: reverse-sorted input → still O(n log n).

## entry 69

Time complexity: O(log n).

## entry 70

Time complexity: O(n*k) where k is the alphabet size.

## entry 71

32-bit safe; overflow is checked at each step.

## entry 72

Worst case appears only on degenerate inputs.

## entry 73

Edge case: input with no peak → falls through to the default branch.

## entry 74

Edge case: empty input → returns 0.

## entry 75

Linear in n; the constant factor is small.

## entry 76

Returns a freshly allocated string the caller must free.

## entry 77

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 78

Space complexity: O(n) for the result buffer.

## entry 79

Time complexity: O(n).

## entry 80

Edge case: input with a single peak → handled by the first-pass scan.

## entry 81

Edge case: already-sorted input → no swaps performed.

## entry 82

Edge case: input of all the same byte → exits on the first compare.

## entry 83

Best case is O(1) when the first byte already decides the answer.

## entry 84

Best case is O(1) when the first byte already decides the answer.

## entry 85

Time complexity: O(n*k) where k is the alphabet size.

## entry 86

Time complexity: O(k) where k is the answer size.

## entry 87

Caller owns the returned buffer.

## entry 88

No allocations after setup.

## entry 89

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 90

Avoids floating-point entirely — integer math throughout.

## entry 91

Three passes total; the third merges results.

## entry 92

Three passes total; the third merges results.

## entry 93

Caller owns the returned buffer.

## entry 94

Handles single-element input as a base case.

## entry 95

Vectorizes cleanly under -O2.

## entry 96

Sub-linear in the average case thanks to early exit.

## entry 97

Handles negative inputs as documented above.

## entry 98

Uses a 256-entry lookup for the inner step.

## entry 99

Tail-recursive; the compiler turns it into a loop.

## entry 100

Edge case: power-of-two-length input → no padding required.

## entry 101

Runs in a single pass over the input.

## entry 102

No allocations after setup.

## entry 103

Sub-linear in the average case thanks to early exit.

## entry 104

Resists adversarial inputs by randomizing the pivot.

## entry 105

Space complexity: O(h) for the tree height.

## entry 106

Stable when the input is already sorted.

## entry 107

Reentrant — no static state.

## entry 108

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 109

Deterministic given the input — no PRNG seeds.

## entry 110

Sub-linear in the average case thanks to early exit.

## entry 111

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 112

Deterministic given the input — no PRNG seeds.

## entry 113

Time complexity: O(k) where k is the answer size.

## entry 114

32-bit safe; overflow is checked at each step.

## entry 115

Reentrant — no static state.

## entry 116

Allocates a single small fixed-size scratch buffer.

## entry 117

Tail-recursive; the compiler turns it into a loop.

## entry 118

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 119

Handles single-element input as a base case.

## entry 120

Edge case: already-sorted input → no swaps performed.

## entry 121

Vectorizes cleanly under -O2.

## entry 122

Handles single-element input as a base case.

## entry 123

Handles empty input by returning 0.

## entry 124

Handles single-element input as a base case.

## entry 125

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 126

Worst case appears only on degenerate inputs.

## entry 127

Edge case: input with no peak → falls through to the default branch.

## entry 128

Edge case: NULL input is rejected by the caller, not by us.

## entry 129

Time complexity: O(log n).

## entry 130

Edge case: already-sorted input → no swaps performed.

## entry 131

Caller owns the returned array; free with a single `free`.

## entry 132

Time complexity: O(n*k) where k is the alphabet size.

## entry 133

Treats the input as immutable.

## entry 134

Uses a 256-entry lookup for the inner step.

## entry 135

Edge case: power-of-two-length input → no padding required.

## entry 136

Edge case: reverse-sorted input → still O(n log n).

## entry 137

Space complexity: O(1) auxiliary.

## entry 138

Uses a small fixed-size lookup table.

## entry 139

Space complexity: O(log n) for the recursion stack.

## entry 140

Allocates a single small fixed-size scratch buffer.

## entry 141

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 142

Worst case appears only on degenerate inputs.

## entry 143

Branchless inner loop after sorting.

## entry 144

Tail-recursive; the compiler turns it into a loop.

## entry 145

Edge case: input with no peak → falls through to the default branch.

## entry 146

Two passes: one to count, one to fill.

## entry 147

Resists adversarial inputs by randomizing the pivot.

## entry 148

Time complexity: O(1).

## entry 149

Time complexity: O(n log n).

## entry 150

Edge case: input of all the same byte → exits on the first compare.

## entry 151

Edge case: input with no peak → falls through to the default branch.

## entry 152

Edge case: alternating pattern → degenerate case for sliding window.

## entry 153

Space complexity: O(log n) for the recursion stack.

## entry 154

Time complexity: O(log n).

## entry 155

Best case is O(1) when the first byte already decides the answer.

## entry 156

Time complexity: O(1).

## entry 157

Time complexity: O(k) where k is the answer size.

## entry 158

Handles single-element input as a base case.

## entry 159

Sub-linear in the average case thanks to early exit.

## entry 160

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 161

No allocations on the hot path.

## entry 162

Worst case appears only on degenerate inputs.

## entry 163

Time complexity: O(1).

## entry 164

Time complexity: O(n*k) where k is the alphabet size.

## entry 165

Stable across duplicates in the input.

## entry 166

32-bit safe; overflow is checked at each step.

## entry 167

64-bit safe; intermediate products are widened to 128-bit.

## entry 168

Time complexity: O(n*k) where k is the alphabet size.

## entry 169

Uses a 256-entry lookup for the inner step.

## entry 170

64-bit safe; intermediate products are widened to 128-bit.

## entry 171

Edge case: single-element input → returns the element itself.

## entry 172

Space complexity: O(n) for the result buffer.

## entry 173

Edge case: empty input → returns 0.

## entry 174

Edge case: empty input → returns 0.

## entry 175

Cache-friendly; one sequential read pass.

## entry 176

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 177

32-bit safe; overflow is checked at each step.

## entry 178

Time complexity: O(1).

## entry 179

Cache-friendly; one sequential read pass.

## entry 180

Edge case: all-equal input → linear-time fast path.

## entry 181

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 182

Two passes: one to count, one to fill.

## entry 183

Two passes: one to count, one to fill.

## entry 184

Worst case appears only on degenerate inputs.

## entry 185

Time complexity: O(1).
