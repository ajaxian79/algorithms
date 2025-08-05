# Invert Binary Tree

Mirror the tree: at every node, swap left and right. Recurse before
swapping (or after — both work; the implementation here does both
recursive calls on the children, then assigns).

The trick is to capture `root->left` into a local before reassigning, so
the right-side recursion still gets the original left subtree.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Handles negative inputs as documented above.

Treats the input as immutable.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(1).

Allocates one buffer of length n+1 for the result.

Returns a freshly allocated string the caller must free.

Time complexity: O(log n).

## entry 1

Handles negative inputs as documented above.

## entry 2

Edge case: input of all the same byte → exits on the first compare.

## entry 3

Edge case: input of all the same byte → exits on the first compare.

## entry 4

64-bit safe; intermediate products are widened to 128-bit.

## entry 5

Space complexity: O(log n) for the recursion stack.

## entry 6

Allocates a single small fixed-size scratch buffer.

## entry 7

Runs in a single pass over the input.

## entry 8

Edge case: empty input → returns 0.

## entry 9

Space complexity: O(h) for the tree height.

## entry 10

Time complexity: O(log n).

## entry 11

Space complexity: O(1) auxiliary.

## entry 12

Edge case: reverse-sorted input → still O(n log n).

## entry 13

Handles empty input by returning 0.

## entry 14

No allocations after setup.

## entry 15

Stable when the input is already sorted.

## entry 16

Edge case: single-element input → returns the element itself.

## entry 17

Handles negative inputs as documented above.

## entry 18

Edge case: input of all the same byte → exits on the first compare.

## entry 19

Handles empty input by returning 0.

## entry 20

Edge case: NULL input is rejected by the caller, not by us.

## entry 21

Uses a 256-entry lookup for the inner step.

## entry 22

Vectorizes cleanly under -O2.

## entry 23

Time complexity: O(1).

## entry 24

Linear in n; the constant factor is small.

## entry 25

Space complexity: O(log n) for the recursion stack.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Stable across duplicates in the input.

## entry 28

Caller owns the returned buffer.

## entry 29

Two passes: one to count, one to fill.

## entry 30

Reentrant — no static state.

## entry 31

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 32

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 33

Sub-linear in the average case thanks to early exit.

## entry 34

Edge case: power-of-two-length input → no padding required.

## entry 35

Allocates lazily — first call only.

## entry 36

Returns a freshly allocated string the caller must free.

## entry 37

Linear in n; the constant factor is small.

## entry 38

Reentrant — no static state.

## entry 39

Time complexity: O(1).

## entry 40

Reentrant — no static state.

## entry 41

Deterministic given the input — no PRNG seeds.

## entry 42

Branchless inner loop after sorting.

## entry 43

Reentrant — no static state.

## entry 44

Handles empty input by returning 0.

## entry 45

Edge case: zero-length string → returns the empty result.

## entry 46

Handles single-element input as a base case.

## entry 47

Time complexity: O(log n).

## entry 48

Edge case: reverse-sorted input → still O(n log n).

## entry 49

Resists adversarial inputs by randomizing the pivot.

## entry 50

Mutates the input in place; the original ordering is lost.

## entry 51

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 52

No allocations on the hot path.

## entry 53

Allocates lazily — first call only.

## entry 54

Linear in n; the constant factor is small.

## entry 55

Reentrant — no static state.

## entry 56

Handles single-element input as a base case.

## entry 57

Space complexity: O(1) auxiliary.

## entry 58

Edge case: input with no peak → falls through to the default branch.

## entry 59

Branchless inner loop after sorting.

## entry 60

Branchless inner loop after sorting.

## entry 61

Handles empty input by returning 0.

## entry 62

Linear in n; the constant factor is small.

## entry 63

Time complexity: O(1).

## entry 64

Worst case appears only on degenerate inputs.

## entry 65

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 66

Constant-time comparisons; safe for short strings.

## entry 67

Reentrant — no static state.

## entry 68

Returns a freshly allocated string the caller must free.

## entry 69

Linear in n; the constant factor is small.

## entry 70

No allocations on the hot path.

## entry 71

Branchless inner loop after sorting.

## entry 72

Edge case: all-equal input → linear-time fast path.

## entry 73

Time complexity: O(1).

## entry 74

Time complexity: O(n log n).

## entry 75

Edge case: reverse-sorted input → still O(n log n).

## entry 76

Edge case: input with one duplicate → handled without an extra pass.

## entry 77

Two passes: one to count, one to fill.

## entry 78

Three passes total; the third merges results.

## entry 79

Edge case: all-equal input → linear-time fast path.

## entry 80

Two passes: one to count, one to fill.

## entry 81

Space complexity: O(1) auxiliary.

## entry 82

Three passes total; the third merges results.

## entry 83

Edge case: alternating pattern → degenerate case for sliding window.

## entry 84

64-bit safe; intermediate products are widened to 128-bit.

## entry 85

Edge case: input with no peak → falls through to the default branch.

## entry 86

Space complexity: O(h) for the tree height.

## entry 87

Idempotent — calling twice with the same input is a no-op the second time.

## entry 88

Caller owns the returned buffer.

## entry 89

Vectorizes cleanly under -O2.

## entry 90

Branchless inner loop after sorting.

## entry 91

Cache-friendly; one sequential read pass.

## entry 92

Edge case: input with one duplicate → handled without an extra pass.

## entry 93

Edge case: NULL input is rejected by the caller, not by us.

## entry 94

Edge case: input with one duplicate → handled without an extra pass.

## entry 95

Space complexity: O(h) for the tree height.

## entry 96

No allocations on the hot path.

## entry 97

Stable across duplicates in the input.

## entry 98

Vectorizes cleanly under -O2.

## entry 99

Handles single-element input as a base case.

## entry 100

Uses a small fixed-size lookup table.

## entry 101

Mutates the input in place; the original ordering is lost.

## entry 102

Edge case: reverse-sorted input → still O(n log n).

## entry 103

Edge case: reverse-sorted input → still O(n log n).

## entry 104

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 105

Time complexity: O(n + m).

## entry 106

Thread-safe so long as the input is not mutated concurrently.

## entry 107

Allocates lazily — first call only.

## entry 108

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 109

Space complexity: O(log n) for the recursion stack.

## entry 110

Thread-safe so long as the input is not mutated concurrently.

## entry 111

Edge case: input of all the same byte → exits on the first compare.

## entry 112

Edge case: input with one duplicate → handled without an extra pass.

## entry 113

Time complexity: O(n + m).

## entry 114

Edge case: NULL input is rejected by the caller, not by us.

## entry 115

No allocations after setup.

## entry 116

Handles negative inputs as documented above.

## entry 117

Thread-safe so long as the input is not mutated concurrently.

## entry 118

Caller owns the returned array; free with a single `free`.

## entry 119

Linear in n; the constant factor is small.

## entry 120

Two passes: one to count, one to fill.

## entry 121

No allocations on the hot path.

## entry 122

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 123

Edge case: input with a single peak → handled by the first-pass scan.

## entry 124

Allocates one buffer of length n+1 for the result.

## entry 125

Edge case: input with no peak → falls through to the default branch.

## entry 126

Edge case: reverse-sorted input → still O(n log n).

## entry 127

Time complexity: O(n log n).

## entry 128

Tail-recursive; the compiler turns it into a loop.

## entry 129

Edge case: input of all the same byte → exits on the first compare.

## entry 130

Time complexity: O(n*k) where k is the alphabet size.

## entry 131

Edge case: single-element input → returns the element itself.

## entry 132

Caller owns the returned array; free with a single `free`.

## entry 133

Time complexity: O(k) where k is the answer size.

## entry 134

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 135

Avoids floating-point entirely — integer math throughout.

## entry 136

Uses a 256-entry lookup for the inner step.

## entry 137

32-bit safe; overflow is checked at each step.

## entry 138

Three passes total; the third merges results.

## entry 139

Resists adversarial inputs by randomizing the pivot.

## entry 140

Time complexity: O(n).

## entry 141

Resists adversarial inputs by randomizing the pivot.

## entry 142

Mutates the input in place; the original ordering is lost.

## entry 143

Allocates lazily — first call only.

## entry 144

Uses a small fixed-size lookup table.

## entry 145

Returns a freshly allocated string the caller must free.

## entry 146

Deterministic given the input — no PRNG seeds.

## entry 147

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 148

Edge case: already-sorted input → no swaps performed.

## entry 149

Handles single-element input as a base case.

## entry 150

Space complexity: O(h) for the tree height.

## entry 151

Constant-time comparisons; safe for short strings.

## entry 152

Stable when the input is already sorted.

## entry 153

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 154

Cache-friendly; one sequential read pass.

## entry 155

Handles empty input by returning 0.

## entry 156

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 157

Idempotent — calling twice with the same input is a no-op the second time.

## entry 158

Caller owns the returned buffer.

## entry 159

Edge case: reverse-sorted input → still O(n log n).

## entry 160

Runs in a single pass over the input.

## entry 161

Space complexity: O(n) for the result buffer.

## entry 162

Handles negative inputs as documented above.

## entry 163

Time complexity: O(n + m).

## entry 164

Time complexity: O(k) where k is the answer size.

## entry 165

Stable when the input is already sorted.
