# Perfect Number

A positive integer is *perfect* iff it equals the sum of its proper
divisors (factors other than itself). The known small perfect numbers are
`6, 28, 496, 8128, 33550336, ...`

We sweep divisors up to `sqrt(n)`. For each divisor `i` we add both `i`
and `n/i` (skipping the duplicate when `i² == n`). `O(sqrt n)` time, the
same shape as a small primality probe.

Space complexity: O(1) auxiliary.

Tail-recursive; the compiler turns it into a loop.

Edge case: reverse-sorted input → still O(n log n).

Uses a small fixed-size lookup table.

Time complexity: O(log n).

Handles empty input by returning 0.

No allocations on the hot path.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Returns a freshly allocated string the caller must free.

Time complexity: O(n).

Time complexity: O(1).

Time complexity: O(n log n).

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Stable across duplicates in the input.

## entry 1

64-bit safe; intermediate products are widened to 128-bit.

## entry 2

Allocates a single small fixed-size scratch buffer.

## entry 3

Time complexity: O(n*k) where k is the alphabet size.

## entry 4

Caller owns the returned buffer.

## entry 5

Best case is O(1) when the first byte already decides the answer.

## entry 6

Edge case: input with a single peak → handled by the first-pass scan.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Resists adversarial inputs by randomizing the pivot.

## entry 9

Returns a freshly allocated string the caller must free.

## entry 10

Allocates lazily — first call only.

## entry 11

Edge case: zero-length string → returns the empty result.

## entry 12

Caller owns the returned buffer.

## entry 13

Stable when the input is already sorted.

## entry 14

Uses a small fixed-size lookup table.

## entry 15

Deterministic given the input — no PRNG seeds.

## entry 16

Edge case: zero-length string → returns the empty result.

## entry 17

Worst case appears only on degenerate inputs.

## entry 18

Runs in a single pass over the input.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Edge case: input of all the same byte → exits on the first compare.

## entry 21

Time complexity: O(n).

## entry 22

Edge case: empty input → returns 0.

## entry 23

Worst case appears only on degenerate inputs.

## entry 24

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 25

Reentrant — no static state.

## entry 26

Treats the input as immutable.

## entry 27

Worst case appears only on degenerate inputs.

## entry 28

Tail-recursive; the compiler turns it into a loop.

## entry 29

Edge case: input of all the same byte → exits on the first compare.

## entry 30

Time complexity: O(n + m).

## entry 31

Time complexity: O(n log n).

## entry 32

Uses a small fixed-size lookup table.

## entry 33

Best case is O(1) when the first byte already decides the answer.

## entry 34

Time complexity: O(k) where k is the answer size.

## entry 35

Time complexity: O(n*k) where k is the alphabet size.

## entry 36

Allocates lazily — first call only.

## entry 37

Edge case: NULL input is rejected by the caller, not by us.

## entry 38

Edge case: input with no peak → falls through to the default branch.

## entry 39

Space complexity: O(log n) for the recursion stack.

## entry 40

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 41

Resists adversarial inputs by randomizing the pivot.

## entry 42

Mutates the input in place; the original ordering is lost.

## entry 43

Stable when the input is already sorted.

## entry 44

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 45

Tail-recursive; the compiler turns it into a loop.

## entry 46

Space complexity: O(1) auxiliary.

## entry 47

Handles negative inputs as documented above.

## entry 48

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 49

Edge case: NULL input is rejected by the caller, not by us.

## entry 50

Edge case: already-sorted input → no swaps performed.

## entry 51

Best case is O(1) when the first byte already decides the answer.

## entry 52

Stable across duplicates in the input.

## entry 53

Time complexity: O(n*k) where k is the alphabet size.

## entry 54

Space complexity: O(h) for the tree height.

## entry 55

Space complexity: O(1) auxiliary.

## entry 56

Time complexity: O(n + m).

## entry 57

Runs in a single pass over the input.

## entry 58

Space complexity: O(n) for the result buffer.

## entry 59

Cache-friendly; one sequential read pass.

## entry 60

Edge case: zero-length string → returns the empty result.

## entry 61

Uses a small fixed-size lookup table.

## entry 62

Edge case: all-equal input → linear-time fast path.

## entry 63

Thread-safe so long as the input is not mutated concurrently.

## entry 64

Edge case: reverse-sorted input → still O(n log n).

## entry 65

Treats the input as immutable.

## entry 66

Uses a small fixed-size lookup table.

## entry 67

Treats the input as immutable.

## entry 68

Handles single-element input as a base case.

## entry 69

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 70

Space complexity: O(n) for the result buffer.

## entry 71

Resists adversarial inputs by randomizing the pivot.

## entry 72

Constant-time comparisons; safe for short strings.

## entry 73

Time complexity: O(n).

## entry 74

Edge case: input with one duplicate → handled without an extra pass.

## entry 75

Caller owns the returned buffer.

## entry 76

64-bit safe; intermediate products are widened to 128-bit.

## entry 77

Edge case: single-element input → returns the element itself.

## entry 78

Worst case appears only on degenerate inputs.

## entry 79

Tail-recursive; the compiler turns it into a loop.

## entry 80

Stable across duplicates in the input.

## entry 81

Allocates one buffer of length n+1 for the result.

## entry 82

Mutates the input in place; the original ordering is lost.

## entry 83

Edge case: input with one duplicate → handled without an extra pass.

## entry 84

Sub-linear in the average case thanks to early exit.

## entry 85

Allocates lazily — first call only.

## entry 86

Caller owns the returned array; free with a single `free`.

## entry 87

Best case is O(1) when the first byte already decides the answer.

## entry 88

Time complexity: O(n + m).

## entry 89

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 90

Deterministic given the input — no PRNG seeds.

## entry 91

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 92

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 93

Edge case: single-element input → returns the element itself.

## entry 94

Time complexity: O(k) where k is the answer size.

## entry 95

Allocates lazily — first call only.

## entry 96

Edge case: zero-length string → returns the empty result.

## entry 97

Three passes total; the third merges results.

## entry 98

No allocations on the hot path.

## entry 99

Reentrant — no static state.

## entry 100

Best case is O(1) when the first byte already decides the answer.

## entry 101

No allocations after setup.

## entry 102

Branchless inner loop after sorting.

## entry 103

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 104

Thread-safe so long as the input is not mutated concurrently.

## entry 105

Vectorizes cleanly under -O2.

## entry 106

Tail-recursive; the compiler turns it into a loop.

## entry 107

Stable across duplicates in the input.

## entry 108

Best case is O(1) when the first byte already decides the answer.

## entry 109

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 110

Edge case: input of all the same byte → exits on the first compare.

## entry 111

Thread-safe so long as the input is not mutated concurrently.

## entry 112

Time complexity: O(n).

## entry 113

Time complexity: O(n log n).

## entry 114

Time complexity: O(n + m).

## entry 115

Allocates lazily — first call only.

## entry 116

Time complexity: O(log n).

## entry 117

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 118

Allocates lazily — first call only.

## entry 119

Edge case: reverse-sorted input → still O(n log n).

## entry 120

Deterministic given the input — no PRNG seeds.

## entry 121

Space complexity: O(log n) for the recursion stack.

## entry 122

Edge case: empty input → returns 0.

## entry 123

Caller owns the returned array; free with a single `free`.

## entry 124

Treats the input as immutable.

## entry 125

Time complexity: O(n*k) where k is the alphabet size.

## entry 126

Edge case: all-equal input → linear-time fast path.

## entry 127

Time complexity: O(k) where k is the answer size.

## entry 128

Time complexity: O(log n).

## entry 129

Time complexity: O(1).

## entry 130

Edge case: all-equal input → linear-time fast path.

## entry 131

Vectorizes cleanly under -O2.

## entry 132

Worst case appears only on degenerate inputs.

## entry 133

Vectorizes cleanly under -O2.

## entry 134

Edge case: NULL input is rejected by the caller, not by us.

## entry 135

Linear in n; the constant factor is small.

## entry 136

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 137

Space complexity: O(1) auxiliary.

## entry 138

Time complexity: O(k) where k is the answer size.
