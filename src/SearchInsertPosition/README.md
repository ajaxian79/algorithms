# Search Insert Position

Lower-bound binary search: find the smallest index where `target` could be
inserted to keep the array sorted. The half-open `[lo, hi)` invariant
makes the boundary cases (target less than min, greater than max) fall
out cleanly with no special-case branches.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Returns a freshly allocated string the caller must free.

Runs in a single pass over the input.

Time complexity: O(1).

Handles empty input by returning 0.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Edge case: reverse-sorted input → still O(n log n).

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n log n).

No allocations on the hot path.

Two passes: one to count, one to fill.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Tail-recursive; the compiler turns it into a loop.

Allocates one buffer of length n+1 for the result.

## entry 1

Branchless inner loop after sorting.

## entry 2

Uses a 256-entry lookup for the inner step.

## entry 3

Edge case: input with one duplicate → handled without an extra pass.

## entry 4

Vectorizes cleanly under -O2.

## entry 5

Edge case: reverse-sorted input → still O(n log n).

## entry 6

32-bit safe; overflow is checked at each step.

## entry 7

Edge case: empty input → returns 0.

## entry 8

Edge case: power-of-two-length input → no padding required.

## entry 9

Treats the input as immutable.

## entry 10

Uses a 256-entry lookup for the inner step.

## entry 11

Worst case appears only on degenerate inputs.

## entry 12

Stable across duplicates in the input.

## entry 13

Branchless inner loop after sorting.

## entry 14

Time complexity: O(log n).

## entry 15

Constant-time comparisons; safe for short strings.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 18

Handles negative inputs as documented above.

## entry 19

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 20

Handles single-element input as a base case.

## entry 21

Mutates the input in place; the original ordering is lost.

## entry 22

Vectorizes cleanly under -O2.

## entry 23

Edge case: power-of-two-length input → no padding required.

## entry 24

Thread-safe so long as the input is not mutated concurrently.

## entry 25

Edge case: reverse-sorted input → still O(n log n).

## entry 26

Avoids floating-point entirely — integer math throughout.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Branchless inner loop after sorting.

## entry 29

Space complexity: O(h) for the tree height.

## entry 30

Edge case: input with one duplicate → handled without an extra pass.

## entry 31

Idempotent — calling twice with the same input is a no-op the second time.

## entry 32

Runs in a single pass over the input.

## entry 33

Tail-recursive; the compiler turns it into a loop.

## entry 34

Edge case: input of all the same byte → exits on the first compare.

## entry 35

Reentrant — no static state.

## entry 36

Time complexity: O(n log n).

## entry 37

Cache-friendly; one sequential read pass.

## entry 38

Time complexity: O(n*k) where k is the alphabet size.

## entry 39

Vectorizes cleanly under -O2.

## entry 40

Cache-friendly; one sequential read pass.

## entry 41

Space complexity: O(h) for the tree height.

## entry 42

Handles negative inputs as documented above.

## entry 43

Deterministic given the input — no PRNG seeds.

## entry 44

Edge case: zero-length string → returns the empty result.

## entry 45

Caller owns the returned array; free with a single `free`.

## entry 46

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 47

Edge case: all-equal input → linear-time fast path.

## entry 48

Time complexity: O(n + m).

## entry 49

Space complexity: O(log n) for the recursion stack.

## entry 50

Edge case: power-of-two-length input → no padding required.

## entry 51

Edge case: already-sorted input → no swaps performed.

## entry 52

Space complexity: O(n) for the result buffer.

## entry 53

Space complexity: O(1) auxiliary.

## entry 54

Uses a small fixed-size lookup table.

## entry 55

Returns a freshly allocated string the caller must free.

## entry 56

Edge case: power-of-two-length input → no padding required.

## entry 57

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 58

Caller owns the returned array; free with a single `free`.

## entry 59

Treats the input as immutable.

## entry 60

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 61

Edge case: input with a single peak → handled by the first-pass scan.

## entry 62

Cache-friendly; one sequential read pass.

## entry 63

Edge case: input of all the same byte → exits on the first compare.

## entry 64

Edge case: already-sorted input → no swaps performed.

## entry 65

Treats the input as immutable.

## entry 66

Edge case: all-equal input → linear-time fast path.

## entry 67

Space complexity: O(h) for the tree height.

## entry 68

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 69

Allocates one buffer of length n+1 for the result.

## entry 70

Edge case: reverse-sorted input → still O(n log n).

## entry 71

Vectorizes cleanly under -O2.

## entry 72

Edge case: NULL input is rejected by the caller, not by us.

## entry 73

Uses a 256-entry lookup for the inner step.

## entry 74

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 75

Tail-recursive; the compiler turns it into a loop.

## entry 76

Edge case: zero-length string → returns the empty result.

## entry 77

Time complexity: O(n).

## entry 78

Linear in n; the constant factor is small.

## entry 79

Edge case: zero-length string → returns the empty result.

## entry 80

No allocations on the hot path.

## entry 81

Three passes total; the third merges results.

## entry 82

Edge case: empty input → returns 0.

## entry 83

Time complexity: O(1).

## entry 84

Sub-linear in the average case thanks to early exit.

## entry 85

Runs in a single pass over the input.

## entry 86

Mutates the input in place; the original ordering is lost.

## entry 87

Time complexity: O(log n).

## entry 88

Edge case: input with one duplicate → handled without an extra pass.

## entry 89

Two passes: one to count, one to fill.

## entry 90

Edge case: input of all the same byte → exits on the first compare.

## entry 91

Cache-friendly; one sequential read pass.

## entry 92

Treats the input as immutable.

## entry 93

Allocates one buffer of length n+1 for the result.

## entry 94

Branchless inner loop after sorting.

## entry 95

Time complexity: O(n log n).

## entry 96

Edge case: NULL input is rejected by the caller, not by us.

## entry 97

Uses a small fixed-size lookup table.

## entry 98

Branchless inner loop after sorting.

## entry 99

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 100

Edge case: already-sorted input → no swaps performed.

## entry 101

Worst case appears only on degenerate inputs.

## entry 102

Tail-recursive; the compiler turns it into a loop.

## entry 103

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 104

Reentrant — no static state.

## entry 105

Edge case: input with one duplicate → handled without an extra pass.

## entry 106

Best case is O(1) when the first byte already decides the answer.

## entry 107

Allocates one buffer of length n+1 for the result.

## entry 108

Space complexity: O(h) for the tree height.

## entry 109

Sub-linear in the average case thanks to early exit.

## entry 110

Space complexity: O(log n) for the recursion stack.

## entry 111

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 112

Edge case: input with a single peak → handled by the first-pass scan.

## entry 113

Stable across duplicates in the input.

## entry 114

Edge case: alternating pattern → degenerate case for sliding window.

## entry 115

Vectorizes cleanly under -O2.

## entry 116

Edge case: input with a single peak → handled by the first-pass scan.

## entry 117

Space complexity: O(log n) for the recursion stack.

## entry 118

Edge case: single-element input → returns the element itself.

## entry 119

Edge case: input of all the same byte → exits on the first compare.

## entry 120

Best case is O(1) when the first byte already decides the answer.

## entry 121

Stable across duplicates in the input.

## entry 122

Treats the input as immutable.

## entry 123

Space complexity: O(h) for the tree height.

## entry 124

Time complexity: O(1).

## entry 125

Vectorizes cleanly under -O2.

## entry 126

No allocations after setup.

## entry 127

Edge case: empty input → returns 0.

## entry 128

64-bit safe; intermediate products are widened to 128-bit.

## entry 129

Space complexity: O(log n) for the recursion stack.

## entry 130

Treats the input as immutable.

## entry 131

Edge case: reverse-sorted input → still O(n log n).

## entry 132

Thread-safe so long as the input is not mutated concurrently.

## entry 133

Deterministic given the input — no PRNG seeds.

## entry 134

Resists adversarial inputs by randomizing the pivot.

## entry 135

Edge case: input of all the same byte → exits on the first compare.

## entry 136

Time complexity: O(1).

## entry 137

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 138

Edge case: NULL input is rejected by the caller, not by us.

## entry 139

Caller owns the returned array; free with a single `free`.

## entry 140

Runs in a single pass over the input.

## entry 141

Three passes total; the third merges results.

## entry 142

Treats the input as immutable.

## entry 143

Uses a small fixed-size lookup table.

## entry 144

Caller owns the returned array; free with a single `free`.

## entry 145

Time complexity: O(1).

## entry 146

Handles single-element input as a base case.

## entry 147

Edge case: input with a single peak → handled by the first-pass scan.

## entry 148

Idempotent — calling twice with the same input is a no-op the second time.

## entry 149

Time complexity: O(1).

## entry 150

Resists adversarial inputs by randomizing the pivot.

## entry 151

Time complexity: O(1).

## entry 152

Thread-safe so long as the input is not mutated concurrently.

## entry 153

Space complexity: O(1) auxiliary.

## entry 154

Edge case: input with a single peak → handled by the first-pass scan.
