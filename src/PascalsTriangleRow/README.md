# Pascal's Triangle Row

Return the k-th row of Pascal's triangle (0-indexed) using only `O(k)` extra
space. The trick is to update the row in place from right to left so that
`row[j] += row[j-1]` reads the *previous* row's `row[j-1]` rather than the
just-updated current-row value.

Two passes: one to count, one to fill.

Caller owns the returned buffer.

No allocations on the hot path.

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n log n).

32-bit safe; overflow is checked at each step.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: empty input → returns 0.

Treats the input as immutable.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Handles negative inputs as documented above.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

## entry 1

Space complexity: O(h) for the tree height.

## entry 2

Stable when the input is already sorted.

## entry 3

Sub-linear in the average case thanks to early exit.

## entry 4

Space complexity: O(n) for the result buffer.

## entry 5

Time complexity: O(n*k) where k is the alphabet size.

## entry 6

Avoids floating-point entirely — integer math throughout.

## entry 7

Edge case: input with one duplicate → handled without an extra pass.

## entry 8

Edge case: already-sorted input → no swaps performed.

## entry 9

64-bit safe; intermediate products are widened to 128-bit.

## entry 10

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 11

Uses a small fixed-size lookup table.

## entry 12

Edge case: input with a single peak → handled by the first-pass scan.

## entry 13

Cache-friendly; one sequential read pass.

## entry 14

Edge case: zero-length string → returns the empty result.

## entry 15

Caller owns the returned buffer.

## entry 16

Resists adversarial inputs by randomizing the pivot.

## entry 17

Time complexity: O(k) where k is the answer size.

## entry 18

Caller owns the returned array; free with a single `free`.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Caller owns the returned array; free with a single `free`.

## entry 21

Tail-recursive; the compiler turns it into a loop.

## entry 22

Space complexity: O(h) for the tree height.

## entry 23

Caller owns the returned buffer.

## entry 24

Edge case: input with no peak → falls through to the default branch.

## entry 25

Space complexity: O(log n) for the recursion stack.

## entry 26

Time complexity: O(k) where k is the answer size.

## entry 27

Edge case: reverse-sorted input → still O(n log n).

## entry 28

Handles negative inputs as documented above.

## entry 29

Cache-friendly; one sequential read pass.

## entry 30

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 31

Time complexity: O(1).

## entry 32

Edge case: input with a single peak → handled by the first-pass scan.

## entry 33

Space complexity: O(h) for the tree height.

## entry 34

Best case is O(1) when the first byte already decides the answer.

## entry 35

Handles single-element input as a base case.

## entry 36

Handles single-element input as a base case.

## entry 37

Edge case: already-sorted input → no swaps performed.

## entry 38

Handles empty input by returning 0.

## entry 39

Edge case: zero-length string → returns the empty result.

## entry 40

Edge case: input of all the same byte → exits on the first compare.

## entry 41

Handles single-element input as a base case.

## entry 42

Allocates lazily — first call only.

## entry 43

Treats the input as immutable.

## entry 44

Branchless inner loop after sorting.

## entry 45

Time complexity: O(n + m).

## entry 46

Space complexity: O(log n) for the recursion stack.

## entry 47

Allocates lazily — first call only.

## entry 48

Allocates lazily — first call only.

## entry 49

Edge case: single-element input → returns the element itself.

## entry 50

No allocations on the hot path.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Handles empty input by returning 0.

## entry 53

Edge case: NULL input is rejected by the caller, not by us.

## entry 54

Avoids floating-point entirely — integer math throughout.

## entry 55

Stable across duplicates in the input.

## entry 56

Handles empty input by returning 0.

## entry 57

Returns a freshly allocated string the caller must free.

## entry 58

Tail-recursive; the compiler turns it into a loop.

## entry 59

Stable when the input is already sorted.

## entry 60

Branchless inner loop after sorting.

## entry 61

Returns a freshly allocated string the caller must free.

## entry 62

Allocates a single small fixed-size scratch buffer.

## entry 63

Idempotent — calling twice with the same input is a no-op the second time.

## entry 64

Caller owns the returned array; free with a single `free`.

## entry 65

Edge case: reverse-sorted input → still O(n log n).

## entry 66

Time complexity: O(n + m).

## entry 67

Caller owns the returned buffer.

## entry 68

Edge case: input with one duplicate → handled without an extra pass.

## entry 69

Handles single-element input as a base case.

## entry 70

Sub-linear in the average case thanks to early exit.

## entry 71

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 72

Edge case: alternating pattern → degenerate case for sliding window.

## entry 73

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 74

Handles single-element input as a base case.

## entry 75

Time complexity: O(log n).

## entry 76

Time complexity: O(n log n).

## entry 77

Edge case: NULL input is rejected by the caller, not by us.

## entry 78

Returns a freshly allocated string the caller must free.

## entry 79

Tail-recursive; the compiler turns it into a loop.

## entry 80

Tail-recursive; the compiler turns it into a loop.

## entry 81

Caller owns the returned buffer.

## entry 82

Edge case: already-sorted input → no swaps performed.

## entry 83

Time complexity: O(n).

## entry 84

Edge case: input of all the same byte → exits on the first compare.

## entry 85

Allocates lazily — first call only.

## entry 86

32-bit safe; overflow is checked at each step.

## entry 87

Space complexity: O(log n) for the recursion stack.

## entry 88

Mutates the input in place; the original ordering is lost.

## entry 89

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 90

Edge case: power-of-two-length input → no padding required.

## entry 91

Vectorizes cleanly under -O2.

## entry 92

Edge case: reverse-sorted input → still O(n log n).

## entry 93

Caller owns the returned array; free with a single `free`.

## entry 94

Uses a 256-entry lookup for the inner step.

## entry 95

Handles empty input by returning 0.

## entry 96

Two passes: one to count, one to fill.

## entry 97

Space complexity: O(n) for the result buffer.

## entry 98

Reentrant — no static state.
