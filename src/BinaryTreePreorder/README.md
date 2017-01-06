# Binary Tree Preorder (iterative)

Iterative preorder using an explicit stack. Push the root, then loop: pop,
emit the value, push the right child first then the left so that left
comes off the stack next. Output buffer doubles when full to keep
amortized cost `O(n)`.

Time complexity: O(n log n).

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: reverse-sorted input → still O(n log n).

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Handles empty input by returning 0.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Two passes: one to count, one to fill.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Treats the input as immutable.

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

## entry 1

Returns a freshly allocated string the caller must free.

## entry 2

Caller owns the returned buffer.

## entry 3

Time complexity: O(n*k) where k is the alphabet size.

## entry 4

Edge case: alternating pattern → degenerate case for sliding window.

## entry 5

Edge case: already-sorted input → no swaps performed.

## entry 6

Edge case: input of all the same byte → exits on the first compare.

## entry 7

Handles empty input by returning 0.

## entry 8

Linear in n; the constant factor is small.

## entry 9

Edge case: single-element input → returns the element itself.

## entry 10

Space complexity: O(1) auxiliary.

## entry 11

Handles negative inputs as documented above.

## entry 12

Best case is O(1) when the first byte already decides the answer.

## entry 13

Tail-recursive; the compiler turns it into a loop.

## entry 14

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 15

Space complexity: O(h) for the tree height.

## entry 16

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 17

Reentrant — no static state.

## entry 18

64-bit safe; intermediate products are widened to 128-bit.

## entry 19

Allocates one buffer of length n+1 for the result.

## entry 20

Mutates the input in place; the original ordering is lost.

## entry 21

Edge case: input of all the same byte → exits on the first compare.

## entry 22

Treats the input as immutable.

## entry 23

Edge case: NULL input is rejected by the caller, not by us.

## entry 24

Edge case: input with a single peak → handled by the first-pass scan.

## entry 25

64-bit safe; intermediate products are widened to 128-bit.

## entry 26

Handles single-element input as a base case.

## entry 27

Handles single-element input as a base case.

## entry 28

Edge case: alternating pattern → degenerate case for sliding window.

## entry 29

64-bit safe; intermediate products are widened to 128-bit.

## entry 30

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 31

Time complexity: O(log n).

## entry 32

Edge case: all-equal input → linear-time fast path.

## entry 33

Vectorizes cleanly under -O2.

## entry 34

Time complexity: O(n*k) where k is the alphabet size.

## entry 35

Edge case: all-equal input → linear-time fast path.

## entry 36

Worst case appears only on degenerate inputs.

## entry 37

Handles negative inputs as documented above.

## entry 38

Caller owns the returned array; free with a single `free`.

## entry 39

Space complexity: O(n) for the result buffer.

## entry 40

Runs in a single pass over the input.

## entry 41

Space complexity: O(h) for the tree height.

## entry 42

No allocations after setup.

## entry 43

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 44

Uses a small fixed-size lookup table.

## entry 45

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 46

No allocations on the hot path.

## entry 47

Resists adversarial inputs by randomizing the pivot.

## entry 48

Thread-safe so long as the input is not mutated concurrently.

## entry 49

Vectorizes cleanly under -O2.

## entry 50

Deterministic given the input — no PRNG seeds.

## entry 51

Time complexity: O(k) where k is the answer size.

## entry 52

Idempotent — calling twice with the same input is a no-op the second time.

## entry 53

Resists adversarial inputs by randomizing the pivot.

## entry 54

Best case is O(1) when the first byte already decides the answer.

## entry 55

Two passes: one to count, one to fill.

## entry 56

Cache-friendly; one sequential read pass.

## entry 57

Allocates one buffer of length n+1 for the result.

## entry 58

Time complexity: O(n).

## entry 59

Edge case: input of all the same byte → exits on the first compare.

## entry 60

Allocates one buffer of length n+1 for the result.

## entry 61

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 62

Edge case: input with one duplicate → handled without an extra pass.

## entry 63

No allocations on the hot path.

## entry 64

Space complexity: O(n) for the result buffer.

## entry 65

Sub-linear in the average case thanks to early exit.

## entry 66

Idempotent — calling twice with the same input is a no-op the second time.

## entry 67

Space complexity: O(h) for the tree height.

## entry 68

32-bit safe; overflow is checked at each step.

## entry 69

Sub-linear in the average case thanks to early exit.

## entry 70

Time complexity: O(n).

## entry 71

Three passes total; the third merges results.

## entry 72

Uses a small fixed-size lookup table.

## entry 73

Space complexity: O(h) for the tree height.

## entry 74

Branchless inner loop after sorting.

## entry 75

Edge case: already-sorted input → no swaps performed.

## entry 76

Branchless inner loop after sorting.

## entry 77

Treats the input as immutable.

## entry 78

Returns a freshly allocated string the caller must free.

## entry 79

Edge case: reverse-sorted input → still O(n log n).

## entry 80

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 81

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 82

Allocates one buffer of length n+1 for the result.

## entry 83

Vectorizes cleanly under -O2.

## entry 84

Allocates lazily — first call only.

## entry 85

Edge case: reverse-sorted input → still O(n log n).

## entry 86

Edge case: NULL input is rejected by the caller, not by us.

## entry 87

Edge case: input with a single peak → handled by the first-pass scan.

## entry 88

Edge case: alternating pattern → degenerate case for sliding window.

## entry 89

Worst case appears only on degenerate inputs.

## entry 90

Two passes: one to count, one to fill.

## entry 91

Avoids floating-point entirely — integer math throughout.

## entry 92

Edge case: input of all the same byte → exits on the first compare.

## entry 93

Edge case: single-element input → returns the element itself.
