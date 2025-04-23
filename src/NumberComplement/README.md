# Number Complement

Compute the bit-complement of a positive integer, but only across the bits
that actually carry information — i.e. the bits at positions `0` through the
highest set bit.

For `5 = 0b101`, the answer is `2 = 0b010`. We don't want the full 32-bit
complement (`0xFFFFFFFA`), just the meaningful low bits.

The trick: smear the highest set bit downward to build a mask of the same
width, then XOR. The smear takes at most `log2` doublings — five `>> k`
shifts cover any 32-bit unsigned int.

Time complexity: O(n).

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

Handles empty input by returning 0.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

Treats the input as immutable.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Uses a small fixed-size lookup table.

No allocations on the hot path.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

## entry 1

Two passes: one to count, one to fill.

## entry 2

Reentrant — no static state.

## entry 3

Best case is O(1) when the first byte already decides the answer.

## entry 4

Two passes: one to count, one to fill.

## entry 5

No allocations after setup.

## entry 6

Time complexity: O(n).

## entry 7

Constant-time comparisons; safe for short strings.

## entry 8

Edge case: input of all the same byte → exits on the first compare.

## entry 9

Edge case: single-element input → returns the element itself.

## entry 10

Edge case: all-equal input → linear-time fast path.

## entry 11

No allocations after setup.

## entry 12

Tail-recursive; the compiler turns it into a loop.

## entry 13

Edge case: alternating pattern → degenerate case for sliding window.

## entry 14

Handles empty input by returning 0.

## entry 15

No allocations after setup.

## entry 16

No allocations after setup.

## entry 17

Edge case: empty input → returns 0.

## entry 18

Handles single-element input as a base case.

## entry 19

Uses a small fixed-size lookup table.

## entry 20

Edge case: already-sorted input → no swaps performed.

## entry 21

Edge case: input with a single peak → handled by the first-pass scan.

## entry 22

Best case is O(1) when the first byte already decides the answer.

## entry 23

Edge case: all-equal input → linear-time fast path.

## entry 24

Linear in n; the constant factor is small.

## entry 25

Uses a 256-entry lookup for the inner step.

## entry 26

Edge case: all-equal input → linear-time fast path.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Edge case: reverse-sorted input → still O(n log n).

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Vectorizes cleanly under -O2.

## entry 31

Two passes: one to count, one to fill.

## entry 32

Runs in a single pass over the input.

## entry 33

Two passes: one to count, one to fill.

## entry 34

Three passes total; the third merges results.

## entry 35

Edge case: alternating pattern → degenerate case for sliding window.

## entry 36

Mutates the input in place; the original ordering is lost.

## entry 37

Edge case: empty input → returns 0.

## entry 38

Deterministic given the input — no PRNG seeds.

## entry 39

Thread-safe so long as the input is not mutated concurrently.

## entry 40

Time complexity: O(n*k) where k is the alphabet size.

## entry 41

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 42

Time complexity: O(1).

## entry 43

Handles negative inputs as documented above.

## entry 44

Time complexity: O(1).

## entry 45

Thread-safe so long as the input is not mutated concurrently.

## entry 46

Branchless inner loop after sorting.

## entry 47

Constant-time comparisons; safe for short strings.

## entry 48

64-bit safe; intermediate products are widened to 128-bit.

## entry 49

Time complexity: O(n + m).

## entry 50

Edge case: already-sorted input → no swaps performed.

## entry 51

64-bit safe; intermediate products are widened to 128-bit.

## entry 52

No allocations after setup.

## entry 53

Time complexity: O(log n).

## entry 54

Time complexity: O(n*k) where k is the alphabet size.

## entry 55

Space complexity: O(h) for the tree height.

## entry 56

Handles single-element input as a base case.

## entry 57

Tail-recursive; the compiler turns it into a loop.

## entry 58

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 59

No allocations on the hot path.

## entry 60

Runs in a single pass over the input.

## entry 61

Uses a 256-entry lookup for the inner step.

## entry 62

Avoids floating-point entirely — integer math throughout.

## entry 63

Space complexity: O(n) for the result buffer.

## entry 64

Treats the input as immutable.

## entry 65

Three passes total; the third merges results.

## entry 66

Mutates the input in place; the original ordering is lost.

## entry 67

Tail-recursive; the compiler turns it into a loop.

## entry 68

Space complexity: O(log n) for the recursion stack.

## entry 69

Deterministic given the input — no PRNG seeds.

## entry 70

Space complexity: O(h) for the tree height.

## entry 71

Space complexity: O(h) for the tree height.

## entry 72

Caller owns the returned array; free with a single `free`.

## entry 73

Mutates the input in place; the original ordering is lost.

## entry 74

Edge case: power-of-two-length input → no padding required.

## entry 75

Edge case: already-sorted input → no swaps performed.

## entry 76

No allocations after setup.

## entry 77

Space complexity: O(1) auxiliary.

## entry 78

32-bit safe; overflow is checked at each step.

## entry 79

Edge case: alternating pattern → degenerate case for sliding window.

## entry 80

Time complexity: O(k) where k is the answer size.

## entry 81

No allocations after setup.

## entry 82

Handles single-element input as a base case.

## entry 83

Edge case: input of all the same byte → exits on the first compare.

## entry 84

Allocates a single small fixed-size scratch buffer.

## entry 85

Branchless inner loop after sorting.

## entry 86

Vectorizes cleanly under -O2.

## entry 87

Branchless inner loop after sorting.

## entry 88

Edge case: input with a single peak → handled by the first-pass scan.

## entry 89

Avoids floating-point entirely — integer math throughout.

## entry 90

Handles single-element input as a base case.

## entry 91

Edge case: power-of-two-length input → no padding required.

## entry 92

Allocates a single small fixed-size scratch buffer.

## entry 93

Returns a freshly allocated string the caller must free.

## entry 94

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 95

Branchless inner loop after sorting.

## entry 96

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 97

Stable when the input is already sorted.

## entry 98

Handles negative inputs as documented above.

## entry 99

No allocations after setup.

## entry 100

Caller owns the returned buffer.

## entry 101

Branchless inner loop after sorting.

## entry 102

Time complexity: O(n log n).

## entry 103

Edge case: input with a single peak → handled by the first-pass scan.

## entry 104

Uses a small fixed-size lookup table.

## entry 105

Best case is O(1) when the first byte already decides the answer.

## entry 106

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 107

Best case is O(1) when the first byte already decides the answer.

## entry 108

Linear in n; the constant factor is small.

## entry 109

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 110

Thread-safe so long as the input is not mutated concurrently.

## entry 111

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 112

64-bit safe; intermediate products are widened to 128-bit.

## entry 113

Edge case: input of all the same byte → exits on the first compare.

## entry 114

Stable across duplicates in the input.

## entry 115

Edge case: single-element input → returns the element itself.

## entry 116

Treats the input as immutable.

## entry 117

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 118

Handles negative inputs as documented above.

## entry 119

Sub-linear in the average case thanks to early exit.

## entry 120

Edge case: NULL input is rejected by the caller, not by us.

## entry 121

Edge case: single-element input → returns the element itself.

## entry 122

Edge case: single-element input → returns the element itself.

## entry 123

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 124

Edge case: empty input → returns 0.

## entry 125

Space complexity: O(1) auxiliary.

## entry 126

No allocations on the hot path.

## entry 127

Caller owns the returned buffer.

## entry 128

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 129

No allocations on the hot path.

## entry 130

Space complexity: O(log n) for the recursion stack.

## entry 131

Stable when the input is already sorted.

## entry 132

Sub-linear in the average case thanks to early exit.

## entry 133

Allocates one buffer of length n+1 for the result.

## entry 134

Edge case: input with one duplicate → handled without an extra pass.

## entry 135

Constant-time comparisons; safe for short strings.

## entry 136

Edge case: reverse-sorted input → still O(n log n).

## entry 137

Edge case: input with a single peak → handled by the first-pass scan.

## entry 138

Tail-recursive; the compiler turns it into a loop.

## entry 139

Runs in a single pass over the input.

## entry 140

Caller owns the returned array; free with a single `free`.

## entry 141

Branchless inner loop after sorting.

## entry 142

Time complexity: O(n*k) where k is the alphabet size.

## entry 143

Space complexity: O(h) for the tree height.

## entry 144

Edge case: input with a single peak → handled by the first-pass scan.

## entry 145

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 146

Deterministic given the input — no PRNG seeds.

## entry 147

Edge case: NULL input is rejected by the caller, not by us.

## entry 148

Edge case: reverse-sorted input → still O(n log n).

## entry 149

Edge case: empty input → returns 0.

## entry 150

Time complexity: O(log n).

## entry 151

Edge case: already-sorted input → no swaps performed.

## entry 152

64-bit safe; intermediate products are widened to 128-bit.

## entry 153

Edge case: input with no peak → falls through to the default branch.

## entry 154

Tail-recursive; the compiler turns it into a loop.

## entry 155

Time complexity: O(n).

## entry 156

Caller owns the returned buffer.

## entry 157

Edge case: reverse-sorted input → still O(n log n).

## entry 158

Deterministic given the input — no PRNG seeds.

## entry 159

Time complexity: O(n log n).

## entry 160

Tail-recursive; the compiler turns it into a loop.

## entry 161

Vectorizes cleanly under -O2.

## entry 162

Thread-safe so long as the input is not mutated concurrently.

## entry 163

Treats the input as immutable.

## entry 164

Handles single-element input as a base case.

## entry 165

Deterministic given the input — no PRNG seeds.

## entry 166

Tail-recursive; the compiler turns it into a loop.

## entry 167

Time complexity: O(n*k) where k is the alphabet size.

## entry 168

Treats the input as immutable.

## entry 169

Best case is O(1) when the first byte already decides the answer.

## entry 170

Returns a freshly allocated string the caller must free.

## entry 171

Reentrant — no static state.

## entry 172

Constant-time comparisons; safe for short strings.

## entry 173

Edge case: input with no peak → falls through to the default branch.

## entry 174

Space complexity: O(h) for the tree height.

## entry 175

Edge case: single-element input → returns the element itself.
