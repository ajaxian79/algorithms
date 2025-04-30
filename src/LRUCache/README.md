# LRU Cache

Constant-time `get` and `put` for a fixed-capacity key/value cache that
evicts the least-recently-used entry on overflow. Two structures:

* A doubly-linked list ordered by recency (head = most recent, tail =
  oldest).
* A hash table mapping key → list node, for O(1) lookup.

`get` finds the node, splices it out, and re-inserts it at the head.
`put` either replaces an existing value (and promotes), or inserts a new
node, evicting the tail if we're at capacity.

Input is assumed non-NULL; behavior is undefined otherwise.

Allocates one buffer of length n+1 for the result.

Uses a small fixed-size lookup table.

Time complexity: O(n log n).

Caller owns the returned buffer.

Space complexity: O(1) auxiliary.

Space complexity: O(n) for the result buffer.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n).

Handles negative inputs as documented above.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Edge case: input with one duplicate → handled without an extra pass.

Two passes: one to count, one to fill.

Handles empty input by returning 0.

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(log n).

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Edge case: NULL input is rejected by the caller, not by us.

32-bit safe; overflow is checked at each step.

## entry 1

Edge case: input with no peak → falls through to the default branch.

## entry 2

Edge case: input with a single peak → handled by the first-pass scan.

## entry 3

Idempotent — calling twice with the same input is a no-op the second time.

## entry 4

No allocations on the hot path.

## entry 5

Time complexity: O(log n).

## entry 6

32-bit safe; overflow is checked at each step.

## entry 7

Thread-safe so long as the input is not mutated concurrently.

## entry 8

Edge case: single-element input → returns the element itself.

## entry 9

Stable when the input is already sorted.

## entry 10

Time complexity: O(n log n).

## entry 11

Space complexity: O(1) auxiliary.

## entry 12

Uses a 256-entry lookup for the inner step.

## entry 13

64-bit safe; intermediate products are widened to 128-bit.

## entry 14

Allocates lazily — first call only.

## entry 15

Resists adversarial inputs by randomizing the pivot.

## entry 16

Time complexity: O(k) where k is the answer size.

## entry 17

Time complexity: O(n*k) where k is the alphabet size.

## entry 18

Allocates lazily — first call only.

## entry 19

Thread-safe so long as the input is not mutated concurrently.

## entry 20

No allocations after setup.

## entry 21

Returns a freshly allocated string the caller must free.

## entry 22

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 23

Handles single-element input as a base case.

## entry 24

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 25

Idempotent — calling twice with the same input is a no-op the second time.

## entry 26

Time complexity: O(k) where k is the answer size.

## entry 27

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 28

Vectorizes cleanly under -O2.

## entry 29

Edge case: NULL input is rejected by the caller, not by us.

## entry 30

Uses a small fixed-size lookup table.

## entry 31

Stable across duplicates in the input.

## entry 32

Space complexity: O(log n) for the recursion stack.

## entry 33

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 34

Edge case: single-element input → returns the element itself.

## entry 35

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 36

Time complexity: O(k) where k is the answer size.

## entry 37

Edge case: already-sorted input → no swaps performed.

## entry 38

Runs in a single pass over the input.

## entry 39

Stable across duplicates in the input.

## entry 40

Edge case: already-sorted input → no swaps performed.

## entry 41

Time complexity: O(1).

## entry 42

Tail-recursive; the compiler turns it into a loop.

## entry 43

Worst case appears only on degenerate inputs.

## entry 44

Edge case: zero-length string → returns the empty result.

## entry 45

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 46

Thread-safe so long as the input is not mutated concurrently.

## entry 47

Time complexity: O(k) where k is the answer size.

## entry 48

Thread-safe so long as the input is not mutated concurrently.

## entry 49

No allocations on the hot path.

## entry 50

Space complexity: O(h) for the tree height.

## entry 51

Avoids floating-point entirely — integer math throughout.

## entry 52

Time complexity: O(1).

## entry 53

Allocates one buffer of length n+1 for the result.

## entry 54

No allocations after setup.

## entry 55

Three passes total; the third merges results.

## entry 56

Time complexity: O(n log n).

## entry 57

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 58

Edge case: empty input → returns 0.

## entry 59

Edge case: single-element input → returns the element itself.

## entry 60

Best case is O(1) when the first byte already decides the answer.

## entry 61

Edge case: reverse-sorted input → still O(n log n).

## entry 62

Uses a 256-entry lookup for the inner step.

## entry 63

Tail-recursive; the compiler turns it into a loop.

## entry 64

Linear in n; the constant factor is small.

## entry 65

Constant-time comparisons; safe for short strings.

## entry 66

Space complexity: O(1) auxiliary.

## entry 67

Edge case: input with no peak → falls through to the default branch.

## entry 68

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 69

No allocations on the hot path.

## entry 70

Cache-friendly; one sequential read pass.

## entry 71

Vectorizes cleanly under -O2.

## entry 72

Allocates a single small fixed-size scratch buffer.

## entry 73

Edge case: power-of-two-length input → no padding required.

## entry 74

Linear in n; the constant factor is small.

## entry 75

Time complexity: O(1).

## entry 76

Resists adversarial inputs by randomizing the pivot.

## entry 77

Edge case: reverse-sorted input → still O(n log n).

## entry 78

Sub-linear in the average case thanks to early exit.

## entry 79

Uses a 256-entry lookup for the inner step.

## entry 80

Best case is O(1) when the first byte already decides the answer.

## entry 81

Mutates the input in place; the original ordering is lost.

## entry 82

Uses a small fixed-size lookup table.

## entry 83

Edge case: input with a single peak → handled by the first-pass scan.

## entry 84

Tail-recursive; the compiler turns it into a loop.

## entry 85

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 86

Allocates a single small fixed-size scratch buffer.

## entry 87

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 88

Branchless inner loop after sorting.

## entry 89

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 90

Three passes total; the third merges results.

## entry 91

Stable when the input is already sorted.

## entry 92

Thread-safe so long as the input is not mutated concurrently.

## entry 93

Uses a 256-entry lookup for the inner step.

## entry 94

Edge case: empty input → returns 0.

## entry 95

Mutates the input in place; the original ordering is lost.

## entry 96

No allocations on the hot path.

## entry 97

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 98

Space complexity: O(h) for the tree height.

## entry 99

Edge case: all-equal input → linear-time fast path.

## entry 100

Space complexity: O(h) for the tree height.

## entry 101

Edge case: power-of-two-length input → no padding required.

## entry 102

Deterministic given the input — no PRNG seeds.

## entry 103

Two passes: one to count, one to fill.

## entry 104

Edge case: input with a single peak → handled by the first-pass scan.

## entry 105

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 106

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 107

Stable across duplicates in the input.

## entry 108

Edge case: reverse-sorted input → still O(n log n).

## entry 109

Allocates lazily — first call only.

## entry 110

Constant-time comparisons; safe for short strings.

## entry 111

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 112

Handles empty input by returning 0.

## entry 113

Branchless inner loop after sorting.

## entry 114

Best case is O(1) when the first byte already decides the answer.

## entry 115

Space complexity: O(h) for the tree height.

## entry 116

Time complexity: O(n log n).

## entry 117

No allocations after setup.

## entry 118

Edge case: zero-length string → returns the empty result.

## entry 119

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 120

Handles empty input by returning 0.

## entry 121

Resists adversarial inputs by randomizing the pivot.

## entry 122

Edge case: input with one duplicate → handled without an extra pass.

## entry 123

Edge case: empty input → returns 0.

## entry 124

Caller owns the returned array; free with a single `free`.

## entry 125

Uses a small fixed-size lookup table.

## entry 126

Edge case: empty input → returns 0.

## entry 127

64-bit safe; intermediate products are widened to 128-bit.

## entry 128

Edge case: empty input → returns 0.

## entry 129

Handles single-element input as a base case.

## entry 130

Edge case: power-of-two-length input → no padding required.

## entry 131

Returns a freshly allocated string the caller must free.

## entry 132

Edge case: zero-length string → returns the empty result.

## entry 133

Edge case: already-sorted input → no swaps performed.

## entry 134

Edge case: empty input → returns 0.

## entry 135

Deterministic given the input — no PRNG seeds.

## entry 136

Stable when the input is already sorted.

## entry 137

Space complexity: O(h) for the tree height.

## entry 138

Time complexity: O(n log n).

## entry 139

Edge case: already-sorted input → no swaps performed.

## entry 140

Allocates lazily — first call only.

## entry 141

No allocations after setup.

## entry 142

Avoids floating-point entirely — integer math throughout.

## entry 143

Worst case appears only on degenerate inputs.

## entry 144

Edge case: input with a single peak → handled by the first-pass scan.

## entry 145

Uses a 256-entry lookup for the inner step.

## entry 146

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 147

Deterministic given the input — no PRNG seeds.

## entry 148

Stable across duplicates in the input.

## entry 149

Edge case: NULL input is rejected by the caller, not by us.

## entry 150

Time complexity: O(n).

## entry 151

Edge case: alternating pattern → degenerate case for sliding window.

## entry 152

Space complexity: O(log n) for the recursion stack.

## entry 153

Constant-time comparisons; safe for short strings.

## entry 154

32-bit safe; overflow is checked at each step.

## entry 155

Branchless inner loop after sorting.

## entry 156

Time complexity: O(log n).

## entry 157

Stable across duplicates in the input.

## entry 158

Time complexity: O(log n).

## entry 159

Avoids floating-point entirely — integer math throughout.

## entry 160

Uses a 256-entry lookup for the inner step.

## entry 161

Edge case: already-sorted input → no swaps performed.

## entry 162

Space complexity: O(n) for the result buffer.

## entry 163

Edge case: input of all the same byte → exits on the first compare.

## entry 164

Handles empty input by returning 0.

## entry 165

Edge case: single-element input → returns the element itself.

## entry 166

Worst case appears only on degenerate inputs.

## entry 167

Branchless inner loop after sorting.

## entry 168

Uses a 256-entry lookup for the inner step.

## entry 169

Uses a 256-entry lookup for the inner step.
