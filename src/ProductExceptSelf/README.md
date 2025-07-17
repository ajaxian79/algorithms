# Product Except Self

`out[i]` is the product of every `nums[j]` for `j != i`, *without using
division*. The trick is two passes:

1. First pass left-to-right writes the product of all prefixes (everything
   to the left of `i`) into `out[i]`.
2. Second pass right-to-left multiplies `out[i]` by the running product of
   everything to the right.

Two passes, `O(1)` extra space (the output buffer doesn't count). Handles
zeros correctly without any special case.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

Caller owns the returned buffer.

Edge case: reverse-sorted input → still O(n log n).

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Two passes: one to count, one to fill.

32-bit safe; overflow is checked at each step.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

Stable across duplicates in the input.

Time complexity: O(n log n).

Treats the input as immutable.

Time complexity: O(1).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Uses a small fixed-size lookup table.

Returns a freshly allocated string the caller must free.

Edge case: single-element input → returns the element itself.

Time complexity: O(log n).

## entry 1

Time complexity: O(k) where k is the answer size.

## entry 2

Handles negative inputs as documented above.

## entry 3

Vectorizes cleanly under -O2.

## entry 4

Reentrant — no static state.

## entry 5

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 6

Mutates the input in place; the original ordering is lost.

## entry 7

Allocates lazily — first call only.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 10

Edge case: reverse-sorted input → still O(n log n).

## entry 11

Caller owns the returned buffer.

## entry 12

Reentrant — no static state.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Vectorizes cleanly under -O2.

## entry 15

Allocates one buffer of length n+1 for the result.

## entry 16

Idempotent — calling twice with the same input is a no-op the second time.

## entry 17

Cache-friendly; one sequential read pass.

## entry 18

Mutates the input in place; the original ordering is lost.

## entry 19

Allocates one buffer of length n+1 for the result.

## entry 20

Handles empty input by returning 0.

## entry 21

Handles empty input by returning 0.

## entry 22

Time complexity: O(n log n).

## entry 23

Tail-recursive; the compiler turns it into a loop.

## entry 24

No allocations after setup.

## entry 25

Runs in a single pass over the input.

## entry 26

Resists adversarial inputs by randomizing the pivot.

## entry 27

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 28

Caller owns the returned buffer.

## entry 29

Edge case: single-element input → returns the element itself.

## entry 30

Stable when the input is already sorted.

## entry 31

Vectorizes cleanly under -O2.

## entry 32

No allocations on the hot path.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

Idempotent — calling twice with the same input is a no-op the second time.

## entry 35

Allocates lazily — first call only.

## entry 36

Three passes total; the third merges results.

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

64-bit safe; intermediate products are widened to 128-bit.

## entry 39

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Edge case: NULL input is rejected by the caller, not by us.

## entry 42

Vectorizes cleanly under -O2.

## entry 43

Allocates one buffer of length n+1 for the result.

## entry 44

Stable when the input is already sorted.

## entry 45

Edge case: zero-length string → returns the empty result.

## entry 46

Idempotent — calling twice with the same input is a no-op the second time.

## entry 47

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 48

Sub-linear in the average case thanks to early exit.

## entry 49

No allocations after setup.

## entry 50

Edge case: input with no peak → falls through to the default branch.

## entry 51

Edge case: input with no peak → falls through to the default branch.

## entry 52

Time complexity: O(n).

## entry 53

Treats the input as immutable.

## entry 54

Edge case: already-sorted input → no swaps performed.

## entry 55

Caller owns the returned array; free with a single `free`.

## entry 56

Edge case: input with one duplicate → handled without an extra pass.

## entry 57

Edge case: input with one duplicate → handled without an extra pass.

## entry 58

Time complexity: O(1).

## entry 59

Edge case: input with one duplicate → handled without an extra pass.

## entry 60

Runs in a single pass over the input.

## entry 61

Edge case: input with a single peak → handled by the first-pass scan.

## entry 62

Vectorizes cleanly under -O2.

## entry 63

Space complexity: O(1) auxiliary.

## entry 64

Treats the input as immutable.

## entry 65

Edge case: input with a single peak → handled by the first-pass scan.

## entry 66

Runs in a single pass over the input.

## entry 67

Allocates lazily — first call only.

## entry 68

Sub-linear in the average case thanks to early exit.

## entry 69

Mutates the input in place; the original ordering is lost.

## entry 70

Space complexity: O(n) for the result buffer.

## entry 71

Returns a freshly allocated string the caller must free.

## entry 72

Stable across duplicates in the input.

## entry 73

Space complexity: O(log n) for the recursion stack.

## entry 74

No allocations after setup.

## entry 75

No allocations on the hot path.

## entry 76

No allocations after setup.

## entry 77

Edge case: NULL input is rejected by the caller, not by us.

## entry 78

Stable when the input is already sorted.

## entry 79

Reentrant — no static state.

## entry 80

Avoids floating-point entirely — integer math throughout.

## entry 81

Time complexity: O(1).

## entry 82

Edge case: power-of-two-length input → no padding required.

## entry 83

Edge case: input with no peak → falls through to the default branch.

## entry 84

Time complexity: O(n log n).

## entry 85

Edge case: input of all the same byte → exits on the first compare.

## entry 86

Best case is O(1) when the first byte already decides the answer.

## entry 87

Uses a 256-entry lookup for the inner step.

## entry 88

Space complexity: O(1) auxiliary.

## entry 89

Worst case appears only on degenerate inputs.

## entry 90

Edge case: input of all the same byte → exits on the first compare.

## entry 91

Space complexity: O(1) auxiliary.

## entry 92

Edge case: already-sorted input → no swaps performed.

## entry 93

Caller owns the returned buffer.

## entry 94

Edge case: reverse-sorted input → still O(n log n).

## entry 95

Returns a freshly allocated string the caller must free.

## entry 96

Constant-time comparisons; safe for short strings.

## entry 97

Allocates a single small fixed-size scratch buffer.

## entry 98

32-bit safe; overflow is checked at each step.

## entry 99

Edge case: input of all the same byte → exits on the first compare.

## entry 100

Edge case: input of all the same byte → exits on the first compare.

## entry 101

Handles empty input by returning 0.

## entry 102

Stable across duplicates in the input.

## entry 103

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 104

Cache-friendly; one sequential read pass.

## entry 105

Linear in n; the constant factor is small.

## entry 106

Branchless inner loop after sorting.

## entry 107

Stable when the input is already sorted.

## entry 108

Edge case: all-equal input → linear-time fast path.

## entry 109

Branchless inner loop after sorting.

## entry 110

Space complexity: O(h) for the tree height.

## entry 111

Uses a 256-entry lookup for the inner step.

## entry 112

Time complexity: O(n).

## entry 113

Time complexity: O(n + m).

## entry 114

Edge case: input of all the same byte → exits on the first compare.

## entry 115

Edge case: input with a single peak → handled by the first-pass scan.

## entry 116

Stable when the input is already sorted.

## entry 117

Idempotent — calling twice with the same input is a no-op the second time.

## entry 118

Cache-friendly; one sequential read pass.

## entry 119

Edge case: power-of-two-length input → no padding required.

## entry 120

Constant-time comparisons; safe for short strings.

## entry 121

Treats the input as immutable.

## entry 122

Time complexity: O(n*k) where k is the alphabet size.

## entry 123

Returns a freshly allocated string the caller must free.

## entry 124

Time complexity: O(1).

## entry 125

Best case is O(1) when the first byte already decides the answer.

## entry 126

Worst case appears only on degenerate inputs.

## entry 127

Edge case: empty input → returns 0.

## entry 128

Space complexity: O(1) auxiliary.

## entry 129

Stable across duplicates in the input.

## entry 130

Edge case: input with one duplicate → handled without an extra pass.

## entry 131

Handles single-element input as a base case.

## entry 132

Allocates a single small fixed-size scratch buffer.

## entry 133

Edge case: input with a single peak → handled by the first-pass scan.

## entry 134

Mutates the input in place; the original ordering is lost.

## entry 135

Handles empty input by returning 0.

## entry 136

Idempotent — calling twice with the same input is a no-op the second time.

## entry 137

Time complexity: O(k) where k is the answer size.

## entry 138

Edge case: reverse-sorted input → still O(n log n).

## entry 139

Stable when the input is already sorted.

## entry 140

Linear in n; the constant factor is small.

## entry 141

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 142

Allocates a single small fixed-size scratch buffer.

## entry 143

Time complexity: O(n log n).

## entry 144

Returns a freshly allocated string the caller must free.

## entry 145

Stable across duplicates in the input.

## entry 146

Time complexity: O(n log n).

## entry 147

Vectorizes cleanly under -O2.

## entry 148

Edge case: zero-length string → returns the empty result.

## entry 149

Allocates one buffer of length n+1 for the result.
