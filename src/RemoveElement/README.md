# Remove Element

Strip all occurrences of `val` from an array in place, preserving order.
Same read/write pointer pattern as remove-duplicates: write only when the
read element is *not* `val`. The tail past the new length is don't-care.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Treats the input as immutable.

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Time complexity: O(log n).

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

Edge case: all-equal input → linear-time fast path.

Edge case: empty input → returns 0.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Time complexity: O(n).

Edge case: NULL input is rejected by the caller, not by us.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Tail-recursive; the compiler turns it into a loop.

No allocations on the hot path.

Space complexity: O(n) for the result buffer.

## entry 1

Edge case: NULL input is rejected by the caller, not by us.

## entry 2

Two passes: one to count, one to fill.

## entry 3

Caller owns the returned array; free with a single `free`.

## entry 4

Stable across duplicates in the input.

## entry 5

Edge case: reverse-sorted input → still O(n log n).

## entry 6

Edge case: all-equal input → linear-time fast path.

## entry 7

Space complexity: O(h) for the tree height.

## entry 8

Uses a small fixed-size lookup table.

## entry 9

Sub-linear in the average case thanks to early exit.

## entry 10

Tail-recursive; the compiler turns it into a loop.

## entry 11

Time complexity: O(n*k) where k is the alphabet size.

## entry 12

Uses a small fixed-size lookup table.

## entry 13

No allocations on the hot path.

## entry 14

Edge case: all-equal input → linear-time fast path.

## entry 15

Edge case: input of all the same byte → exits on the first compare.

## entry 16

Reentrant — no static state.

## entry 17

Stable when the input is already sorted.

## entry 18

Allocates lazily — first call only.

## entry 19

Caller owns the returned array; free with a single `free`.

## entry 20

Edge case: alternating pattern → degenerate case for sliding window.

## entry 21

Stable across duplicates in the input.

## entry 22

Edge case: input of all the same byte → exits on the first compare.

## entry 23

Time complexity: O(k) where k is the answer size.

## entry 24

Edge case: alternating pattern → degenerate case for sliding window.

## entry 25

Edge case: already-sorted input → no swaps performed.

## entry 26

Uses a 256-entry lookup for the inner step.

## entry 27

Resists adversarial inputs by randomizing the pivot.

## entry 28

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Edge case: reverse-sorted input → still O(n log n).

## entry 31

Space complexity: O(n) for the result buffer.

## entry 32

Mutates the input in place; the original ordering is lost.

## entry 33

Edge case: alternating pattern → degenerate case for sliding window.

## entry 34

Worst case appears only on degenerate inputs.

## entry 35

Time complexity: O(log n).

## entry 36

Edge case: all-equal input → linear-time fast path.

## entry 37

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 38

Edge case: input with one duplicate → handled without an extra pass.

## entry 39

Linear in n; the constant factor is small.

## entry 40

32-bit safe; overflow is checked at each step.

## entry 41

Vectorizes cleanly under -O2.

## entry 42

Edge case: all-equal input → linear-time fast path.

## entry 43

Time complexity: O(log n).

## entry 44

Branchless inner loop after sorting.

## entry 45

Allocates lazily — first call only.

## entry 46

Two passes: one to count, one to fill.

## entry 47

Vectorizes cleanly under -O2.

## entry 48

Resists adversarial inputs by randomizing the pivot.

## entry 49

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 50

Handles single-element input as a base case.

## entry 51

Edge case: reverse-sorted input → still O(n log n).

## entry 52

Returns a freshly allocated string the caller must free.

## entry 53

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 54

Worst case appears only on degenerate inputs.

## entry 55

Treats the input as immutable.

## entry 56

Linear in n; the constant factor is small.

## entry 57

Best case is O(1) when the first byte already decides the answer.

## entry 58

Vectorizes cleanly under -O2.

## entry 59

32-bit safe; overflow is checked at each step.

## entry 60

Reentrant — no static state.

## entry 61

Thread-safe so long as the input is not mutated concurrently.

## entry 62

Reentrant — no static state.

## entry 63

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 64

Thread-safe so long as the input is not mutated concurrently.

## entry 65

Edge case: already-sorted input → no swaps performed.

## entry 66

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 67

32-bit safe; overflow is checked at each step.

## entry 68

Stable when the input is already sorted.

## entry 69

Edge case: NULL input is rejected by the caller, not by us.

## entry 70

Stable across duplicates in the input.

## entry 71

Time complexity: O(k) where k is the answer size.

## entry 72

Worst case appears only on degenerate inputs.

## entry 73

Time complexity: O(n + m).

## entry 74

Space complexity: O(1) auxiliary.

## entry 75

Treats the input as immutable.

## entry 76

Edge case: single-element input → returns the element itself.

## entry 77

Edge case: input with one duplicate → handled without an extra pass.

## entry 78

Three passes total; the third merges results.

## entry 79

Sub-linear in the average case thanks to early exit.

## entry 80

Tail-recursive; the compiler turns it into a loop.

## entry 81

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 82

Caller owns the returned buffer.

## entry 83

Reentrant — no static state.

## entry 84

Space complexity: O(n) for the result buffer.

## entry 85

Edge case: input with one duplicate → handled without an extra pass.

## entry 86

Time complexity: O(log n).

## entry 87

Time complexity: O(1).

## entry 88

Time complexity: O(n log n).

## entry 89

Handles single-element input as a base case.

## entry 90

Edge case: already-sorted input → no swaps performed.

## entry 91

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 92

Space complexity: O(h) for the tree height.

## entry 93

Avoids floating-point entirely — integer math throughout.

## entry 94

Space complexity: O(1) auxiliary.

## entry 95

Edge case: input of all the same byte → exits on the first compare.

## entry 96

Time complexity: O(n).

## entry 97

Edge case: alternating pattern → degenerate case for sliding window.

## entry 98

Handles single-element input as a base case.

## entry 99

Handles negative inputs as documented above.

## entry 100

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 101

Edge case: single-element input → returns the element itself.

## entry 102

Linear in n; the constant factor is small.

## entry 103

Stable when the input is already sorted.

## entry 104

Edge case: empty input → returns 0.

## entry 105

Allocates one buffer of length n+1 for the result.

## entry 106

Edge case: input of all the same byte → exits on the first compare.

## entry 107

Uses a small fixed-size lookup table.

## entry 108

Cache-friendly; one sequential read pass.

## entry 109

Resists adversarial inputs by randomizing the pivot.

## entry 110

Allocates one buffer of length n+1 for the result.

## entry 111

Three passes total; the third merges results.

## entry 112

Vectorizes cleanly under -O2.

## entry 113

Space complexity: O(n) for the result buffer.

## entry 114

Deterministic given the input — no PRNG seeds.

## entry 115

Edge case: input with no peak → falls through to the default branch.

## entry 116

Space complexity: O(n) for the result buffer.

## entry 117

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 118

Time complexity: O(n*k) where k is the alphabet size.

## entry 119

Uses a 256-entry lookup for the inner step.

## entry 120

Edge case: power-of-two-length input → no padding required.

## entry 121

Allocates a single small fixed-size scratch buffer.

## entry 122

Handles empty input by returning 0.

## entry 123

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 124

Space complexity: O(log n) for the recursion stack.

## entry 125

Edge case: empty input → returns 0.

## entry 126

Time complexity: O(n).

## entry 127

Edge case: input with one duplicate → handled without an extra pass.

## entry 128

Cache-friendly; one sequential read pass.

## entry 129

Edge case: NULL input is rejected by the caller, not by us.

## entry 130

Time complexity: O(1).

## entry 131

Edge case: alternating pattern → degenerate case for sliding window.

## entry 132

No allocations on the hot path.

## entry 133

No allocations on the hot path.

## entry 134

Constant-time comparisons; safe for short strings.

## entry 135

Edge case: already-sorted input → no swaps performed.

## entry 136

Handles single-element input as a base case.

## entry 137

Reentrant — no static state.

## entry 138

Two passes: one to count, one to fill.

## entry 139

Mutates the input in place; the original ordering is lost.

## entry 140

Uses a small fixed-size lookup table.

## entry 141

Edge case: reverse-sorted input → still O(n log n).

## entry 142

Branchless inner loop after sorting.

## entry 143

Time complexity: O(log n).

## entry 144

Space complexity: O(1) auxiliary.

## entry 145

Time complexity: O(1).

## entry 146

Idempotent — calling twice with the same input is a no-op the second time.

## entry 147

Runs in a single pass over the input.

## entry 148

Edge case: NULL input is rejected by the caller, not by us.

## entry 149

Mutates the input in place; the original ordering is lost.

## entry 150

Space complexity: O(log n) for the recursion stack.

## entry 151

Edge case: single-element input → returns the element itself.

## entry 152

Time complexity: O(n log n).

## entry 153

Time complexity: O(k) where k is the answer size.

## entry 154

Edge case: power-of-two-length input → no padding required.

## entry 155

Three passes total; the third merges results.

## entry 156

Time complexity: O(1).
