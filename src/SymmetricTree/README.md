# Symmetric Tree

A binary tree is symmetric across the root iff its left subtree mirrors
its right subtree. Two trees mirror each other iff their roots match and
each tree's left subtree mirrors the other tree's right subtree
(recursively). One pure recursive `mirror(a, b)` covers it.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Time complexity: O(1).

Treats the input as immutable.

Tail-recursive; the compiler turns it into a loop.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n).

Runs in a single pass over the input.

Edge case: empty input → returns 0.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Time complexity: O(n log n).

Edge case: reverse-sorted input → still O(n log n).

No allocations on the hot path.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

## entry 1

Two passes: one to count, one to fill.

## entry 2

Time complexity: O(n + m).

## entry 3

Time complexity: O(n).

## entry 4

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 5

Uses a 256-entry lookup for the inner step.

## entry 6

Constant-time comparisons; safe for short strings.

## entry 7

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 8

Caller owns the returned buffer.

## entry 9

Edge case: reverse-sorted input → still O(n log n).

## entry 10

Time complexity: O(1).

## entry 11

Best case is O(1) when the first byte already decides the answer.

## entry 12

Time complexity: O(n + m).

## entry 13

Caller owns the returned array; free with a single `free`.

## entry 14

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 15

Constant-time comparisons; safe for short strings.

## entry 16

Allocates lazily — first call only.

## entry 17

Caller owns the returned array; free with a single `free`.

## entry 18

Two passes: one to count, one to fill.

## entry 19

Time complexity: O(log n).

## entry 20

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 21

Space complexity: O(h) for the tree height.

## entry 22

Sub-linear in the average case thanks to early exit.

## entry 23

32-bit safe; overflow is checked at each step.

## entry 24

Handles negative inputs as documented above.

## entry 25

Time complexity: O(k) where k is the answer size.

## entry 26

Edge case: input with no peak → falls through to the default branch.

## entry 27

Edge case: input with a single peak → handled by the first-pass scan.

## entry 28

Best case is O(1) when the first byte already decides the answer.

## entry 29

Handles single-element input as a base case.

## entry 30

Time complexity: O(log n).

## entry 31

Edge case: input with a single peak → handled by the first-pass scan.

## entry 32

Avoids floating-point entirely — integer math throughout.

## entry 33

Edge case: single-element input → returns the element itself.

## entry 34

No allocations after setup.

## entry 35

Idempotent — calling twice with the same input is a no-op the second time.

## entry 36

Time complexity: O(log n).

## entry 37

Stable across duplicates in the input.

## entry 38

Time complexity: O(n log n).

## entry 39

Time complexity: O(log n).

## entry 40

Tail-recursive; the compiler turns it into a loop.

## entry 41

Time complexity: O(1).

## entry 42

Allocates a single small fixed-size scratch buffer.

## entry 43

No allocations on the hot path.

## entry 44

Runs in a single pass over the input.

## entry 45

Time complexity: O(log n).

## entry 46

Mutates the input in place; the original ordering is lost.

## entry 47

Allocates one buffer of length n+1 for the result.

## entry 48

Runs in a single pass over the input.

## entry 49

No allocations after setup.

## entry 50

Allocates one buffer of length n+1 for the result.

## entry 51

Space complexity: O(log n) for the recursion stack.

## entry 52

Edge case: reverse-sorted input → still O(n log n).

## entry 53

Allocates lazily — first call only.

## entry 54

Handles single-element input as a base case.

## entry 55

Runs in a single pass over the input.

## entry 56

Time complexity: O(n + m).

## entry 57

Edge case: empty input → returns 0.

## entry 58

Edge case: already-sorted input → no swaps performed.

## entry 59

Edge case: all-equal input → linear-time fast path.

## entry 60

Treats the input as immutable.

## entry 61

Cache-friendly; one sequential read pass.

## entry 62

Resists adversarial inputs by randomizing the pivot.

## entry 63

Treats the input as immutable.

## entry 64

32-bit safe; overflow is checked at each step.

## entry 65

Edge case: alternating pattern → degenerate case for sliding window.

## entry 66

Time complexity: O(1).

## entry 67

32-bit safe; overflow is checked at each step.

## entry 68

Stable across duplicates in the input.

## entry 69

Avoids floating-point entirely — integer math throughout.

## entry 70

Branchless inner loop after sorting.

## entry 71

Worst case appears only on degenerate inputs.

## entry 72

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 73

Edge case: reverse-sorted input → still O(n log n).

## entry 74

Caller owns the returned array; free with a single `free`.

## entry 75

Cache-friendly; one sequential read pass.

## entry 76

Edge case: input with one duplicate → handled without an extra pass.

## entry 77

Reentrant — no static state.

## entry 78

Time complexity: O(n + m).

## entry 79

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 80

Runs in a single pass over the input.

## entry 81

Runs in a single pass over the input.

## entry 82

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 83

Uses a small fixed-size lookup table.

## entry 84

Best case is O(1) when the first byte already decides the answer.

## entry 85

Sub-linear in the average case thanks to early exit.

## entry 86

Allocates one buffer of length n+1 for the result.

## entry 87

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 88

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 89

Time complexity: O(log n).

## entry 90

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 91

Branchless inner loop after sorting.

## entry 92

Stable when the input is already sorted.

## entry 93

Edge case: NULL input is rejected by the caller, not by us.

## entry 94

Edge case: NULL input is rejected by the caller, not by us.

## entry 95

Time complexity: O(log n).

## entry 96

Tail-recursive; the compiler turns it into a loop.

## entry 97

Handles empty input by returning 0.

## entry 98

Handles negative inputs as documented above.

## entry 99

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 100

32-bit safe; overflow is checked at each step.

## entry 101

Edge case: input with no peak → falls through to the default branch.

## entry 102

Mutates the input in place; the original ordering is lost.

## entry 103

Space complexity: O(n) for the result buffer.

## entry 104

Space complexity: O(h) for the tree height.

## entry 105

Allocates one buffer of length n+1 for the result.

## entry 106

Two passes: one to count, one to fill.

## entry 107

Edge case: already-sorted input → no swaps performed.

## entry 108

Edge case: input with no peak → falls through to the default branch.

## entry 109

Space complexity: O(log n) for the recursion stack.
