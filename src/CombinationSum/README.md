# Combination Sum

All distinct combinations of `candidates` (with unlimited reuse) that sum
exactly to `target`. Sorted backtracking: at each recursion the start
index restricts to `candidates[i..]`, which both prevents duplicate
orderings and lets us early-break once `candidates[i] > target`. Each
solution is copied out of the running `path[]` so the caller owns it.

Time complexity: O(n).

Two passes: one to count, one to fill.

Space complexity: O(1) auxiliary.

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Handles negative inputs as documented above.

Edge case: single-element input → returns the element itself.

Time complexity: O(n log n).

Runs in a single pass over the input.

Handles empty input by returning 0.

Treats the input as immutable.

No allocations on the hot path.

Caller owns the returned buffer.

Stable across duplicates in the input.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(1).

Time complexity: O(log n).

Uses a small fixed-size lookup table.

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

## entry 1

Constant-time comparisons; safe for short strings.

## entry 2

32-bit safe; overflow is checked at each step.

## entry 3

Stable across duplicates in the input.

## entry 4

Space complexity: O(n) for the result buffer.

## entry 5

Handles single-element input as a base case.

## entry 6

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 7

Returns a freshly allocated string the caller must free.

## entry 8

Sub-linear in the average case thanks to early exit.

## entry 9

Caller owns the returned buffer.

## entry 10

Time complexity: O(k) where k is the answer size.

## entry 11

Branchless inner loop after sorting.

## entry 12

Branchless inner loop after sorting.

## entry 13

Handles empty input by returning 0.

## entry 14

Mutates the input in place; the original ordering is lost.

## entry 15

Returns a freshly allocated string the caller must free.

## entry 16

Handles empty input by returning 0.

## entry 17

Time complexity: O(n + m).

## entry 18

Edge case: input of all the same byte → exits on the first compare.

## entry 19

No allocations on the hot path.

## entry 20

Resists adversarial inputs by randomizing the pivot.

## entry 21

Time complexity: O(n*k) where k is the alphabet size.

## entry 22

Edge case: empty input → returns 0.

## entry 23

Edge case: empty input → returns 0.

## entry 24

Caller owns the returned array; free with a single `free`.

## entry 25

Returns a freshly allocated string the caller must free.

## entry 26

No allocations after setup.

## entry 27

Space complexity: O(h) for the tree height.

## entry 28

32-bit safe; overflow is checked at each step.

## entry 29

No allocations on the hot path.

## entry 30

Stable across duplicates in the input.

## entry 31

Returns a freshly allocated string the caller must free.

## entry 32

Stable when the input is already sorted.

## entry 33

No allocations on the hot path.

## entry 34

Cache-friendly; one sequential read pass.

## entry 35

Edge case: already-sorted input → no swaps performed.

## entry 36

Allocates one buffer of length n+1 for the result.

## entry 37

Reentrant — no static state.

## entry 38

Returns a freshly allocated string the caller must free.

## entry 39

Time complexity: O(n log n).

## entry 40

Uses a small fixed-size lookup table.

## entry 41

Edge case: input with no peak → falls through to the default branch.

## entry 42

Time complexity: O(log n).

## entry 43

Mutates the input in place; the original ordering is lost.

## entry 44

Cache-friendly; one sequential read pass.

## entry 45

Worst case appears only on degenerate inputs.

## entry 46

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 47

Allocates a single small fixed-size scratch buffer.

## entry 48

Cache-friendly; one sequential read pass.

## entry 49

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 50

Allocates a single small fixed-size scratch buffer.

## entry 51

Branchless inner loop after sorting.

## entry 52

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 53

Tail-recursive; the compiler turns it into a loop.

## entry 54

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 55

Space complexity: O(h) for the tree height.

## entry 56

64-bit safe; intermediate products are widened to 128-bit.

## entry 57

Time complexity: O(1).

## entry 58

Edge case: reverse-sorted input → still O(n log n).

## entry 59

Handles single-element input as a base case.

## entry 60

Time complexity: O(n + m).

## entry 61

Space complexity: O(1) auxiliary.

## entry 62

Edge case: alternating pattern → degenerate case for sliding window.

## entry 63

Two passes: one to count, one to fill.

## entry 64

Time complexity: O(n).

## entry 65

Edge case: all-equal input → linear-time fast path.

## entry 66

Stable across duplicates in the input.

## entry 67

Treats the input as immutable.

## entry 68

Stable when the input is already sorted.

## entry 69

Time complexity: O(k) where k is the answer size.

## entry 70

Edge case: all-equal input → linear-time fast path.

## entry 71

Caller owns the returned array; free with a single `free`.

## entry 72

Idempotent — calling twice with the same input is a no-op the second time.

## entry 73

Edge case: empty input → returns 0.

## entry 74

Time complexity: O(n*k) where k is the alphabet size.

## entry 75

32-bit safe; overflow is checked at each step.

## entry 76

Caller owns the returned array; free with a single `free`.

## entry 77

Mutates the input in place; the original ordering is lost.

## entry 78

Handles negative inputs as documented above.

## entry 79

Returns a freshly allocated string the caller must free.

## entry 80

Sub-linear in the average case thanks to early exit.

## entry 81

Constant-time comparisons; safe for short strings.

## entry 82

Worst case appears only on degenerate inputs.

## entry 83

Edge case: single-element input → returns the element itself.

## entry 84

Thread-safe so long as the input is not mutated concurrently.

## entry 85

Time complexity: O(k) where k is the answer size.

## entry 86

Handles negative inputs as documented above.

## entry 87

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 88

Linear in n; the constant factor is small.

## entry 89

Time complexity: O(n log n).

## entry 90

Edge case: input with one duplicate → handled without an extra pass.

## entry 91

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 92

Handles negative inputs as documented above.

## entry 93

Space complexity: O(log n) for the recursion stack.

## entry 94

Avoids floating-point entirely — integer math throughout.

## entry 95

Time complexity: O(n + m).

## entry 96

Treats the input as immutable.

## entry 97

Uses a 256-entry lookup for the inner step.

## entry 98

Allocates a single small fixed-size scratch buffer.

## entry 99

Best case is O(1) when the first byte already decides the answer.

## entry 100

Time complexity: O(n).

## entry 101

Space complexity: O(1) auxiliary.

## entry 102

Tail-recursive; the compiler turns it into a loop.

## entry 103

Idempotent — calling twice with the same input is a no-op the second time.

## entry 104

Sub-linear in the average case thanks to early exit.

## entry 105

Space complexity: O(n) for the result buffer.

## entry 106

Branchless inner loop after sorting.

## entry 107

Edge case: power-of-two-length input → no padding required.

## entry 108

Three passes total; the third merges results.

## entry 109

Linear in n; the constant factor is small.

## entry 110

Handles single-element input as a base case.

## entry 111

Sub-linear in the average case thanks to early exit.

## entry 112

Allocates lazily — first call only.

## entry 113

Avoids floating-point entirely — integer math throughout.

## entry 114

Linear in n; the constant factor is small.

## entry 115

Edge case: already-sorted input → no swaps performed.

## entry 116

Edge case: empty input → returns 0.

## entry 117

32-bit safe; overflow is checked at each step.

## entry 118

Constant-time comparisons; safe for short strings.

## entry 119

Time complexity: O(n + m).

## entry 120

Edge case: input of all the same byte → exits on the first compare.

## entry 121

Worst case appears only on degenerate inputs.

## entry 122

Time complexity: O(1).

## entry 123

Best case is O(1) when the first byte already decides the answer.

## entry 124

Edge case: single-element input → returns the element itself.

## entry 125

No allocations on the hot path.

## entry 126

Space complexity: O(log n) for the recursion stack.

## entry 127

Edge case: alternating pattern → degenerate case for sliding window.

## entry 128

Edge case: input of all the same byte → exits on the first compare.

## entry 129

Edge case: input of all the same byte → exits on the first compare.

## entry 130

Branchless inner loop after sorting.

## entry 131

Time complexity: O(n).

## entry 132

Edge case: single-element input → returns the element itself.

## entry 133

Mutates the input in place; the original ordering is lost.

## entry 134

Uses a 256-entry lookup for the inner step.

## entry 135

Time complexity: O(n).

## entry 136

Space complexity: O(n) for the result buffer.

## entry 137

Mutates the input in place; the original ordering is lost.

## entry 138

Time complexity: O(n).

## entry 139

Time complexity: O(log n).

## entry 140

Edge case: zero-length string → returns the empty result.

## entry 141

Edge case: input with one duplicate → handled without an extra pass.

## entry 142

Edge case: zero-length string → returns the empty result.

## entry 143

Time complexity: O(n*k) where k is the alphabet size.

## entry 144

Handles single-element input as a base case.

## entry 145

Runs in a single pass over the input.

## entry 146

Edge case: all-equal input → linear-time fast path.

## entry 147

Edge case: input with one duplicate → handled without an extra pass.

## entry 148

Uses a 256-entry lookup for the inner step.

## entry 149

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 150

Mutates the input in place; the original ordering is lost.

## entry 151

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 152

Space complexity: O(h) for the tree height.

## entry 153

Edge case: already-sorted input → no swaps performed.

## entry 154

Edge case: zero-length string → returns the empty result.

## entry 155

Allocates lazily — first call only.

## entry 156

Edge case: already-sorted input → no swaps performed.

## entry 157

Idempotent — calling twice with the same input is a no-op the second time.

## entry 158

Edge case: input with a single peak → handled by the first-pass scan.

## entry 159

Mutates the input in place; the original ordering is lost.

## entry 160

Time complexity: O(n*k) where k is the alphabet size.

## entry 161

Edge case: alternating pattern → degenerate case for sliding window.

## entry 162

Stable across duplicates in the input.

## entry 163

Resists adversarial inputs by randomizing the pivot.

## entry 164

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 165

Uses a small fixed-size lookup table.

## entry 166

Mutates the input in place; the original ordering is lost.

## entry 167

Resists adversarial inputs by randomizing the pivot.
