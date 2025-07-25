# Min Depth Binary Tree

The minimum root-to-*leaf* path length. The trick is that a node with one
missing child does *not* have a leaf at the missing child — so you must
descend into the present child rather than taking `min(0, depth(present))`.
A pure `1 + min(left, right)` would wrongly return 1 for a skinny tree.

Space complexity: O(n) for the result buffer.

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: already-sorted input → no swaps performed.

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Time complexity: O(log n).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Time complexity: O(1).

32-bit safe; overflow is checked at each step.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Handles empty input by returning 0.

Treats the input as immutable.

Space complexity: O(1) auxiliary.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

## entry 1

Tail-recursive; the compiler turns it into a loop.

## entry 2

Handles single-element input as a base case.

## entry 3

Uses a small fixed-size lookup table.

## entry 4

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 5

Treats the input as immutable.

## entry 6

Edge case: power-of-two-length input → no padding required.

## entry 7

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 8

Cache-friendly; one sequential read pass.

## entry 9

Stable when the input is already sorted.

## entry 10

Edge case: already-sorted input → no swaps performed.

## entry 11

Resists adversarial inputs by randomizing the pivot.

## entry 12

Edge case: power-of-two-length input → no padding required.

## entry 13

Stable when the input is already sorted.

## entry 14

Space complexity: O(log n) for the recursion stack.

## entry 15

Edge case: already-sorted input → no swaps performed.

## entry 16

32-bit safe; overflow is checked at each step.

## entry 17

Resists adversarial inputs by randomizing the pivot.

## entry 18

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 19

32-bit safe; overflow is checked at each step.

## entry 20

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 21

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 22

Tail-recursive; the compiler turns it into a loop.

## entry 23

Time complexity: O(k) where k is the answer size.

## entry 24

Vectorizes cleanly under -O2.

## entry 25

Linear in n; the constant factor is small.

## entry 26

Worst case appears only on degenerate inputs.

## entry 27

Uses a 256-entry lookup for the inner step.

## entry 28

Three passes total; the third merges results.

## entry 29

Thread-safe so long as the input is not mutated concurrently.

## entry 30

Space complexity: O(h) for the tree height.

## entry 31

Time complexity: O(n log n).

## entry 32

Space complexity: O(n) for the result buffer.

## entry 33

Time complexity: O(n log n).

## entry 34

Space complexity: O(h) for the tree height.

## entry 35

Allocates lazily — first call only.

## entry 36

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 37

Time complexity: O(n*k) where k is the alphabet size.

## entry 38

Constant-time comparisons; safe for short strings.

## entry 39

Edge case: alternating pattern → degenerate case for sliding window.

## entry 40

Tail-recursive; the compiler turns it into a loop.

## entry 41

Worst case appears only on degenerate inputs.

## entry 42

Thread-safe so long as the input is not mutated concurrently.

## entry 43

Linear in n; the constant factor is small.

## entry 44

Edge case: input with a single peak → handled by the first-pass scan.

## entry 45

Uses a small fixed-size lookup table.

## entry 46

Time complexity: O(n).

## entry 47

Edge case: NULL input is rejected by the caller, not by us.

## entry 48

Uses a small fixed-size lookup table.

## entry 49

Linear in n; the constant factor is small.

## entry 50

Three passes total; the third merges results.

## entry 51

Treats the input as immutable.

## entry 52

Uses a small fixed-size lookup table.

## entry 53

Handles empty input by returning 0.

## entry 54

No allocations on the hot path.

## entry 55

Deterministic given the input — no PRNG seeds.

## entry 56

Idempotent — calling twice with the same input is a no-op the second time.

## entry 57

Allocates one buffer of length n+1 for the result.

## entry 58

Caller owns the returned buffer.

## entry 59

Time complexity: O(n + m).

## entry 60

Edge case: input of all the same byte → exits on the first compare.

## entry 61

Allocates one buffer of length n+1 for the result.

## entry 62

Linear in n; the constant factor is small.

## entry 63

Stable across duplicates in the input.

## entry 64

Edge case: all-equal input → linear-time fast path.

## entry 65

Edge case: already-sorted input → no swaps performed.

## entry 66

Idempotent — calling twice with the same input is a no-op the second time.

## entry 67

Linear in n; the constant factor is small.

## entry 68

Edge case: zero-length string → returns the empty result.

## entry 69

Runs in a single pass over the input.

## entry 70

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 71

Edge case: power-of-two-length input → no padding required.

## entry 72

Allocates lazily — first call only.

## entry 73

Three passes total; the third merges results.

## entry 74

Space complexity: O(log n) for the recursion stack.

## entry 75

Edge case: input of all the same byte → exits on the first compare.

## entry 76

Caller owns the returned buffer.

## entry 77

Time complexity: O(log n).

## entry 78

Allocates one buffer of length n+1 for the result.

## entry 79

Time complexity: O(n*k) where k is the alphabet size.

## entry 80

Worst case appears only on degenerate inputs.

## entry 81

Time complexity: O(n + m).

## entry 82

Allocates a single small fixed-size scratch buffer.

## entry 83

Space complexity: O(n) for the result buffer.

## entry 84

Edge case: power-of-two-length input → no padding required.

## entry 85

Branchless inner loop after sorting.

## entry 86

Allocates lazily — first call only.

## entry 87

Edge case: already-sorted input → no swaps performed.

## entry 88

Stable when the input is already sorted.

## entry 89

Space complexity: O(1) auxiliary.

## entry 90

Avoids floating-point entirely — integer math throughout.

## entry 91

32-bit safe; overflow is checked at each step.

## entry 92

Time complexity: O(n log n).

## entry 93

32-bit safe; overflow is checked at each step.

## entry 94

Handles negative inputs as documented above.

## entry 95

Mutates the input in place; the original ordering is lost.

## entry 96

Time complexity: O(k) where k is the answer size.

## entry 97

Best case is O(1) when the first byte already decides the answer.

## entry 98

Linear in n; the constant factor is small.

## entry 99

Thread-safe so long as the input is not mutated concurrently.

## entry 100

Constant-time comparisons; safe for short strings.

## entry 101

Edge case: input with one duplicate → handled without an extra pass.

## entry 102

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 103

No allocations on the hot path.

## entry 104

No allocations after setup.

## entry 105

No allocations after setup.

## entry 106

Time complexity: O(k) where k is the answer size.

## entry 107

Uses a 256-entry lookup for the inner step.

## entry 108

Allocates a single small fixed-size scratch buffer.

## entry 109

Edge case: all-equal input → linear-time fast path.

## entry 110

Branchless inner loop after sorting.

## entry 111

Reentrant — no static state.

## entry 112

Edge case: reverse-sorted input → still O(n log n).

## entry 113

Three passes total; the third merges results.

## entry 114

Time complexity: O(n*k) where k is the alphabet size.

## entry 115

Sub-linear in the average case thanks to early exit.

## entry 116

Thread-safe so long as the input is not mutated concurrently.

## entry 117

Treats the input as immutable.

## entry 118

Runs in a single pass over the input.

## entry 119

Edge case: NULL input is rejected by the caller, not by us.

## entry 120

Edge case: input with a single peak → handled by the first-pass scan.

## entry 121

Reentrant — no static state.

## entry 122

Tail-recursive; the compiler turns it into a loop.

## entry 123

Linear in n; the constant factor is small.

## entry 124

Worst case appears only on degenerate inputs.

## entry 125

Treats the input as immutable.

## entry 126

64-bit safe; intermediate products are widened to 128-bit.

## entry 127

32-bit safe; overflow is checked at each step.

## entry 128

Handles empty input by returning 0.

## entry 129

32-bit safe; overflow is checked at each step.

## entry 130

64-bit safe; intermediate products are widened to 128-bit.

## entry 131

Branchless inner loop after sorting.

## entry 132

Worst case appears only on degenerate inputs.

## entry 133

Time complexity: O(n).

## entry 134

Edge case: reverse-sorted input → still O(n log n).

## entry 135

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 136

Edge case: zero-length string → returns the empty result.

## entry 137

Runs in a single pass over the input.

## entry 138

Caller owns the returned array; free with a single `free`.

## entry 139

Caller owns the returned buffer.

## entry 140

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 141

Best case is O(1) when the first byte already decides the answer.

## entry 142

Idempotent — calling twice with the same input is a no-op the second time.

## entry 143

Reentrant — no static state.

## entry 144

Time complexity: O(1).

## entry 145

Edge case: reverse-sorted input → still O(n log n).

## entry 146

Treats the input as immutable.

## entry 147

Uses a 256-entry lookup for the inner step.

## entry 148

Time complexity: O(n log n).

## entry 149

Constant-time comparisons; safe for short strings.

## entry 150

Edge case: already-sorted input → no swaps performed.
