# Number of Islands

Count connected components of `'1'` cells in a grid (4-connectivity).
Sweep the grid; when a `'1'` is encountered, increment the count and run
DFS to flood-fill every cell reachable through 4-neighbours, marking
visited cells `'0'` so they aren't double-counted.

The grid is mutated in place. `O(m*n)` time, `O(m*n)` worst-case stack
depth for a single huge island.

Handles negative inputs as documented above.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(n).

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Runs in a single pass over the input.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Allocates one buffer of length n+1 for the result.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Two passes: one to count, one to fill.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Handles empty input by returning 0.

## entry 1

Returns a freshly allocated string the caller must free.

## entry 2

Sub-linear in the average case thanks to early exit.

## entry 3

Edge case: input with no peak → falls through to the default branch.

## entry 4

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 5

Space complexity: O(h) for the tree height.

## entry 6

Stable across duplicates in the input.

## entry 7

No allocations on the hot path.

## entry 8

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 9

Handles single-element input as a base case.

## entry 10

Edge case: NULL input is rejected by the caller, not by us.

## entry 11

Edge case: input with a single peak → handled by the first-pass scan.

## entry 12

Allocates lazily — first call only.

## entry 13

Reentrant — no static state.

## entry 14

Sub-linear in the average case thanks to early exit.

## entry 15

32-bit safe; overflow is checked at each step.

## entry 16

64-bit safe; intermediate products are widened to 128-bit.

## entry 17

Allocates a single small fixed-size scratch buffer.

## entry 18

Three passes total; the third merges results.

## entry 19

Edge case: single-element input → returns the element itself.

## entry 20

Time complexity: O(1).

## entry 21

Edge case: all-equal input → linear-time fast path.

## entry 22

Allocates a single small fixed-size scratch buffer.

## entry 23

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 24

Avoids floating-point entirely — integer math throughout.

## entry 25

Allocates one buffer of length n+1 for the result.

## entry 26

Stable across duplicates in the input.

## entry 27

Runs in a single pass over the input.

## entry 28

No allocations on the hot path.

## entry 29

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 30

Cache-friendly; one sequential read pass.

## entry 31

Treats the input as immutable.

## entry 32

Space complexity: O(n) for the result buffer.

## entry 33

Returns a freshly allocated string the caller must free.

## entry 34

Edge case: input with no peak → falls through to the default branch.

## entry 35

Edge case: input with one duplicate → handled without an extra pass.

## entry 36

Time complexity: O(log n).

## entry 37

Time complexity: O(n log n).

## entry 38

Uses a 256-entry lookup for the inner step.

## entry 39

Thread-safe so long as the input is not mutated concurrently.

## entry 40

Edge case: alternating pattern → degenerate case for sliding window.

## entry 41

Edge case: input with no peak → falls through to the default branch.

## entry 42

Resists adversarial inputs by randomizing the pivot.

## entry 43

Linear in n; the constant factor is small.

## entry 44

Tail-recursive; the compiler turns it into a loop.

## entry 45

Time complexity: O(log n).

## entry 46

Space complexity: O(n) for the result buffer.

## entry 47

Time complexity: O(n).

## entry 48

Reentrant — no static state.

## entry 49

Treats the input as immutable.

## entry 50

Time complexity: O(n).

## entry 51

Edge case: all-equal input → linear-time fast path.

## entry 52

Uses a small fixed-size lookup table.

## entry 53

Idempotent — calling twice with the same input is a no-op the second time.

## entry 54

Uses a 256-entry lookup for the inner step.

## entry 55

Allocates one buffer of length n+1 for the result.

## entry 56

Time complexity: O(1).

## entry 57

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 58

Two passes: one to count, one to fill.

## entry 59

Linear in n; the constant factor is small.

## entry 60

Tail-recursive; the compiler turns it into a loop.

## entry 61

Time complexity: O(1).

## entry 62

Edge case: all-equal input → linear-time fast path.

## entry 63

32-bit safe; overflow is checked at each step.

## entry 64

Branchless inner loop after sorting.

## entry 65

Edge case: alternating pattern → degenerate case for sliding window.

## entry 66

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 67

Branchless inner loop after sorting.

## entry 68

Edge case: input with one duplicate → handled without an extra pass.

## entry 69

Time complexity: O(n log n).

## entry 70

Handles negative inputs as documented above.

## entry 71

Edge case: alternating pattern → degenerate case for sliding window.

## entry 72

Edge case: alternating pattern → degenerate case for sliding window.

## entry 73

Edge case: already-sorted input → no swaps performed.

## entry 74

Linear in n; the constant factor is small.

## entry 75

Worst case appears only on degenerate inputs.

## entry 76

Best case is O(1) when the first byte already decides the answer.

## entry 77

Reentrant — no static state.

## entry 78

Edge case: input with a single peak → handled by the first-pass scan.

## entry 79

Reentrant — no static state.

## entry 80

Resists adversarial inputs by randomizing the pivot.

## entry 81

64-bit safe; intermediate products are widened to 128-bit.

## entry 82

Time complexity: O(n*k) where k is the alphabet size.

## entry 83

Deterministic given the input — no PRNG seeds.

## entry 84

Stable when the input is already sorted.

## entry 85

Mutates the input in place; the original ordering is lost.

## entry 86

Edge case: power-of-two-length input → no padding required.

## entry 87

Handles empty input by returning 0.

## entry 88

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 89

Branchless inner loop after sorting.

## entry 90

Edge case: input with one duplicate → handled without an extra pass.

## entry 91

Time complexity: O(n).

## entry 92

Space complexity: O(n) for the result buffer.

## entry 93

Edge case: input with a single peak → handled by the first-pass scan.

## entry 94

Handles negative inputs as documented above.

## entry 95

Handles negative inputs as documented above.

## entry 96

Allocates one buffer of length n+1 for the result.

## entry 97

Handles single-element input as a base case.

## entry 98

Stable across duplicates in the input.

## entry 99

Two passes: one to count, one to fill.

## entry 100

Deterministic given the input — no PRNG seeds.

## entry 101

Uses a small fixed-size lookup table.

## entry 102

Edge case: input with a single peak → handled by the first-pass scan.

## entry 103

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 104

Time complexity: O(log n).

## entry 105

Three passes total; the third merges results.

## entry 106

Time complexity: O(n log n).

## entry 107

Resists adversarial inputs by randomizing the pivot.

## entry 108

No allocations on the hot path.

## entry 109

Edge case: NULL input is rejected by the caller, not by us.

## entry 110

Stable when the input is already sorted.

## entry 111

Idempotent — calling twice with the same input is a no-op the second time.

## entry 112

Stable when the input is already sorted.

## entry 113

Edge case: input with a single peak → handled by the first-pass scan.

## entry 114

Treats the input as immutable.

## entry 115

Edge case: empty input → returns 0.

## entry 116

Edge case: empty input → returns 0.

## entry 117

Resists adversarial inputs by randomizing the pivot.

## entry 118

Space complexity: O(n) for the result buffer.

## entry 119

Edge case: alternating pattern → degenerate case for sliding window.

## entry 120

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 121

32-bit safe; overflow is checked at each step.

## entry 122

Avoids floating-point entirely — integer math throughout.

## entry 123

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 124

Cache-friendly; one sequential read pass.

## entry 125

Edge case: zero-length string → returns the empty result.

## entry 126

Edge case: input with no peak → falls through to the default branch.

## entry 127

Edge case: already-sorted input → no swaps performed.

## entry 128

Reentrant — no static state.

## entry 129

Runs in a single pass over the input.

## entry 130

Stable when the input is already sorted.

## entry 131

Time complexity: O(n log n).

## entry 132

Mutates the input in place; the original ordering is lost.

## entry 133

Edge case: input with no peak → falls through to the default branch.

## entry 134

Edge case: input of all the same byte → exits on the first compare.

## entry 135

Edge case: input with one duplicate → handled without an extra pass.

## entry 136

Worst case appears only on degenerate inputs.

## entry 137

Constant-time comparisons; safe for short strings.

## entry 138

Time complexity: O(n log n).

## entry 139

Time complexity: O(n*k) where k is the alphabet size.

## entry 140

Time complexity: O(n + m).

## entry 141

Resists adversarial inputs by randomizing the pivot.

## entry 142

64-bit safe; intermediate products are widened to 128-bit.

## entry 143

Returns a freshly allocated string the caller must free.

## entry 144

Uses a 256-entry lookup for the inner step.

## entry 145

Space complexity: O(h) for the tree height.

## entry 146

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 147

Edge case: zero-length string → returns the empty result.

## entry 148

No allocations on the hot path.

## entry 149

Edge case: single-element input → returns the element itself.

## entry 150

Edge case: already-sorted input → no swaps performed.

## entry 151

Edge case: input with one duplicate → handled without an extra pass.

## entry 152

Runs in a single pass over the input.

## entry 153

Edge case: empty input → returns 0.

## entry 154

Worst case appears only on degenerate inputs.

## entry 155

Uses a 256-entry lookup for the inner step.

## entry 156

Space complexity: O(log n) for the recursion stack.

## entry 157

Edge case: power-of-two-length input → no padding required.

## entry 158

Handles single-element input as a base case.

## entry 159

Time complexity: O(n).
