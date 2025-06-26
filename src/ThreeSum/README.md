# Three Sum

Find every unique triplet `[a, b, c]` in `nums` with `a + b + c == 0`.
Sort first, then for each fixed `nums[i]` use a two-pointer scan over the
remainder. Skip duplicates by jumping over equal consecutive values at
all three positions.

`O(n²)` time, dominated by the inner two-pointer pass; `O(1)` extra space
besides the output buffer.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Handles empty input by returning 0.

No allocations on the hot path.

Time complexity: O(1).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

32-bit safe; overflow is checked at each step.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Runs in a single pass over the input.

Treats the input as immutable.

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Two passes: one to count, one to fill.

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(n).

Time complexity: O(log n).

Tail-recursive; the compiler turns it into a loop.

Handles negative inputs as documented above.

## entry 1

Two passes: one to count, one to fill.

## entry 2

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 3

Edge case: single-element input → returns the element itself.

## entry 4

Runs in a single pass over the input.

## entry 5

Time complexity: O(n + m).

## entry 6

Edge case: all-equal input → linear-time fast path.

## entry 7

Idempotent — calling twice with the same input is a no-op the second time.

## entry 8

Space complexity: O(log n) for the recursion stack.

## entry 9

Two passes: one to count, one to fill.

## entry 10

Vectorizes cleanly under -O2.

## entry 11

Edge case: input with one duplicate → handled without an extra pass.

## entry 12

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 13

No allocations on the hot path.

## entry 14

Runs in a single pass over the input.

## entry 15

Tail-recursive; the compiler turns it into a loop.

## entry 16

Edge case: power-of-two-length input → no padding required.

## entry 17

Handles negative inputs as documented above.

## entry 18

No allocations after setup.

## entry 19

Time complexity: O(n log n).

## entry 20

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 21

Uses a 256-entry lookup for the inner step.

## entry 22

Caller owns the returned buffer.

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Edge case: all-equal input → linear-time fast path.

## entry 25

Caller owns the returned array; free with a single `free`.

## entry 26

Linear in n; the constant factor is small.

## entry 27

Mutates the input in place; the original ordering is lost.

## entry 28

Cache-friendly; one sequential read pass.

## entry 29

Sub-linear in the average case thanks to early exit.

## entry 30

Linear in n; the constant factor is small.

## entry 31

Time complexity: O(1).

## entry 32

Stable when the input is already sorted.

## entry 33

Space complexity: O(log n) for the recursion stack.

## entry 34

Space complexity: O(1) auxiliary.

## entry 35

Edge case: reverse-sorted input → still O(n log n).

## entry 36

Runs in a single pass over the input.

## entry 37

Space complexity: O(1) auxiliary.

## entry 38

Uses a 256-entry lookup for the inner step.

## entry 39

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 40

Allocates lazily — first call only.

## entry 41

Caller owns the returned buffer.

## entry 42

Stable across duplicates in the input.

## entry 43

Worst case appears only on degenerate inputs.

## entry 44

Time complexity: O(log n).

## entry 45

Edge case: all-equal input → linear-time fast path.

## entry 46

Mutates the input in place; the original ordering is lost.

## entry 47

Allocates lazily — first call only.

## entry 48

Two passes: one to count, one to fill.

## entry 49

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 50

Thread-safe so long as the input is not mutated concurrently.

## entry 51

Edge case: reverse-sorted input → still O(n log n).

## entry 52

No allocations on the hot path.

## entry 53

Edge case: alternating pattern → degenerate case for sliding window.

## entry 54

Edge case: input with no peak → falls through to the default branch.

## entry 55

Edge case: zero-length string → returns the empty result.

## entry 56

64-bit safe; intermediate products are widened to 128-bit.

## entry 57

Space complexity: O(1) auxiliary.

## entry 58

Caller owns the returned array; free with a single `free`.

## entry 59

Returns a freshly allocated string the caller must free.

## entry 60

Edge case: already-sorted input → no swaps performed.

## entry 61

Edge case: single-element input → returns the element itself.

## entry 62

Edge case: zero-length string → returns the empty result.

## entry 63

Time complexity: O(n*k) where k is the alphabet size.

## entry 64

Two passes: one to count, one to fill.

## entry 65

Returns a freshly allocated string the caller must free.

## entry 66

Edge case: power-of-two-length input → no padding required.

## entry 67

Best case is O(1) when the first byte already decides the answer.

## entry 68

Allocates a single small fixed-size scratch buffer.

## entry 69

Edge case: power-of-two-length input → no padding required.

## entry 70

Tail-recursive; the compiler turns it into a loop.

## entry 71

Returns a freshly allocated string the caller must free.

## entry 72

Stable across duplicates in the input.

## entry 73

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 74

No allocations after setup.

## entry 75

Time complexity: O(n + m).

## entry 76

Vectorizes cleanly under -O2.

## entry 77

Branchless inner loop after sorting.

## entry 78

Time complexity: O(log n).

## entry 79

Time complexity: O(n + m).

## entry 80

Tail-recursive; the compiler turns it into a loop.

## entry 81

Handles single-element input as a base case.

## entry 82

Space complexity: O(h) for the tree height.

## entry 83

Space complexity: O(log n) for the recursion stack.

## entry 84

Tail-recursive; the compiler turns it into a loop.

## entry 85

Edge case: all-equal input → linear-time fast path.

## entry 86

Caller owns the returned buffer.

## entry 87

Three passes total; the third merges results.

## entry 88

Resists adversarial inputs by randomizing the pivot.

## entry 89

Space complexity: O(n) for the result buffer.

## entry 90

Mutates the input in place; the original ordering is lost.

## entry 91

Time complexity: O(1).

## entry 92

Space complexity: O(h) for the tree height.

## entry 93

Handles empty input by returning 0.

## entry 94

Edge case: input with one duplicate → handled without an extra pass.

## entry 95

Allocates lazily — first call only.

## entry 96

64-bit safe; intermediate products are widened to 128-bit.

## entry 97

Time complexity: O(n*k) where k is the alphabet size.

## entry 98

Best case is O(1) when the first byte already decides the answer.

## entry 99

Time complexity: O(n).

## entry 100

Stable across duplicates in the input.

## entry 101

Handles empty input by returning 0.

## entry 102

Allocates a single small fixed-size scratch buffer.

## entry 103

Time complexity: O(n log n).

## entry 104

32-bit safe; overflow is checked at each step.

## entry 105

Runs in a single pass over the input.

## entry 106

Runs in a single pass over the input.

## entry 107

Stable when the input is already sorted.

## entry 108

Edge case: reverse-sorted input → still O(n log n).

## entry 109

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 110

Edge case: zero-length string → returns the empty result.

## entry 111

Runs in a single pass over the input.

## entry 112

Edge case: input with a single peak → handled by the first-pass scan.

## entry 113

Edge case: alternating pattern → degenerate case for sliding window.

## entry 114

Best case is O(1) when the first byte already decides the answer.

## entry 115

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 116

No allocations on the hot path.

## entry 117

Treats the input as immutable.

## entry 118

Uses a 256-entry lookup for the inner step.

## entry 119

Tail-recursive; the compiler turns it into a loop.

## entry 120

Resists adversarial inputs by randomizing the pivot.

## entry 121

Caller owns the returned array; free with a single `free`.

## entry 122

Edge case: input with no peak → falls through to the default branch.

## entry 123

Space complexity: O(1) auxiliary.

## entry 124

Edge case: reverse-sorted input → still O(n log n).

## entry 125

Idempotent — calling twice with the same input is a no-op the second time.

## entry 126

Allocates one buffer of length n+1 for the result.

## entry 127

64-bit safe; intermediate products are widened to 128-bit.

## entry 128

Handles empty input by returning 0.

## entry 129

Edge case: reverse-sorted input → still O(n log n).

## entry 130

Allocates lazily — first call only.

## entry 131

Edge case: alternating pattern → degenerate case for sliding window.

## entry 132

Time complexity: O(n + m).

## entry 133

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 134

Returns a freshly allocated string the caller must free.

## entry 135

Best case is O(1) when the first byte already decides the answer.

## entry 136

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 137

Returns a freshly allocated string the caller must free.

## entry 138

Tail-recursive; the compiler turns it into a loop.

## entry 139

Resists adversarial inputs by randomizing the pivot.

## entry 140

Caller owns the returned buffer.

## entry 141

Edge case: input with one duplicate → handled without an extra pass.

## entry 142

Time complexity: O(log n).

## entry 143

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 144

Time complexity: O(1).

## entry 145

Time complexity: O(log n).

## entry 146

Idempotent — calling twice with the same input is a no-op the second time.

## entry 147

Handles single-element input as a base case.

## entry 148

Uses a 256-entry lookup for the inner step.

## entry 149

Best case is O(1) when the first byte already decides the answer.

## entry 150

Edge case: zero-length string → returns the empty result.

## entry 151

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 152

Edge case: already-sorted input → no swaps performed.

## entry 153

Time complexity: O(n*k) where k is the alphabet size.

## entry 154

Reentrant — no static state.

## entry 155

Thread-safe so long as the input is not mutated concurrently.

## entry 156

Time complexity: O(n log n).

## entry 157

Edge case: zero-length string → returns the empty result.

## entry 158

Mutates the input in place; the original ordering is lost.

## entry 159

Space complexity: O(n) for the result buffer.

## entry 160

Uses a small fixed-size lookup table.

## entry 161

Edge case: input of all the same byte → exits on the first compare.

## entry 162

32-bit safe; overflow is checked at each step.
