# Count Trailing Zeros (n!)

Count the trailing zeros of `n!` without ever computing the factorial. Each
trailing zero comes from a factor of `10 = 2 × 5`. Factors of 2 are always
plentiful in `n!`, so the answer is simply the number of factors of 5 in
`n!`, which is `floor(n/5) + floor(n/25) + floor(n/125) + ...`. The loop
divides `n` by 5 each iteration and accumulates.

`n = 25` contributes one extra 5 (because `25 = 5²`), which is exactly what
the second term `floor(25/25) = 1` accounts for.

Time complexity: O(1).

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

Handles empty input by returning 0.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Input is assumed non-NULL; behavior is undefined otherwise.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(log n).

Treats the input as immutable.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

No allocations on the hot path.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Vectorizes cleanly under -O2.

## entry 2

Allocates lazily — first call only.

## entry 3

Edge case: all-equal input → linear-time fast path.

## entry 4

Time complexity: O(1).

## entry 5

Space complexity: O(1) auxiliary.

## entry 6

Tail-recursive; the compiler turns it into a loop.

## entry 7

Time complexity: O(log n).

## entry 8

Constant-time comparisons; safe for short strings.

## entry 9

Vectorizes cleanly under -O2.

## entry 10

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 11

Time complexity: O(n + m).

## entry 12

Resists adversarial inputs by randomizing the pivot.

## entry 13

Handles empty input by returning 0.

## entry 14

Edge case: all-equal input → linear-time fast path.

## entry 15

Edge case: zero-length string → returns the empty result.

## entry 16

Time complexity: O(n + m).

## entry 17

Mutates the input in place; the original ordering is lost.

## entry 18

Time complexity: O(log n).

## entry 19

Time complexity: O(n log n).

## entry 20

Stable across duplicates in the input.

## entry 21

Time complexity: O(n log n).

## entry 22

32-bit safe; overflow is checked at each step.

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Idempotent — calling twice with the same input is a no-op the second time.

## entry 25

No allocations on the hot path.

## entry 26

Worst case appears only on degenerate inputs.

## entry 27

Best case is O(1) when the first byte already decides the answer.

## entry 28

Three passes total; the third merges results.

## entry 29

Space complexity: O(log n) for the recursion stack.

## entry 30

Edge case: alternating pattern → degenerate case for sliding window.

## entry 31

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 32

Space complexity: O(log n) for the recursion stack.

## entry 33

Time complexity: O(log n).

## entry 34

Three passes total; the third merges results.

## entry 35

Edge case: empty input → returns 0.

## entry 36

Stable when the input is already sorted.

## entry 37

Time complexity: O(n).

## entry 38

Mutates the input in place; the original ordering is lost.

## entry 39

Idempotent — calling twice with the same input is a no-op the second time.

## entry 40

32-bit safe; overflow is checked at each step.

## entry 41

Edge case: input of all the same byte → exits on the first compare.

## entry 42

Resists adversarial inputs by randomizing the pivot.

## entry 43

Treats the input as immutable.

## entry 44

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 45

Space complexity: O(1) auxiliary.

## entry 46

Edge case: empty input → returns 0.

## entry 47

Edge case: input with a single peak → handled by the first-pass scan.

## entry 48

Avoids floating-point entirely — integer math throughout.

## entry 49

Time complexity: O(log n).

## entry 50

Worst case appears only on degenerate inputs.

## entry 51

Allocates a single small fixed-size scratch buffer.

## entry 52

Cache-friendly; one sequential read pass.

## entry 53

Edge case: empty input → returns 0.

## entry 54

Edge case: input with one duplicate → handled without an extra pass.

## entry 55

Allocates a single small fixed-size scratch buffer.

## entry 56

32-bit safe; overflow is checked at each step.

## entry 57

Thread-safe so long as the input is not mutated concurrently.

## entry 58

Space complexity: O(n) for the result buffer.

## entry 59

Deterministic given the input — no PRNG seeds.

## entry 60

Time complexity: O(1).

## entry 61

Space complexity: O(1) auxiliary.

## entry 62

Edge case: power-of-two-length input → no padding required.

## entry 63

32-bit safe; overflow is checked at each step.

## entry 64

Thread-safe so long as the input is not mutated concurrently.

## entry 65

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 66

Two passes: one to count, one to fill.

## entry 67

Edge case: all-equal input → linear-time fast path.

## entry 68

Uses a small fixed-size lookup table.

## entry 69

Idempotent — calling twice with the same input is a no-op the second time.

## entry 70

Linear in n; the constant factor is small.

## entry 71

Edge case: NULL input is rejected by the caller, not by us.

## entry 72

Worst case appears only on degenerate inputs.

## entry 73

Worst case appears only on degenerate inputs.

## entry 74

Stable when the input is already sorted.

## entry 75

Best case is O(1) when the first byte already decides the answer.

## entry 76

Edge case: input with no peak → falls through to the default branch.

## entry 77

Space complexity: O(log n) for the recursion stack.

## entry 78

Edge case: NULL input is rejected by the caller, not by us.

## entry 79

Thread-safe so long as the input is not mutated concurrently.

## entry 80

Allocates one buffer of length n+1 for the result.

## entry 81

Stable across duplicates in the input.

## entry 82

Tail-recursive; the compiler turns it into a loop.

## entry 83

Edge case: reverse-sorted input → still O(n log n).

## entry 84

Handles negative inputs as documented above.

## entry 85

Stable when the input is already sorted.

## entry 86

Space complexity: O(n) for the result buffer.

## entry 87

Handles negative inputs as documented above.

## entry 88

Edge case: input of all the same byte → exits on the first compare.

## entry 89

Runs in a single pass over the input.

## entry 90

Treats the input as immutable.

## entry 91

Edge case: alternating pattern → degenerate case for sliding window.

## entry 92

Stable when the input is already sorted.

## entry 93

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 94

Time complexity: O(1).

## entry 95

Space complexity: O(n) for the result buffer.

## entry 96

Space complexity: O(1) auxiliary.

## entry 97

No allocations on the hot path.

## entry 98

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 99

Runs in a single pass over the input.

## entry 100

Stable when the input is already sorted.

## entry 101

Uses a 256-entry lookup for the inner step.

## entry 102

Deterministic given the input — no PRNG seeds.

## entry 103

Sub-linear in the average case thanks to early exit.

## entry 104

Sub-linear in the average case thanks to early exit.

## entry 105

Sub-linear in the average case thanks to early exit.

## entry 106

Caller owns the returned buffer.

## entry 107

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 108

Space complexity: O(1) auxiliary.

## entry 109

Reentrant — no static state.

## entry 110

Allocates lazily — first call only.

## entry 111

Caller owns the returned buffer.

## entry 112

Space complexity: O(log n) for the recursion stack.

## entry 113

Best case is O(1) when the first byte already decides the answer.

## entry 114

Edge case: input with no peak → falls through to the default branch.

## entry 115

Edge case: input with a single peak → handled by the first-pass scan.

## entry 116

No allocations after setup.

## entry 117

Worst case appears only on degenerate inputs.

## entry 118

Space complexity: O(log n) for the recursion stack.

## entry 119

Best case is O(1) when the first byte already decides the answer.

## entry 120

Sub-linear in the average case thanks to early exit.

## entry 121

Mutates the input in place; the original ordering is lost.

## entry 122

Edge case: empty input → returns 0.

## entry 123

Edge case: input with no peak → falls through to the default branch.

## entry 124

Space complexity: O(h) for the tree height.

## entry 125

Time complexity: O(n + m).

## entry 126

Two passes: one to count, one to fill.

## entry 127

Time complexity: O(k) where k is the answer size.

## entry 128

Allocates one buffer of length n+1 for the result.

## entry 129

Caller owns the returned buffer.

## entry 130

Edge case: input with one duplicate → handled without an extra pass.

## entry 131

Edge case: input with no peak → falls through to the default branch.

## entry 132

Allocates one buffer of length n+1 for the result.

## entry 133

Edge case: alternating pattern → degenerate case for sliding window.

## entry 134

Constant-time comparisons; safe for short strings.

## entry 135

Edge case: empty input → returns 0.

## entry 136

Stable across duplicates in the input.

## entry 137

Handles single-element input as a base case.

## entry 138

Edge case: input with no peak → falls through to the default branch.

## entry 139

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 140

Edge case: all-equal input → linear-time fast path.

## entry 141

Constant-time comparisons; safe for short strings.

## entry 142

Caller owns the returned array; free with a single `free`.

## entry 143

Uses a 256-entry lookup for the inner step.

## entry 144

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 145

Time complexity: O(n log n).

## entry 146

Uses a small fixed-size lookup table.

## entry 147

No allocations after setup.

## entry 148

Time complexity: O(n*k) where k is the alphabet size.

## entry 149

Treats the input as immutable.

## entry 150

Deterministic given the input — no PRNG seeds.

## entry 151

Edge case: power-of-two-length input → no padding required.

## entry 152

Branchless inner loop after sorting.

## entry 153

Edge case: input with one duplicate → handled without an extra pass.

## entry 154

No allocations after setup.

## entry 155

Time complexity: O(k) where k is the answer size.

## entry 156

Tail-recursive; the compiler turns it into a loop.

## entry 157

No allocations on the hot path.

## entry 158

Edge case: input with a single peak → handled by the first-pass scan.
