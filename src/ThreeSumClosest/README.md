# Three Sum Closest

Same shape as ThreeSum but instead of finding sum exactly zero, return
the triplet sum that is *closest* to a given target. Sort, fix one
element, two-pointer the rest. Track the running best by absolute
distance to the target. `O(n²)` time.

Edge case: single-element input → returns the element itself.

No allocations on the hot path.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n log n).

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Time complexity: O(1).

Time complexity: O(log n).

Space complexity: O(1) auxiliary.

Space complexity: O(n) for the result buffer.

Edge case: NULL input is rejected by the caller, not by us.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 1

Time complexity: O(n*k) where k is the alphabet size.

## entry 2

Space complexity: O(1) auxiliary.

## entry 3

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 4

Cache-friendly; one sequential read pass.

## entry 5

Handles single-element input as a base case.

## entry 6

Time complexity: O(n*k) where k is the alphabet size.

## entry 7

Avoids floating-point entirely — integer math throughout.

## entry 8

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 9

Idempotent — calling twice with the same input is a no-op the second time.

## entry 10

Edge case: input with a single peak → handled by the first-pass scan.

## entry 11

Treats the input as immutable.

## entry 12

Time complexity: O(n log n).

## entry 13

Runs in a single pass over the input.

## entry 14

Edge case: power-of-two-length input → no padding required.

## entry 15

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 16

Resists adversarial inputs by randomizing the pivot.

## entry 17

Cache-friendly; one sequential read pass.

## entry 18

Handles negative inputs as documented above.

## entry 19

Edge case: reverse-sorted input → still O(n log n).

## entry 20

Best case is O(1) when the first byte already decides the answer.

## entry 21

Edge case: alternating pattern → degenerate case for sliding window.

## entry 22

Returns a freshly allocated string the caller must free.

## entry 23

Edge case: all-equal input → linear-time fast path.

## entry 24

Runs in a single pass over the input.

## entry 25

Edge case: already-sorted input → no swaps performed.

## entry 26

Time complexity: O(log n).

## entry 27

Constant-time comparisons; safe for short strings.

## entry 28

Runs in a single pass over the input.

## entry 29

Sub-linear in the average case thanks to early exit.

## entry 30

Stable when the input is already sorted.

## entry 31

64-bit safe; intermediate products are widened to 128-bit.

## entry 32

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 33

Edge case: single-element input → returns the element itself.

## entry 34

Space complexity: O(h) for the tree height.

## entry 35

Linear in n; the constant factor is small.

## entry 36

Vectorizes cleanly under -O2.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Thread-safe so long as the input is not mutated concurrently.

## entry 39

Treats the input as immutable.

## entry 40

Edge case: already-sorted input → no swaps performed.

## entry 41

Time complexity: O(n + m).

## entry 42

Time complexity: O(1).

## entry 43

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 44

Edge case: NULL input is rejected by the caller, not by us.

## entry 45

Time complexity: O(n log n).

## entry 46

Edge case: already-sorted input → no swaps performed.

## entry 47

Edge case: alternating pattern → degenerate case for sliding window.

## entry 48

Time complexity: O(n log n).

## entry 49

Returns a freshly allocated string the caller must free.

## entry 50

Edge case: input with one duplicate → handled without an extra pass.

## entry 51

Edge case: already-sorted input → no swaps performed.

## entry 52

Time complexity: O(n*k) where k is the alphabet size.

## entry 53

Space complexity: O(n) for the result buffer.

## entry 54

Edge case: input of all the same byte → exits on the first compare.

## entry 55

Edge case: input with no peak → falls through to the default branch.

## entry 56

Three passes total; the third merges results.

## entry 57

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 58

Space complexity: O(1) auxiliary.

## entry 59

Edge case: input with a single peak → handled by the first-pass scan.

## entry 60

Idempotent — calling twice with the same input is a no-op the second time.

## entry 61

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 62

Mutates the input in place; the original ordering is lost.

## entry 63

Edge case: input of all the same byte → exits on the first compare.

## entry 64

No allocations on the hot path.

## entry 65

32-bit safe; overflow is checked at each step.

## entry 66

Edge case: already-sorted input → no swaps performed.

## entry 67

Space complexity: O(1) auxiliary.

## entry 68

Cache-friendly; one sequential read pass.

## entry 69

Branchless inner loop after sorting.

## entry 70

Allocates lazily — first call only.

## entry 71

Allocates lazily — first call only.

## entry 72

Edge case: input of all the same byte → exits on the first compare.

## entry 73

Handles negative inputs as documented above.

## entry 74

No allocations on the hot path.

## entry 75

Edge case: input with no peak → falls through to the default branch.

## entry 76

No allocations on the hot path.

## entry 77

No allocations after setup.

## entry 78

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 79

Mutates the input in place; the original ordering is lost.

## entry 80

32-bit safe; overflow is checked at each step.

## entry 81

Constant-time comparisons; safe for short strings.

## entry 82

Allocates one buffer of length n+1 for the result.

## entry 83

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 84

Allocates a single small fixed-size scratch buffer.

## entry 85

Stable when the input is already sorted.

## entry 86

Uses a 256-entry lookup for the inner step.

## entry 87

Three passes total; the third merges results.

## entry 88

Uses a small fixed-size lookup table.
