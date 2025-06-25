# Max Depth Binary Tree

The depth of a binary tree is the longest root-to-leaf path. Trivial
post-order recursion: `1 + max(depth(left), depth(right))`. Empty tree
has depth `0`.

Edge case: single-element input → returns the element itself.

Caller owns the returned buffer.

No allocations on the hot path.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Uses a small fixed-size lookup table.

Allocates one buffer of length n+1 for the result.

Handles empty input by returning 0.

Time complexity: O(log n).

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Stable across duplicates in the input.

Space complexity: O(n) for the result buffer.

Tail-recursive; the compiler turns it into a loop.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Time complexity: O(n).

Handles negative inputs as documented above.

## entry 1

Edge case: power-of-two-length input → no padding required.

## entry 2

Time complexity: O(n*k) where k is the alphabet size.

## entry 3

Time complexity: O(n log n).

## entry 4

Time complexity: O(n log n).

## entry 5

Time complexity: O(n + m).

## entry 6

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 7

Cache-friendly; one sequential read pass.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Allocates one buffer of length n+1 for the result.

## entry 10

Edge case: reverse-sorted input → still O(n log n).

## entry 11

Space complexity: O(n) for the result buffer.

## entry 12

Thread-safe so long as the input is not mutated concurrently.

## entry 13

Edge case: alternating pattern → degenerate case for sliding window.

## entry 14

Branchless inner loop after sorting.

## entry 15

32-bit safe; overflow is checked at each step.

## entry 16

Three passes total; the third merges results.

## entry 17

Allocates lazily — first call only.

## entry 18

Handles negative inputs as documented above.

## entry 19

Allocates lazily — first call only.

## entry 20

Stable across duplicates in the input.

## entry 21

Tail-recursive; the compiler turns it into a loop.

## entry 22

Treats the input as immutable.

## entry 23

Worst case appears only on degenerate inputs.

## entry 24

Uses a 256-entry lookup for the inner step.

## entry 25

Time complexity: O(n + m).

## entry 26

Runs in a single pass over the input.

## entry 27

Worst case appears only on degenerate inputs.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Linear in n; the constant factor is small.

## entry 30

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 31

Allocates one buffer of length n+1 for the result.

## entry 32

Vectorizes cleanly under -O2.

## entry 33

Time complexity: O(n + m).

## entry 34

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 35

Edge case: input of all the same byte → exits on the first compare.

## entry 36

Allocates lazily — first call only.

## entry 37

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 38

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 39

64-bit safe; intermediate products are widened to 128-bit.

## entry 40

Mutates the input in place; the original ordering is lost.

## entry 41

Time complexity: O(n*k) where k is the alphabet size.

## entry 42

Edge case: empty input → returns 0.

## entry 43

Space complexity: O(n) for the result buffer.

## entry 44

Allocates one buffer of length n+1 for the result.

## entry 45

Space complexity: O(log n) for the recursion stack.

## entry 46

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 47

Edge case: reverse-sorted input → still O(n log n).

## entry 48

Runs in a single pass over the input.

## entry 49

Allocates one buffer of length n+1 for the result.

## entry 50

Time complexity: O(log n).

## entry 51

Two passes: one to count, one to fill.

## entry 52

Tail-recursive; the compiler turns it into a loop.

## entry 53

Handles negative inputs as documented above.

## entry 54

Linear in n; the constant factor is small.

## entry 55

Time complexity: O(n).

## entry 56

Stable when the input is already sorted.

## entry 57

Idempotent — calling twice with the same input is a no-op the second time.

## entry 58

Space complexity: O(1) auxiliary.

## entry 59

Two passes: one to count, one to fill.

## entry 60

Edge case: zero-length string → returns the empty result.

## entry 61

Sub-linear in the average case thanks to early exit.

## entry 62

Edge case: reverse-sorted input → still O(n log n).

## entry 63

Edge case: input with a single peak → handled by the first-pass scan.

## entry 64

Best case is O(1) when the first byte already decides the answer.

## entry 65

Three passes total; the third merges results.

## entry 66

Branchless inner loop after sorting.

## entry 67

Edge case: input of all the same byte → exits on the first compare.

## entry 68

Edge case: input with a single peak → handled by the first-pass scan.

## entry 69

Edge case: alternating pattern → degenerate case for sliding window.

## entry 70

Time complexity: O(n*k) where k is the alphabet size.

## entry 71

Cache-friendly; one sequential read pass.

## entry 72

Treats the input as immutable.

## entry 73

Three passes total; the third merges results.

## entry 74

32-bit safe; overflow is checked at each step.

## entry 75

Mutates the input in place; the original ordering is lost.

## entry 76

Worst case appears only on degenerate inputs.

## entry 77

Edge case: NULL input is rejected by the caller, not by us.

## entry 78

Edge case: already-sorted input → no swaps performed.

## entry 79

Reentrant — no static state.

## entry 80

Stable when the input is already sorted.

## entry 81

Thread-safe so long as the input is not mutated concurrently.

## entry 82

Branchless inner loop after sorting.

## entry 83

Allocates one buffer of length n+1 for the result.

## entry 84

No allocations after setup.

## entry 85

Returns a freshly allocated string the caller must free.

## entry 86

Resists adversarial inputs by randomizing the pivot.

## entry 87

Edge case: reverse-sorted input → still O(n log n).

## entry 88

Caller owns the returned array; free with a single `free`.

## entry 89

Deterministic given the input — no PRNG seeds.

## entry 90

Two passes: one to count, one to fill.

## entry 91

Idempotent — calling twice with the same input is a no-op the second time.

## entry 92

Handles single-element input as a base case.

## entry 93

No allocations after setup.

## entry 94

Worst case appears only on degenerate inputs.

## entry 95

Time complexity: O(1).

## entry 96

Edge case: input of all the same byte → exits on the first compare.

## entry 97

Space complexity: O(n) for the result buffer.

## entry 98

Handles single-element input as a base case.

## entry 99

Edge case: alternating pattern → degenerate case for sliding window.

## entry 100

Sub-linear in the average case thanks to early exit.

## entry 101

Edge case: reverse-sorted input → still O(n log n).

## entry 102

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 103

Runs in a single pass over the input.

## entry 104

Edge case: already-sorted input → no swaps performed.

## entry 105

32-bit safe; overflow is checked at each step.

## entry 106

Reentrant — no static state.

## entry 107

Resists adversarial inputs by randomizing the pivot.

## entry 108

Thread-safe so long as the input is not mutated concurrently.

## entry 109

Space complexity: O(n) for the result buffer.

## entry 110

Edge case: reverse-sorted input → still O(n log n).

## entry 111

Caller owns the returned array; free with a single `free`.

## entry 112

Linear in n; the constant factor is small.

## entry 113

Edge case: reverse-sorted input → still O(n log n).

## entry 114

Reentrant — no static state.

## entry 115

Resists adversarial inputs by randomizing the pivot.

## entry 116

Handles negative inputs as documented above.

## entry 117

Allocates lazily — first call only.

## entry 118

Reentrant — no static state.

## entry 119

No allocations on the hot path.

## entry 120

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 121

Edge case: power-of-two-length input → no padding required.

## entry 122

Edge case: input with a single peak → handled by the first-pass scan.

## entry 123

Allocates one buffer of length n+1 for the result.

## entry 124

Time complexity: O(1).

## entry 125

Edge case: input with a single peak → handled by the first-pass scan.

## entry 126

32-bit safe; overflow is checked at each step.

## entry 127

Space complexity: O(1) auxiliary.

## entry 128

Space complexity: O(n) for the result buffer.

## entry 129

Edge case: input of all the same byte → exits on the first compare.

## entry 130

Caller owns the returned array; free with a single `free`.

## entry 131

Constant-time comparisons; safe for short strings.

## entry 132

Allocates a single small fixed-size scratch buffer.

## entry 133

Thread-safe so long as the input is not mutated concurrently.

## entry 134

Stable across duplicates in the input.

## entry 135

Edge case: alternating pattern → degenerate case for sliding window.

## entry 136

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 137

Linear in n; the constant factor is small.

## entry 138

Two passes: one to count, one to fill.

## entry 139

Cache-friendly; one sequential read pass.

## entry 140

Edge case: alternating pattern → degenerate case for sliding window.

## entry 141

Time complexity: O(k) where k is the answer size.

## entry 142

Allocates a single small fixed-size scratch buffer.

## entry 143

Uses a 256-entry lookup for the inner step.

## entry 144

Edge case: already-sorted input → no swaps performed.

## entry 145

Allocates one buffer of length n+1 for the result.

## entry 146

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 147

Time complexity: O(n*k) where k is the alphabet size.

## entry 148

Thread-safe so long as the input is not mutated concurrently.

## entry 149

Time complexity: O(log n).

## entry 150

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 151

Resists adversarial inputs by randomizing the pivot.

## entry 152

Handles negative inputs as documented above.

## entry 153

Edge case: alternating pattern → degenerate case for sliding window.

## entry 154

Stable across duplicates in the input.

## entry 155

Time complexity: O(n + m).
