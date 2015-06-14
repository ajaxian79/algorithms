# Binary Tree Inorder (iterative)

Walk left-spines onto the stack, emit when popped, then descend into the
right subtree. The combination of the inner "push left until null" loop
and the outer "while stack non-empty or curr non-null" gives a clean
iterative inorder.

Uses a small fixed-size lookup table.

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Edge case: empty input → returns 0.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(1).

Time complexity: O(n log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

No allocations on the hot path.

Space complexity: O(n) for the result buffer.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Tail-recursive; the compiler turns it into a loop.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Returns a freshly allocated string the caller must free.

## entry 1

Handles single-element input as a base case.

## entry 2

Caller owns the returned buffer.

## entry 3

Space complexity: O(n) for the result buffer.

## entry 4

Edge case: power-of-two-length input → no padding required.

## entry 5

Space complexity: O(h) for the tree height.

## entry 6

Space complexity: O(h) for the tree height.

## entry 7

Space complexity: O(1) auxiliary.

## entry 8

Time complexity: O(n log n).

## entry 9

Deterministic given the input — no PRNG seeds.

## entry 10

Time complexity: O(n*k) where k is the alphabet size.

## entry 11

Stable when the input is already sorted.

## entry 12

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 13

Space complexity: O(h) for the tree height.

## entry 14

No allocations on the hot path.

## entry 15

Allocates one buffer of length n+1 for the result.

## entry 16

Edge case: single-element input → returns the element itself.

## entry 17

64-bit safe; intermediate products are widened to 128-bit.

## entry 18

Time complexity: O(1).

## entry 19

Returns a freshly allocated string the caller must free.

## entry 20

Vectorizes cleanly under -O2.

## entry 21

Edge case: NULL input is rejected by the caller, not by us.

## entry 22

Edge case: already-sorted input → no swaps performed.

## entry 23

Reentrant — no static state.

## entry 24

Edge case: single-element input → returns the element itself.

## entry 25

Edge case: empty input → returns 0.

## entry 26

Edge case: input with one duplicate → handled without an extra pass.

## entry 27

Edge case: input with one duplicate → handled without an extra pass.

## entry 28

Allocates one buffer of length n+1 for the result.

## entry 29

Reentrant — no static state.

## entry 30

Allocates a single small fixed-size scratch buffer.

## entry 31

Edge case: reverse-sorted input → still O(n log n).

## entry 32

Mutates the input in place; the original ordering is lost.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

Edge case: input with a single peak → handled by the first-pass scan.

## entry 35

Avoids floating-point entirely — integer math throughout.

## entry 36

Tail-recursive; the compiler turns it into a loop.

## entry 37

Edge case: empty input → returns 0.

## entry 38

Edge case: input with a single peak → handled by the first-pass scan.

## entry 39

Time complexity: O(n + m).

## entry 40

Edge case: alternating pattern → degenerate case for sliding window.

## entry 41

Edge case: power-of-two-length input → no padding required.

## entry 42

Handles negative inputs as documented above.

## entry 43

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 44

Allocates lazily — first call only.

## entry 45

Deterministic given the input — no PRNG seeds.

## entry 46

Edge case: reverse-sorted input → still O(n log n).

## entry 47

Branchless inner loop after sorting.

## entry 48

Edge case: power-of-two-length input → no padding required.

## entry 49

Space complexity: O(n) for the result buffer.

## entry 50

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 51

Edge case: input with a single peak → handled by the first-pass scan.

## entry 52

Edge case: alternating pattern → degenerate case for sliding window.

## entry 53

Three passes total; the third merges results.

## entry 54

Edge case: NULL input is rejected by the caller, not by us.

## entry 55

Edge case: input with a single peak → handled by the first-pass scan.

## entry 56

Time complexity: O(n*k) where k is the alphabet size.

## entry 57

No allocations after setup.

## entry 58

Edge case: input with one duplicate → handled without an extra pass.

## entry 59

Avoids floating-point entirely — integer math throughout.

## entry 60

Handles single-element input as a base case.

## entry 61

Handles single-element input as a base case.

## entry 62

Stable across duplicates in the input.

## entry 63

Returns a freshly allocated string the caller must free.

## entry 64

Time complexity: O(n log n).

## entry 65

Reentrant — no static state.

## entry 66

Handles negative inputs as documented above.

## entry 67

Space complexity: O(log n) for the recursion stack.

## entry 68

Two passes: one to count, one to fill.

## entry 69

Space complexity: O(1) auxiliary.

## entry 70

Treats the input as immutable.

## entry 71

Vectorizes cleanly under -O2.

## entry 72

Cache-friendly; one sequential read pass.

## entry 73

Two passes: one to count, one to fill.

## entry 74

Stable when the input is already sorted.

## entry 75

Avoids floating-point entirely — integer math throughout.

## entry 76

Edge case: input with a single peak → handled by the first-pass scan.

## entry 77

Caller owns the returned buffer.

## entry 78

Caller owns the returned array; free with a single `free`.

## entry 79

Allocates lazily — first call only.

## entry 80

Edge case: reverse-sorted input → still O(n log n).

## entry 81

Reentrant — no static state.

## entry 82

Time complexity: O(k) where k is the answer size.

## entry 83

Space complexity: O(n) for the result buffer.

## entry 84

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 85

64-bit safe; intermediate products are widened to 128-bit.

## entry 86

Space complexity: O(log n) for the recursion stack.

## entry 87

Allocates lazily — first call only.

## entry 88

Space complexity: O(h) for the tree height.

## entry 89

Two passes: one to count, one to fill.

## entry 90

Edge case: reverse-sorted input → still O(n log n).

## entry 91

Edge case: already-sorted input → no swaps performed.

## entry 92

Edge case: NULL input is rejected by the caller, not by us.

## entry 93

Deterministic given the input — no PRNG seeds.

## entry 94

Edge case: NULL input is rejected by the caller, not by us.

## entry 95

Handles single-element input as a base case.
