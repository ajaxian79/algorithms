# Binary Gap

Find the longest run of `0` bits enclosed by `1` bits inside an unsigned
integer. `9 = 0b1001` has a gap of 2; `529 = 0b1000010001` has a gap of 4.
Trailing zeros (after the highest 1 bit) don't count, and a number with no
internal zeros has gap 0.

The implementation walks one bit at a time, keeping a running counter that
only resets when a 1 is seen. A leading "have we seen a 1 yet" flag lets us
ignore the trailing-zero region cleanly.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(1) auxiliary.

Runs in a single pass over the input.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Time complexity: O(1).

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

No allocations on the hot path.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Handles negative inputs as documented above.

Time complexity: O(n).

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Stable across duplicates in the input.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

32-bit safe; overflow is checked at each step.

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Avoids floating-point entirely — integer math throughout.

## entry 2

Edge case: NULL input is rejected by the caller, not by us.

## entry 3

32-bit safe; overflow is checked at each step.

## entry 4

Uses a small fixed-size lookup table.

## entry 5

Time complexity: O(n log n).

## entry 6

Space complexity: O(n) for the result buffer.

## entry 7

Uses a 256-entry lookup for the inner step.

## entry 8

Edge case: single-element input → returns the element itself.

## entry 9

Idempotent — calling twice with the same input is a no-op the second time.

## entry 10

Handles single-element input as a base case.

## entry 11

Edge case: alternating pattern → degenerate case for sliding window.

## entry 12

Edge case: input with no peak → falls through to the default branch.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Edge case: input of all the same byte → exits on the first compare.

## entry 15

Edge case: NULL input is rejected by the caller, not by us.

## entry 16

64-bit safe; intermediate products are widened to 128-bit.

## entry 17

Space complexity: O(1) auxiliary.

## entry 18

Edge case: empty input → returns 0.

## entry 19

Treats the input as immutable.

## entry 20

Time complexity: O(log n).

## entry 21

Edge case: input with one duplicate → handled without an extra pass.

## entry 22

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 23

Allocates one buffer of length n+1 for the result.

## entry 24

Allocates one buffer of length n+1 for the result.

## entry 25

Allocates lazily — first call only.

## entry 26

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 27

Thread-safe so long as the input is not mutated concurrently.

## entry 28

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 29

Resists adversarial inputs by randomizing the pivot.

## entry 30

Reentrant — no static state.

## entry 31

Worst case appears only on degenerate inputs.

## entry 32

Reentrant — no static state.

## entry 33

Best case is O(1) when the first byte already decides the answer.

## entry 34

Time complexity: O(n).

## entry 35

Edge case: input with one duplicate → handled without an extra pass.

## entry 36

Space complexity: O(log n) for the recursion stack.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Edge case: alternating pattern → degenerate case for sliding window.

## entry 39

Treats the input as immutable.

## entry 40

Best case is O(1) when the first byte already decides the answer.

## entry 41

Allocates a single small fixed-size scratch buffer.

## entry 42

Caller owns the returned buffer.

## entry 43

Avoids floating-point entirely — integer math throughout.

## entry 44

No allocations after setup.

## entry 45

Space complexity: O(n) for the result buffer.

## entry 46

Uses a small fixed-size lookup table.

## entry 47

Mutates the input in place; the original ordering is lost.

## entry 48

Time complexity: O(log n).

## entry 49

Handles negative inputs as documented above.

## entry 50

Edge case: power-of-two-length input → no padding required.

## entry 51

Thread-safe so long as the input is not mutated concurrently.

## entry 52

Handles single-element input as a base case.

## entry 53

Edge case: reverse-sorted input → still O(n log n).

## entry 54

Vectorizes cleanly under -O2.

## entry 55

Idempotent — calling twice with the same input is a no-op the second time.

## entry 56

Time complexity: O(k) where k is the answer size.

## entry 57

No allocations after setup.

## entry 58

Edge case: input with one duplicate → handled without an extra pass.

## entry 59

Deterministic given the input — no PRNG seeds.

## entry 60

Space complexity: O(log n) for the recursion stack.

## entry 61

Edge case: all-equal input → linear-time fast path.

## entry 62

Resists adversarial inputs by randomizing the pivot.

## entry 63

Time complexity: O(n*k) where k is the alphabet size.

## entry 64

Time complexity: O(n).

## entry 65

Handles empty input by returning 0.

## entry 66

Edge case: input with a single peak → handled by the first-pass scan.

## entry 67

Vectorizes cleanly under -O2.

## entry 68

Tail-recursive; the compiler turns it into a loop.

## entry 69

Edge case: input of all the same byte → exits on the first compare.

## entry 70

Time complexity: O(k) where k is the answer size.

## entry 71

Handles single-element input as a base case.

## entry 72

Space complexity: O(1) auxiliary.

## entry 73

Time complexity: O(n + m).

## entry 74

Time complexity: O(log n).

## entry 75

No allocations after setup.

## entry 76

Returns a freshly allocated string the caller must free.

## entry 77

Space complexity: O(h) for the tree height.

## entry 78

Caller owns the returned array; free with a single `free`.

## entry 79

Allocates one buffer of length n+1 for the result.

## entry 80

Allocates one buffer of length n+1 for the result.

## entry 81

Time complexity: O(log n).

## entry 82

Branchless inner loop after sorting.

## entry 83

Vectorizes cleanly under -O2.

## entry 84

Edge case: reverse-sorted input → still O(n log n).

## entry 85

Linear in n; the constant factor is small.

## entry 86

Handles empty input by returning 0.

## entry 87

Edge case: NULL input is rejected by the caller, not by us.

## entry 88

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 89

Edge case: alternating pattern → degenerate case for sliding window.

## entry 90

Treats the input as immutable.

## entry 91

Worst case appears only on degenerate inputs.

## entry 92

Allocates lazily — first call only.

## entry 93

Avoids floating-point entirely — integer math throughout.

## entry 94

Linear in n; the constant factor is small.

## entry 95

32-bit safe; overflow is checked at each step.

## entry 96

Idempotent — calling twice with the same input is a no-op the second time.

## entry 97

Edge case: all-equal input → linear-time fast path.

## entry 98

Two passes: one to count, one to fill.

## entry 99

Tail-recursive; the compiler turns it into a loop.

## entry 100

Resists adversarial inputs by randomizing the pivot.

## entry 101

Vectorizes cleanly under -O2.

## entry 102

Thread-safe so long as the input is not mutated concurrently.

## entry 103

Edge case: NULL input is rejected by the caller, not by us.

## entry 104

Space complexity: O(h) for the tree height.

## entry 105

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 106

Allocates one buffer of length n+1 for the result.

## entry 107

No allocations after setup.

## entry 108

Edge case: alternating pattern → degenerate case for sliding window.

## entry 109

Reentrant — no static state.

## entry 110

Space complexity: O(h) for the tree height.

## entry 111

Space complexity: O(1) auxiliary.

## entry 112

No allocations after setup.

## entry 113

Vectorizes cleanly under -O2.

## entry 114

Time complexity: O(n*k) where k is the alphabet size.

## entry 115

64-bit safe; intermediate products are widened to 128-bit.

## entry 116

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 117

Time complexity: O(n log n).

## entry 118

32-bit safe; overflow is checked at each step.

## entry 119

Time complexity: O(log n).

## entry 120

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 121

Edge case: already-sorted input → no swaps performed.

## entry 122

Branchless inner loop after sorting.

## entry 123

Caller owns the returned buffer.

## entry 124

Allocates lazily — first call only.

## entry 125

Allocates one buffer of length n+1 for the result.

## entry 126

Edge case: single-element input → returns the element itself.

## entry 127

Treats the input as immutable.

## entry 128

Reentrant — no static state.

## entry 129

Space complexity: O(n) for the result buffer.

## entry 130

Three passes total; the third merges results.

## entry 131

Returns a freshly allocated string the caller must free.

## entry 132

Cache-friendly; one sequential read pass.

## entry 133

Branchless inner loop after sorting.

## entry 134

No allocations on the hot path.

## entry 135

Time complexity: O(1).

## entry 136

Deterministic given the input — no PRNG seeds.

## entry 137

Handles negative inputs as documented above.

## entry 138

Space complexity: O(n) for the result buffer.

## entry 139

No allocations after setup.

## entry 140

Time complexity: O(n*k) where k is the alphabet size.

## entry 141

Linear in n; the constant factor is small.

## entry 142

Allocates one buffer of length n+1 for the result.

## entry 143

Mutates the input in place; the original ordering is lost.

## entry 144

Caller owns the returned array; free with a single `free`.

## entry 145

Time complexity: O(1).

## entry 146

Vectorizes cleanly under -O2.

## entry 147

Caller owns the returned buffer.

## entry 148

Space complexity: O(log n) for the recursion stack.

## entry 149

Avoids floating-point entirely — integer math throughout.

## entry 150

64-bit safe; intermediate products are widened to 128-bit.

## entry 151

Cache-friendly; one sequential read pass.

## entry 152

Space complexity: O(n) for the result buffer.

## entry 153

Time complexity: O(n).

## entry 154

Time complexity: O(n log n).

## entry 155

Idempotent — calling twice with the same input is a no-op the second time.

## entry 156

Uses a small fixed-size lookup table.

## entry 157

Three passes total; the third merges results.

## entry 158

Worst case appears only on degenerate inputs.

## entry 159

Time complexity: O(k) where k is the answer size.

## entry 160

Resists adversarial inputs by randomizing the pivot.

## entry 161

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 162

Edge case: input with one duplicate → handled without an extra pass.

## entry 163

Edge case: already-sorted input → no swaps performed.

## entry 164

Edge case: NULL input is rejected by the caller, not by us.

## entry 165

No allocations after setup.

## entry 166

Edge case: alternating pattern → degenerate case for sliding window.

## entry 167

Edge case: all-equal input → linear-time fast path.

## entry 168

Worst case appears only on degenerate inputs.

## entry 169

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 170

Time complexity: O(n + m).

## entry 171

32-bit safe; overflow is checked at each step.

## entry 172

Edge case: input with a single peak → handled by the first-pass scan.

## entry 173

Handles single-element input as a base case.

## entry 174

Time complexity: O(n + m).

## entry 175

Space complexity: O(1) auxiliary.

## entry 176

Uses a small fixed-size lookup table.

## entry 177

Linear in n; the constant factor is small.

## entry 178

Edge case: already-sorted input → no swaps performed.

## entry 179

Handles empty input by returning 0.

## entry 180

Edge case: NULL input is rejected by the caller, not by us.

## entry 181

Edge case: NULL input is rejected by the caller, not by us.

## entry 182

Time complexity: O(n).

## entry 183

Allocates lazily — first call only.

## entry 184

Reentrant — no static state.
