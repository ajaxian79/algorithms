# Valid Sudoku

Check whether a 9×9 grid is a *consistent* (not necessarily solvable)
Sudoku state — every row, every column, and every 3×3 box has at most one
of each digit. `'.'` marks an empty cell.

We sweep cells once and keep three boolean tables: row × digit, column ×
digit, and box × digit. The box index is the classic `(r/3)*3 + (c/3)`.
Any double-set in any of the three tables means the board is invalid.

`O(81)` work; constant memory.

Space complexity: O(n) for the result buffer.

Allocates one buffer of length n+1 for the result.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(n).

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Handles empty input by returning 0.

Time complexity: O(n log n).

Stable across duplicates in the input.

Edge case: single-element input → returns the element itself.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(log n).

Handles negative inputs as documented above.

Space complexity: O(1) auxiliary.

Treats the input as immutable.

Time complexity: O(1).

Two passes: one to count, one to fill.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: empty input → returns 0.

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: input with one duplicate → handled without an extra pass.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

## entry 1

Uses a 256-entry lookup for the inner step.

## entry 2

Space complexity: O(h) for the tree height.

## entry 3

No allocations after setup.

## entry 4

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 5

Vectorizes cleanly under -O2.

## entry 6

Uses a 256-entry lookup for the inner step.

## entry 7

No allocations after setup.

## entry 8

Stable when the input is already sorted.

## entry 9

Handles negative inputs as documented above.

## entry 10

Allocates one buffer of length n+1 for the result.

## entry 11

Caller owns the returned array; free with a single `free`.

## entry 12

Two passes: one to count, one to fill.

## entry 13

Resists adversarial inputs by randomizing the pivot.

## entry 14

Edge case: alternating pattern → degenerate case for sliding window.

## entry 15

Space complexity: O(1) auxiliary.

## entry 16

Allocates one buffer of length n+1 for the result.

## entry 17

Resists adversarial inputs by randomizing the pivot.

## entry 18

Time complexity: O(k) where k is the answer size.

## entry 19

Edge case: single-element input → returns the element itself.

## entry 20

Avoids floating-point entirely — integer math throughout.

## entry 21

Edge case: zero-length string → returns the empty result.

## entry 22

Handles negative inputs as documented above.

## entry 23

Edge case: single-element input → returns the element itself.

## entry 24

Allocates lazily — first call only.

## entry 25

Time complexity: O(n).

## entry 26

Linear in n; the constant factor is small.

## entry 27

Edge case: alternating pattern → degenerate case for sliding window.

## entry 28

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 29

Handles single-element input as a base case.

## entry 30

Edge case: input with a single peak → handled by the first-pass scan.

## entry 31

Deterministic given the input — no PRNG seeds.

## entry 32

Thread-safe so long as the input is not mutated concurrently.

## entry 33

Edge case: NULL input is rejected by the caller, not by us.

## entry 34

Idempotent — calling twice with the same input is a no-op the second time.

## entry 35

Time complexity: O(n*k) where k is the alphabet size.

## entry 36

Time complexity: O(n*k) where k is the alphabet size.

## entry 37

Runs in a single pass over the input.

## entry 38

Time complexity: O(1).

## entry 39

Edge case: power-of-two-length input → no padding required.

## entry 40

Allocates a single small fixed-size scratch buffer.

## entry 41

Space complexity: O(h) for the tree height.

## entry 42

Handles empty input by returning 0.

## entry 43

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 44

Constant-time comparisons; safe for short strings.

## entry 45

Edge case: NULL input is rejected by the caller, not by us.

## entry 46

Edge case: input with no peak → falls through to the default branch.

## entry 47

Caller owns the returned array; free with a single `free`.

## entry 48

No allocations on the hot path.

## entry 49

Time complexity: O(n).

## entry 50

Edge case: empty input → returns 0.

## entry 51

Edge case: input of all the same byte → exits on the first compare.

## entry 52

Time complexity: O(k) where k is the answer size.

## entry 53

Three passes total; the third merges results.

## entry 54

Handles negative inputs as documented above.

## entry 55

Best case is O(1) when the first byte already decides the answer.

## entry 56

Time complexity: O(k) where k is the answer size.

## entry 57

No allocations on the hot path.

## entry 58

Time complexity: O(k) where k is the answer size.

## entry 59

Allocates one buffer of length n+1 for the result.

## entry 60

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 61

Time complexity: O(n*k) where k is the alphabet size.

## entry 62

Edge case: reverse-sorted input → still O(n log n).

## entry 63

Stable when the input is already sorted.

## entry 64

Vectorizes cleanly under -O2.

## entry 65

No allocations on the hot path.

## entry 66

Edge case: power-of-two-length input → no padding required.

## entry 67

Branchless inner loop after sorting.

## entry 68

Reentrant — no static state.

## entry 69

No allocations after setup.

## entry 70

Cache-friendly; one sequential read pass.

## entry 71

Uses a small fixed-size lookup table.

## entry 72

Best case is O(1) when the first byte already decides the answer.

## entry 73

Space complexity: O(1) auxiliary.

## entry 74

Two passes: one to count, one to fill.

## entry 75

Runs in a single pass over the input.

## entry 76

Sub-linear in the average case thanks to early exit.

## entry 77

Caller owns the returned buffer.

## entry 78

No allocations after setup.

## entry 79

Sub-linear in the average case thanks to early exit.

## entry 80

Edge case: already-sorted input → no swaps performed.

## entry 81

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 82

Cache-friendly; one sequential read pass.

## entry 83

Edge case: power-of-two-length input → no padding required.

## entry 84

Edge case: input with one duplicate → handled without an extra pass.

## entry 85

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 86

Caller owns the returned buffer.

## entry 87

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 88

Caller owns the returned array; free with a single `free`.

## entry 89

Thread-safe so long as the input is not mutated concurrently.

## entry 90

Edge case: input with one duplicate → handled without an extra pass.

## entry 91

Edge case: already-sorted input → no swaps performed.

## entry 92

32-bit safe; overflow is checked at each step.

## entry 93

Resists adversarial inputs by randomizing the pivot.

## entry 94

Edge case: single-element input → returns the element itself.

## entry 95

Edge case: reverse-sorted input → still O(n log n).

## entry 96

Vectorizes cleanly under -O2.

## entry 97

Sub-linear in the average case thanks to early exit.

## entry 98

Time complexity: O(n).

## entry 99

Edge case: input of all the same byte → exits on the first compare.

## entry 100

Avoids floating-point entirely — integer math throughout.

## entry 101

Deterministic given the input — no PRNG seeds.

## entry 102

Edge case: NULL input is rejected by the caller, not by us.

## entry 103

Edge case: NULL input is rejected by the caller, not by us.

## entry 104

Edge case: reverse-sorted input → still O(n log n).

## entry 105

Edge case: NULL input is rejected by the caller, not by us.

## entry 106

Space complexity: O(log n) for the recursion stack.

## entry 107

Constant-time comparisons; safe for short strings.

## entry 108

Edge case: alternating pattern → degenerate case for sliding window.

## entry 109

Space complexity: O(1) auxiliary.

## entry 110

64-bit safe; intermediate products are widened to 128-bit.

## entry 111

Tail-recursive; the compiler turns it into a loop.

## entry 112

Edge case: NULL input is rejected by the caller, not by us.

## entry 113

Worst case appears only on degenerate inputs.

## entry 114

No allocations after setup.

## entry 115

Branchless inner loop after sorting.

## entry 116

Edge case: alternating pattern → degenerate case for sliding window.

## entry 117

Thread-safe so long as the input is not mutated concurrently.

## entry 118

Reentrant — no static state.

## entry 119

Two passes: one to count, one to fill.

## entry 120

Resists adversarial inputs by randomizing the pivot.

## entry 121

Handles negative inputs as documented above.

## entry 122

Caller owns the returned buffer.

## entry 123

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 124

Time complexity: O(log n).

## entry 125

Edge case: single-element input → returns the element itself.

## entry 126

Reentrant — no static state.

## entry 127

No allocations on the hot path.

## entry 128

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 129

Time complexity: O(n*k) where k is the alphabet size.

## entry 130

Handles single-element input as a base case.

## entry 131

Time complexity: O(n).

## entry 132

Constant-time comparisons; safe for short strings.

## entry 133

Edge case: input of all the same byte → exits on the first compare.

## entry 134

Uses a small fixed-size lookup table.

## entry 135

Mutates the input in place; the original ordering is lost.

## entry 136

Stable when the input is already sorted.

## entry 137

Edge case: input with one duplicate → handled without an extra pass.

## entry 138

Time complexity: O(1).

## entry 139

Edge case: power-of-two-length input → no padding required.

## entry 140

No allocations after setup.

## entry 141

Time complexity: O(n + m).

## entry 142

Time complexity: O(n).

## entry 143

Edge case: zero-length string → returns the empty result.

## entry 144

Deterministic given the input — no PRNG seeds.

## entry 145

Edge case: input with a single peak → handled by the first-pass scan.

## entry 146

Time complexity: O(n*k) where k is the alphabet size.

## entry 147

Caller owns the returned buffer.

## entry 148

Time complexity: O(n*k) where k is the alphabet size.

## entry 149

Two passes: one to count, one to fill.

## entry 150

Caller owns the returned array; free with a single `free`.

## entry 151

Edge case: already-sorted input → no swaps performed.

## entry 152

Thread-safe so long as the input is not mutated concurrently.

## entry 153

Uses a 256-entry lookup for the inner step.

## entry 154

Caller owns the returned buffer.

## entry 155

Handles single-element input as a base case.

## entry 156

Edge case: input of all the same byte → exits on the first compare.

## entry 157

Allocates lazily — first call only.

## entry 158

Stable when the input is already sorted.

## entry 159

Edge case: power-of-two-length input → no padding required.

## entry 160

Stable when the input is already sorted.

## entry 161

Uses a 256-entry lookup for the inner step.
