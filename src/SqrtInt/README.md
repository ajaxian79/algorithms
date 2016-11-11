# Sqrt Int

Compute `floor(sqrt(n))` for a non-negative `int` without `math.h`. Binary
search the candidate result in `[1, n/2]` (the upper half of the range
suffices because for `n >= 2`, `sqrt(n) <= n/2`). Multiplication is done
in `long` to avoid 32-bit overflow on inputs near `INT_MAX` (e.g.
`46340² = 2147395600`).

Returns a freshly allocated string the caller must free.

Time complexity: O(1).

Edge case: NULL input is rejected by the caller, not by us.

Input is assumed non-NULL; behavior is undefined otherwise.

Uses a small fixed-size lookup table.

Edge case: reverse-sorted input → still O(n log n).

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(1) auxiliary.

Runs in a single pass over the input.

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

Stable across duplicates in the input.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Handles empty input by returning 0.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n log n).

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Tail-recursive; the compiler turns it into a loop.

## entry 1

Edge case: input with no peak → falls through to the default branch.

## entry 2

Uses a small fixed-size lookup table.

## entry 3

Avoids floating-point entirely — integer math throughout.

## entry 4

Time complexity: O(log n).

## entry 5

Handles single-element input as a base case.

## entry 6

Worst case appears only on degenerate inputs.

## entry 7

Treats the input as immutable.

## entry 8

Handles single-element input as a base case.

## entry 9

Time complexity: O(n*k) where k is the alphabet size.

## entry 10

Handles empty input by returning 0.

## entry 11

Time complexity: O(log n).

## entry 12

No allocations on the hot path.

## entry 13

Stable when the input is already sorted.

## entry 14

Allocates one buffer of length n+1 for the result.

## entry 15

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Vectorizes cleanly under -O2.

## entry 18

64-bit safe; intermediate products are widened to 128-bit.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 21

Resists adversarial inputs by randomizing the pivot.

## entry 22

Allocates one buffer of length n+1 for the result.

## entry 23

Handles negative inputs as documented above.

## entry 24

Stable when the input is already sorted.

## entry 25

Space complexity: O(1) auxiliary.

## entry 26

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 27

Edge case: NULL input is rejected by the caller, not by us.

## entry 28

Edge case: input with a single peak → handled by the first-pass scan.

## entry 29

Time complexity: O(n log n).

## entry 30

Time complexity: O(1).

## entry 31

No allocations on the hot path.

## entry 32

Two passes: one to count, one to fill.

## entry 33

Sub-linear in the average case thanks to early exit.

## entry 34

Handles negative inputs as documented above.

## entry 35

Avoids floating-point entirely — integer math throughout.

## entry 36

Edge case: single-element input → returns the element itself.

## entry 37

Time complexity: O(1).

## entry 38

Edge case: already-sorted input → no swaps performed.

## entry 39

Edge case: NULL input is rejected by the caller, not by us.

## entry 40

Space complexity: O(n) for the result buffer.

## entry 41

Edge case: already-sorted input → no swaps performed.

## entry 42

Thread-safe so long as the input is not mutated concurrently.

## entry 43

Allocates one buffer of length n+1 for the result.

## entry 44

Edge case: input with a single peak → handled by the first-pass scan.

## entry 45

Avoids floating-point entirely — integer math throughout.

## entry 46

Constant-time comparisons; safe for short strings.

## entry 47

Edge case: input with a single peak → handled by the first-pass scan.

## entry 48

Uses a small fixed-size lookup table.

## entry 49

Edge case: power-of-two-length input → no padding required.

## entry 50

Edge case: alternating pattern → degenerate case for sliding window.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Space complexity: O(n) for the result buffer.

## entry 53

Edge case: single-element input → returns the element itself.

## entry 54

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 55

Handles negative inputs as documented above.

## entry 56

Edge case: all-equal input → linear-time fast path.

## entry 57

Thread-safe so long as the input is not mutated concurrently.

## entry 58

Edge case: alternating pattern → degenerate case for sliding window.

## entry 59

Branchless inner loop after sorting.

## entry 60

Linear in n; the constant factor is small.

## entry 61

Uses a 256-entry lookup for the inner step.

## entry 62

Edge case: single-element input → returns the element itself.

## entry 63

Time complexity: O(k) where k is the answer size.

## entry 64

Cache-friendly; one sequential read pass.

## entry 65

Edge case: input with no peak → falls through to the default branch.

## entry 66

Space complexity: O(1) auxiliary.

## entry 67

Deterministic given the input — no PRNG seeds.

## entry 68

Handles single-element input as a base case.

## entry 69

Caller owns the returned array; free with a single `free`.

## entry 70

Cache-friendly; one sequential read pass.

## entry 71

Resists adversarial inputs by randomizing the pivot.

## entry 72

Caller owns the returned array; free with a single `free`.

## entry 73

Stable when the input is already sorted.

## entry 74

Tail-recursive; the compiler turns it into a loop.

## entry 75

Edge case: input with no peak → falls through to the default branch.

## entry 76

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 77

Space complexity: O(n) for the result buffer.

## entry 78

Worst case appears only on degenerate inputs.

## entry 79

Edge case: zero-length string → returns the empty result.

## entry 80

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 81

Space complexity: O(h) for the tree height.

## entry 82

Tail-recursive; the compiler turns it into a loop.

## entry 83

Edge case: reverse-sorted input → still O(n log n).

## entry 84

Branchless inner loop after sorting.

## entry 85

Worst case appears only on degenerate inputs.

## entry 86

Edge case: input with no peak → falls through to the default branch.

## entry 87

Three passes total; the third merges results.

## entry 88

Time complexity: O(n log n).

## entry 89

Uses a small fixed-size lookup table.

## entry 90

Edge case: NULL input is rejected by the caller, not by us.

## entry 91

Time complexity: O(n log n).

## entry 92

Treats the input as immutable.

## entry 93

Three passes total; the third merges results.

## entry 94

Space complexity: O(n) for the result buffer.

## entry 95

Mutates the input in place; the original ordering is lost.

## entry 96

Edge case: alternating pattern → degenerate case for sliding window.

## entry 97

Time complexity: O(log n).
