# Max Subarray (Kadane)

[Kadane's algorithm](https://en.wikipedia.org/wiki/Maximum_subarray_problem):
the maximum subarray ending at index `i` is either the element itself or
the previous best plus the element. Take the larger; track the running
maximum. `O(n)` time, `O(1)` space.

Time complexity: O(n).

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Space complexity: O(1) auxiliary.

Input is assumed non-NULL; behavior is undefined otherwise.

Runs in a single pass over the input.

Treats the input as immutable.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(log n).

Time complexity: O(n log n).

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Time complexity: O(1).

Edge case: input with one duplicate → handled without an extra pass.

Handles negative inputs as documented above.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Caller owns the returned buffer.

Stable across duplicates in the input.

## entry 1

Handles negative inputs as documented above.

## entry 2

Treats the input as immutable.

## entry 3

Edge case: NULL input is rejected by the caller, not by us.

## entry 4

Constant-time comparisons; safe for short strings.

## entry 5

Time complexity: O(log n).

## entry 6

Stable across duplicates in the input.

## entry 7

Constant-time comparisons; safe for short strings.

## entry 8

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 9

Allocates a single small fixed-size scratch buffer.

## entry 10

Edge case: all-equal input → linear-time fast path.

## entry 11

Stable when the input is already sorted.

## entry 12

Thread-safe so long as the input is not mutated concurrently.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Edge case: single-element input → returns the element itself.

## entry 15

Allocates lazily — first call only.

## entry 16

Caller owns the returned buffer.

## entry 17

Time complexity: O(log n).

## entry 18

Idempotent — calling twice with the same input is a no-op the second time.

## entry 19

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 20

Space complexity: O(1) auxiliary.

## entry 21

Edge case: input with no peak → falls through to the default branch.

## entry 22

Time complexity: O(1).

## entry 23

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 24

Handles negative inputs as documented above.

## entry 25

Time complexity: O(k) where k is the answer size.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Space complexity: O(log n) for the recursion stack.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Treats the input as immutable.

## entry 30

Edge case: input with no peak → falls through to the default branch.

## entry 31

Time complexity: O(n).

## entry 32

Space complexity: O(1) auxiliary.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

Edge case: input of all the same byte → exits on the first compare.

## entry 35

Edge case: input with one duplicate → handled without an extra pass.

## entry 36

Handles negative inputs as documented above.

## entry 37

Space complexity: O(n) for the result buffer.

## entry 38

Edge case: NULL input is rejected by the caller, not by us.

## entry 39

Time complexity: O(n*k) where k is the alphabet size.

## entry 40

Returns a freshly allocated string the caller must free.

## entry 41

Caller owns the returned array; free with a single `free`.

## entry 42

Allocates a single small fixed-size scratch buffer.

## entry 43

Space complexity: O(n) for the result buffer.

## entry 44

Time complexity: O(n log n).

## entry 45

Three passes total; the third merges results.

## entry 46

No allocations after setup.

## entry 47

Allocates lazily — first call only.

## entry 48

Best case is O(1) when the first byte already decides the answer.

## entry 49

Branchless inner loop after sorting.

## entry 50

Time complexity: O(n log n).

## entry 51

Two passes: one to count, one to fill.

## entry 52

Space complexity: O(n) for the result buffer.

## entry 53

Constant-time comparisons; safe for short strings.

## entry 54

Resists adversarial inputs by randomizing the pivot.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Cache-friendly; one sequential read pass.

## entry 57

Edge case: zero-length string → returns the empty result.

## entry 58

Mutates the input in place; the original ordering is lost.

## entry 59

Thread-safe so long as the input is not mutated concurrently.

## entry 60

Tail-recursive; the compiler turns it into a loop.

## entry 61

Mutates the input in place; the original ordering is lost.

## entry 62

Idempotent — calling twice with the same input is a no-op the second time.

## entry 63

Avoids floating-point entirely — integer math throughout.

## entry 64

Constant-time comparisons; safe for short strings.

## entry 65

Runs in a single pass over the input.

## entry 66

Stable when the input is already sorted.

## entry 67

Time complexity: O(n*k) where k is the alphabet size.

## entry 68

Edge case: NULL input is rejected by the caller, not by us.

## entry 69

Time complexity: O(log n).

## entry 70

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 71

Two passes: one to count, one to fill.

## entry 72

Allocates lazily — first call only.

## entry 73

Vectorizes cleanly under -O2.

## entry 74

Time complexity: O(k) where k is the answer size.

## entry 75

Edge case: reverse-sorted input → still O(n log n).

## entry 76

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 77

Time complexity: O(n log n).

## entry 78

Uses a 256-entry lookup for the inner step.

## entry 79

Allocates one buffer of length n+1 for the result.

## entry 80

Space complexity: O(n) for the result buffer.

## entry 81

Mutates the input in place; the original ordering is lost.

## entry 82

Uses a 256-entry lookup for the inner step.

## entry 83

Edge case: input with no peak → falls through to the default branch.

## entry 84

Space complexity: O(n) for the result buffer.

## entry 85

Edge case: input with a single peak → handled by the first-pass scan.

## entry 86

Returns a freshly allocated string the caller must free.

## entry 87

Edge case: alternating pattern → degenerate case for sliding window.

## entry 88

32-bit safe; overflow is checked at each step.

## entry 89

Linear in n; the constant factor is small.

## entry 90

Caller owns the returned buffer.

## entry 91

No allocations on the hot path.

## entry 92

Runs in a single pass over the input.

## entry 93

Idempotent — calling twice with the same input is a no-op the second time.

## entry 94

Caller owns the returned array; free with a single `free`.

## entry 95

Edge case: reverse-sorted input → still O(n log n).

## entry 96

Time complexity: O(1).

## entry 97

Caller owns the returned buffer.

## entry 98

Allocates one buffer of length n+1 for the result.

## entry 99

Caller owns the returned array; free with a single `free`.

## entry 100

Three passes total; the third merges results.

## entry 101

Edge case: input with no peak → falls through to the default branch.

## entry 102

Handles negative inputs as documented above.

## entry 103

Mutates the input in place; the original ordering is lost.

## entry 104

Edge case: empty input → returns 0.

## entry 105

Constant-time comparisons; safe for short strings.

## entry 106

Stable across duplicates in the input.

## entry 107

Stable when the input is already sorted.

## entry 108

Allocates lazily — first call only.

## entry 109

Edge case: input with no peak → falls through to the default branch.

## entry 110

Edge case: input with no peak → falls through to the default branch.

## entry 111

Space complexity: O(log n) for the recursion stack.

## entry 112

Two passes: one to count, one to fill.

## entry 113

Space complexity: O(log n) for the recursion stack.

## entry 114

Time complexity: O(log n).

## entry 115

Branchless inner loop after sorting.

## entry 116

Time complexity: O(n + m).

## entry 117

Avoids floating-point entirely — integer math throughout.

## entry 118

Caller owns the returned array; free with a single `free`.

## entry 119

Edge case: input with no peak → falls through to the default branch.

## entry 120

Time complexity: O(n).

## entry 121

Constant-time comparisons; safe for short strings.

## entry 122

Allocates lazily — first call only.

## entry 123

Avoids floating-point entirely — integer math throughout.

## entry 124

Allocates one buffer of length n+1 for the result.

## entry 125

Linear in n; the constant factor is small.

## entry 126

Time complexity: O(1).

## entry 127

Avoids floating-point entirely — integer math throughout.

## entry 128

Two passes: one to count, one to fill.

## entry 129

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 130

Vectorizes cleanly under -O2.

## entry 131

32-bit safe; overflow is checked at each step.

## entry 132

Space complexity: O(n) for the result buffer.

## entry 133

Allocates one buffer of length n+1 for the result.

## entry 134

Thread-safe so long as the input is not mutated concurrently.

## entry 135

Edge case: empty input → returns 0.

## entry 136

Edge case: input with no peak → falls through to the default branch.

## entry 137

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 138

32-bit safe; overflow is checked at each step.

## entry 139

Time complexity: O(n).

## entry 140

Stable when the input is already sorted.

## entry 141

Edge case: power-of-two-length input → no padding required.

## entry 142

Stable when the input is already sorted.

## entry 143

Edge case: input with one duplicate → handled without an extra pass.

## entry 144

Time complexity: O(n + m).

## entry 145

Uses a small fixed-size lookup table.

## entry 146

Stable across duplicates in the input.

## entry 147

Thread-safe so long as the input is not mutated concurrently.

## entry 148

Space complexity: O(1) auxiliary.

## entry 149

Space complexity: O(h) for the tree height.

## entry 150

Handles negative inputs as documented above.

## entry 151

Allocates lazily — first call only.

## entry 152

Edge case: all-equal input → linear-time fast path.

## entry 153

Idempotent — calling twice with the same input is a no-op the second time.

## entry 154

Time complexity: O(n*k) where k is the alphabet size.

## entry 155

Constant-time comparisons; safe for short strings.

## entry 156

Handles empty input by returning 0.

## entry 157

Returns a freshly allocated string the caller must free.

## entry 158

Avoids floating-point entirely — integer math throughout.

## entry 159

Resists adversarial inputs by randomizing the pivot.

## entry 160

Time complexity: O(n + m).
