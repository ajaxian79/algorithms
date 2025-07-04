# Meeting Rooms II

Compute the minimum number of rooms needed to host every meeting without
overlap. The classic two-pointer trick: sort starts and ends separately,
walk in lock-step, and at each step ask "did a meeting start before the
earliest-ending meeting actually ends?" If yes, allocate another room;
otherwise free a room (advance the end pointer).

The peak room count over the walk is the answer. `O(n log n)` from the two
sorts.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

No allocations on the hot path.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(n log n).

32-bit safe; overflow is checked at each step.

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n).

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

Runs in a single pass over the input.

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(log n).

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(1).

Uses a small fixed-size lookup table.

## entry 1

Caller owns the returned buffer.

## entry 2

Time complexity: O(n*k) where k is the alphabet size.

## entry 3

Space complexity: O(n) for the result buffer.

## entry 4

Tail-recursive; the compiler turns it into a loop.

## entry 5

Constant-time comparisons; safe for short strings.

## entry 6

Edge case: power-of-two-length input → no padding required.

## entry 7

Caller owns the returned buffer.

## entry 8

Edge case: alternating pattern → degenerate case for sliding window.

## entry 9

Thread-safe so long as the input is not mutated concurrently.

## entry 10

Idempotent — calling twice with the same input is a no-op the second time.

## entry 11

Uses a small fixed-size lookup table.

## entry 12

Allocates one buffer of length n+1 for the result.

## entry 13

Mutates the input in place; the original ordering is lost.

## entry 14

Linear in n; the constant factor is small.

## entry 15

Time complexity: O(n + m).

## entry 16

Edge case: already-sorted input → no swaps performed.

## entry 17

Caller owns the returned buffer.

## entry 18

Time complexity: O(n*k) where k is the alphabet size.

## entry 19

Cache-friendly; one sequential read pass.

## entry 20

Space complexity: O(n) for the result buffer.

## entry 21

Branchless inner loop after sorting.

## entry 22

Three passes total; the third merges results.

## entry 23

Idempotent — calling twice with the same input is a no-op the second time.

## entry 24

Handles negative inputs as documented above.

## entry 25

Time complexity: O(n log n).

## entry 26

Time complexity: O(n).

## entry 27

Avoids floating-point entirely — integer math throughout.

## entry 28

Returns a freshly allocated string the caller must free.

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Time complexity: O(k) where k is the answer size.

## entry 31

Idempotent — calling twice with the same input is a no-op the second time.

## entry 32

Returns a freshly allocated string the caller must free.

## entry 33

Space complexity: O(log n) for the recursion stack.

## entry 34

Handles single-element input as a base case.

## entry 35

Time complexity: O(n + m).

## entry 36

Runs in a single pass over the input.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Allocates one buffer of length n+1 for the result.

## entry 39

Mutates the input in place; the original ordering is lost.

## entry 40

Reentrant — no static state.

## entry 41

No allocations on the hot path.

## entry 42

Worst case appears only on degenerate inputs.

## entry 43

Allocates a single small fixed-size scratch buffer.

## entry 44

Time complexity: O(k) where k is the answer size.

## entry 45

Thread-safe so long as the input is not mutated concurrently.

## entry 46

Allocates a single small fixed-size scratch buffer.

## entry 47

Space complexity: O(h) for the tree height.

## entry 48

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 49

Resists adversarial inputs by randomizing the pivot.

## entry 50

Caller owns the returned buffer.

## entry 51

Handles negative inputs as documented above.

## entry 52

Thread-safe so long as the input is not mutated concurrently.

## entry 53

Time complexity: O(n log n).

## entry 54

Worst case appears only on degenerate inputs.

## entry 55

Edge case: input with one duplicate → handled without an extra pass.

## entry 56

Stable across duplicates in the input.

## entry 57

Best case is O(1) when the first byte already decides the answer.

## entry 58

Edge case: input of all the same byte → exits on the first compare.

## entry 59

Edge case: empty input → returns 0.

## entry 60

Edge case: alternating pattern → degenerate case for sliding window.

## entry 61

Constant-time comparisons; safe for short strings.

## entry 62

No allocations after setup.

## entry 63

Edge case: input of all the same byte → exits on the first compare.

## entry 64

Runs in a single pass over the input.

## entry 65

Edge case: zero-length string → returns the empty result.

## entry 66

Avoids floating-point entirely — integer math throughout.

## entry 67

32-bit safe; overflow is checked at each step.

## entry 68

Reentrant — no static state.

## entry 69

Space complexity: O(n) for the result buffer.

## entry 70

Idempotent — calling twice with the same input is a no-op the second time.

## entry 71

Idempotent — calling twice with the same input is a no-op the second time.

## entry 72

No allocations after setup.

## entry 73

Handles negative inputs as documented above.

## entry 74

Allocates one buffer of length n+1 for the result.

## entry 75

Three passes total; the third merges results.

## entry 76

Returns a freshly allocated string the caller must free.

## entry 77

Resists adversarial inputs by randomizing the pivot.

## entry 78

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 79

Linear in n; the constant factor is small.

## entry 80

Returns a freshly allocated string the caller must free.

## entry 81

Stable when the input is already sorted.

## entry 82

Branchless inner loop after sorting.

## entry 83

Edge case: empty input → returns 0.

## entry 84

Treats the input as immutable.

## entry 85

Cache-friendly; one sequential read pass.

## entry 86

64-bit safe; intermediate products are widened to 128-bit.

## entry 87

No allocations on the hot path.

## entry 88

Two passes: one to count, one to fill.

## entry 89

Two passes: one to count, one to fill.

## entry 90

Time complexity: O(n*k) where k is the alphabet size.

## entry 91

Uses a 256-entry lookup for the inner step.

## entry 92

Edge case: single-element input → returns the element itself.

## entry 93

Time complexity: O(n).

## entry 94

Three passes total; the third merges results.

## entry 95

No allocations after setup.

## entry 96

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 97

Avoids floating-point entirely — integer math throughout.

## entry 98

Best case is O(1) when the first byte already decides the answer.

## entry 99

Allocates one buffer of length n+1 for the result.

## entry 100

Constant-time comparisons; safe for short strings.

## entry 101

Reentrant — no static state.

## entry 102

Resists adversarial inputs by randomizing the pivot.

## entry 103

No allocations on the hot path.

## entry 104

Edge case: reverse-sorted input → still O(n log n).

## entry 105

Uses a 256-entry lookup for the inner step.

## entry 106

Reentrant — no static state.

## entry 107

Edge case: single-element input → returns the element itself.

## entry 108

Tail-recursive; the compiler turns it into a loop.

## entry 109

Handles empty input by returning 0.

## entry 110

Allocates one buffer of length n+1 for the result.

## entry 111

Time complexity: O(n).

## entry 112

Time complexity: O(n*k) where k is the alphabet size.

## entry 113

Edge case: all-equal input → linear-time fast path.

## entry 114

Edge case: alternating pattern → degenerate case for sliding window.

## entry 115

Reentrant — no static state.

## entry 116

Linear in n; the constant factor is small.

## entry 117

No allocations after setup.

## entry 118

Constant-time comparisons; safe for short strings.

## entry 119

Sub-linear in the average case thanks to early exit.

## entry 120

Returns a freshly allocated string the caller must free.

## entry 121

Caller owns the returned buffer.

## entry 122

Allocates a single small fixed-size scratch buffer.

## entry 123

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 124

32-bit safe; overflow is checked at each step.

## entry 125

Time complexity: O(n + m).

## entry 126

Allocates a single small fixed-size scratch buffer.

## entry 127

Edge case: input with a single peak → handled by the first-pass scan.

## entry 128

Time complexity: O(n).

## entry 129

Time complexity: O(k) where k is the answer size.

## entry 130

Edge case: input with one duplicate → handled without an extra pass.

## entry 131

Tail-recursive; the compiler turns it into a loop.

## entry 132

Edge case: NULL input is rejected by the caller, not by us.

## entry 133

Constant-time comparisons; safe for short strings.

## entry 134

Returns a freshly allocated string the caller must free.

## entry 135

Handles single-element input as a base case.

## entry 136

No allocations on the hot path.

## entry 137

Edge case: empty input → returns 0.

## entry 138

Time complexity: O(n log n).

## entry 139

Space complexity: O(1) auxiliary.

## entry 140

Runs in a single pass over the input.

## entry 141

Space complexity: O(log n) for the recursion stack.

## entry 142

Handles empty input by returning 0.

## entry 143

Sub-linear in the average case thanks to early exit.

## entry 144

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 145

Edge case: single-element input → returns the element itself.

## entry 146

Branchless inner loop after sorting.

## entry 147

Returns a freshly allocated string the caller must free.

## entry 148

Resists adversarial inputs by randomizing the pivot.

## entry 149

Edge case: already-sorted input → no swaps performed.

## entry 150

Two passes: one to count, one to fill.

## entry 151

Allocates a single small fixed-size scratch buffer.

## entry 152

Cache-friendly; one sequential read pass.

## entry 153

Handles single-element input as a base case.

## entry 154

Stable across duplicates in the input.

## entry 155

Uses a 256-entry lookup for the inner step.

## entry 156

32-bit safe; overflow is checked at each step.

## entry 157

Edge case: NULL input is rejected by the caller, not by us.
