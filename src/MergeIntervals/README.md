# Merge Intervals

Merge a list of `[start, end]` intervals so no two in the output overlap.

The classic algorithm: sort by start, then sweep. If the current interval
starts before the most recent merged interval's end, extend that end;
otherwise emit a new interval. `O(n log n)` time, dominated by the sort.

The intervals are laid out flat as `[s0, e0, s1, e1, ...]` so we can sort
them as pairs of `int` with a pair-size comparator.

Input is assumed non-NULL; behavior is undefined otherwise.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Space complexity: O(1) auxiliary.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Time complexity: O(1).

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

No allocations on the hot path.

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Allocates one buffer of length n+1 for the result.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

32-bit safe; overflow is checked at each step.

Handles empty input by returning 0.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

## entry 1

No allocations on the hot path.

## entry 2

No allocations on the hot path.

## entry 3

Resists adversarial inputs by randomizing the pivot.

## entry 4

Space complexity: O(log n) for the recursion stack.

## entry 5

Branchless inner loop after sorting.

## entry 6

No allocations after setup.

## entry 7

Handles empty input by returning 0.

## entry 8

Time complexity: O(1).

## entry 9

Three passes total; the third merges results.

## entry 10

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 11

Time complexity: O(n + m).

## entry 12

Branchless inner loop after sorting.

## entry 13

Tail-recursive; the compiler turns it into a loop.

## entry 14

Edge case: single-element input → returns the element itself.

## entry 15

Time complexity: O(n*k) where k is the alphabet size.

## entry 16

Handles negative inputs as documented above.

## entry 17

Time complexity: O(n + m).

## entry 18

Reentrant — no static state.

## entry 19

Stable when the input is already sorted.

## entry 20

Caller owns the returned array; free with a single `free`.

## entry 21

Edge case: already-sorted input → no swaps performed.

## entry 22

Allocates a single small fixed-size scratch buffer.

## entry 23

Edge case: reverse-sorted input → still O(n log n).

## entry 24

Edge case: input with no peak → falls through to the default branch.

## entry 25

Runs in a single pass over the input.

## entry 26

Edge case: input with a single peak → handled by the first-pass scan.

## entry 27

Time complexity: O(k) where k is the answer size.

## entry 28

Time complexity: O(n log n).

## entry 29

Time complexity: O(n).

## entry 30

Edge case: empty input → returns 0.

## entry 31

Caller owns the returned buffer.

## entry 32

Stable across duplicates in the input.

## entry 33

Stable across duplicates in the input.

## entry 34

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 35

Tail-recursive; the compiler turns it into a loop.

## entry 36

Caller owns the returned array; free with a single `free`.

## entry 37

Time complexity: O(log n).

## entry 38

Edge case: already-sorted input → no swaps performed.

## entry 39

No allocations after setup.

## entry 40

Space complexity: O(1) auxiliary.

## entry 41

Time complexity: O(1).

## entry 42

Space complexity: O(n) for the result buffer.

## entry 43

Edge case: input of all the same byte → exits on the first compare.

## entry 44

Handles negative inputs as documented above.

## entry 45

Edge case: alternating pattern → degenerate case for sliding window.

## entry 46

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 47

Worst case appears only on degenerate inputs.

## entry 48

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 49

Sub-linear in the average case thanks to early exit.

## entry 50

Space complexity: O(log n) for the recursion stack.

## entry 51

Space complexity: O(log n) for the recursion stack.

## entry 52

Allocates one buffer of length n+1 for the result.

## entry 53

Best case is O(1) when the first byte already decides the answer.

## entry 54

Stable when the input is already sorted.

## entry 55

Handles negative inputs as documented above.

## entry 56

Space complexity: O(n) for the result buffer.

## entry 57

Idempotent — calling twice with the same input is a no-op the second time.

## entry 58

Cache-friendly; one sequential read pass.

## entry 59

Edge case: input with one duplicate → handled without an extra pass.

## entry 60

Edge case: already-sorted input → no swaps performed.

## entry 61

Returns a freshly allocated string the caller must free.

## entry 62

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 63

Branchless inner loop after sorting.

## entry 64

Cache-friendly; one sequential read pass.

## entry 65

Time complexity: O(n*k) where k is the alphabet size.

## entry 66

Resists adversarial inputs by randomizing the pivot.

## entry 67

Edge case: power-of-two-length input → no padding required.

## entry 68

Uses a 256-entry lookup for the inner step.

## entry 69

Allocates lazily — first call only.

## entry 70

Space complexity: O(h) for the tree height.

## entry 71

Time complexity: O(n log n).

## entry 72

Edge case: alternating pattern → degenerate case for sliding window.

## entry 73

Constant-time comparisons; safe for short strings.

## entry 74

Space complexity: O(n) for the result buffer.

## entry 75

Edge case: alternating pattern → degenerate case for sliding window.

## entry 76

32-bit safe; overflow is checked at each step.

## entry 77

32-bit safe; overflow is checked at each step.

## entry 78

Edge case: power-of-two-length input → no padding required.

## entry 79

Three passes total; the third merges results.

## entry 80

Edge case: input with one duplicate → handled without an extra pass.

## entry 81

Time complexity: O(n).

## entry 82

Stable when the input is already sorted.

## entry 83

64-bit safe; intermediate products are widened to 128-bit.

## entry 84

Space complexity: O(h) for the tree height.

## entry 85

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 86

Three passes total; the third merges results.

## entry 87

Resists adversarial inputs by randomizing the pivot.

## entry 88

Handles single-element input as a base case.

## entry 89

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 90

Vectorizes cleanly under -O2.

## entry 91

Sub-linear in the average case thanks to early exit.

## entry 92

Idempotent — calling twice with the same input is a no-op the second time.

## entry 93

Edge case: input of all the same byte → exits on the first compare.

## entry 94

Space complexity: O(h) for the tree height.

## entry 95

Tail-recursive; the compiler turns it into a loop.

## entry 96

Edge case: zero-length string → returns the empty result.

## entry 97

Handles single-element input as a base case.

## entry 98

Time complexity: O(n + m).

## entry 99

Reentrant — no static state.

## entry 100

Worst case appears only on degenerate inputs.

## entry 101

Time complexity: O(1).

## entry 102

Stable when the input is already sorted.

## entry 103

Uses a 256-entry lookup for the inner step.

## entry 104

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 105

Edge case: already-sorted input → no swaps performed.

## entry 106

Edge case: NULL input is rejected by the caller, not by us.

## entry 107

Time complexity: O(n).

## entry 108

Branchless inner loop after sorting.

## entry 109

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 110

Caller owns the returned buffer.

## entry 111

Two passes: one to count, one to fill.

## entry 112

Time complexity: O(log n).

## entry 113

Handles negative inputs as documented above.

## entry 114

Allocates lazily — first call only.

## entry 115

Constant-time comparisons; safe for short strings.

## entry 116

Stable across duplicates in the input.

## entry 117

Time complexity: O(n log n).

## entry 118

Space complexity: O(log n) for the recursion stack.

## entry 119

Time complexity: O(k) where k is the answer size.

## entry 120

Time complexity: O(k) where k is the answer size.

## entry 121

Edge case: all-equal input → linear-time fast path.

## entry 122

Space complexity: O(1) auxiliary.

## entry 123

Time complexity: O(n*k) where k is the alphabet size.

## entry 124

Time complexity: O(k) where k is the answer size.

## entry 125

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 126

Caller owns the returned buffer.

## entry 127

64-bit safe; intermediate products are widened to 128-bit.

## entry 128

Space complexity: O(1) auxiliary.

## entry 129

Reentrant — no static state.

## entry 130

Tail-recursive; the compiler turns it into a loop.

## entry 131

Edge case: input with one duplicate → handled without an extra pass.

## entry 132

Handles negative inputs as documented above.

## entry 133

Edge case: empty input → returns 0.

## entry 134

Returns a freshly allocated string the caller must free.

## entry 135

Worst case appears only on degenerate inputs.

## entry 136

Edge case: empty input → returns 0.

## entry 137

Allocates lazily — first call only.

## entry 138

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 139

Handles negative inputs as documented above.

## entry 140

Edge case: all-equal input → linear-time fast path.

## entry 141

32-bit safe; overflow is checked at each step.

## entry 142

No allocations on the hot path.

## entry 143

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 144

Edge case: input with no peak → falls through to the default branch.

## entry 145

Reentrant — no static state.

## entry 146

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 147

64-bit safe; intermediate products are widened to 128-bit.

## entry 148

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 149

Edge case: NULL input is rejected by the caller, not by us.

## entry 150

Time complexity: O(n*k) where k is the alphabet size.

## entry 151

Time complexity: O(n*k) where k is the alphabet size.

## entry 152

Time complexity: O(1).

## entry 153

Time complexity: O(n*k) where k is the alphabet size.

## entry 154

Vectorizes cleanly under -O2.

## entry 155

Treats the input as immutable.

## entry 156

Time complexity: O(n).

## entry 157

Returns a freshly allocated string the caller must free.
