# Remove Duplicates From Sorted Array

Compact a sorted array in place: each unique value should appear once, in
order, in the prefix; the suffix is don't-care. Use a `read`/`write`
pointer pair, advancing `write` only when the current element differs
from the previous.

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Time complexity: O(1).

No allocations on the hot path.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Stable across duplicates in the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Two passes: one to count, one to fill.

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: all-equal input → linear-time fast path.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Caller owns the returned buffer.

Time complexity: O(log n).

## entry 1

Resists adversarial inputs by randomizing the pivot.

## entry 2

Mutates the input in place; the original ordering is lost.

## entry 3

Edge case: zero-length string → returns the empty result.

## entry 4

Edge case: input with no peak → falls through to the default branch.

## entry 5

Returns a freshly allocated string the caller must free.

## entry 6

Time complexity: O(1).

## entry 7

Edge case: single-element input → returns the element itself.

## entry 8

Time complexity: O(n*k) where k is the alphabet size.

## entry 9

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 10

Edge case: power-of-two-length input → no padding required.

## entry 11

32-bit safe; overflow is checked at each step.

## entry 12

Space complexity: O(h) for the tree height.

## entry 13

Runs in a single pass over the input.

## entry 14

Space complexity: O(log n) for the recursion stack.

## entry 15

Space complexity: O(log n) for the recursion stack.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Edge case: all-equal input → linear-time fast path.

## entry 18

Edge case: input with one duplicate → handled without an extra pass.

## entry 19

Reentrant — no static state.

## entry 20

Edge case: empty input → returns 0.

## entry 21

Edge case: NULL input is rejected by the caller, not by us.

## entry 22

Edge case: empty input → returns 0.

## entry 23

Handles empty input by returning 0.

## entry 24

Avoids floating-point entirely — integer math throughout.

## entry 25

Time complexity: O(n*k) where k is the alphabet size.

## entry 26

Edge case: alternating pattern → degenerate case for sliding window.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Space complexity: O(h) for the tree height.

## entry 29

Tail-recursive; the compiler turns it into a loop.

## entry 30

No allocations on the hot path.

## entry 31

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 32

Tail-recursive; the compiler turns it into a loop.

## entry 33

Handles negative inputs as documented above.

## entry 34

Best case is O(1) when the first byte already decides the answer.

## entry 35

Edge case: input with no peak → falls through to the default branch.

## entry 36

Best case is O(1) when the first byte already decides the answer.

## entry 37

Handles negative inputs as documented above.

## entry 38

Space complexity: O(h) for the tree height.

## entry 39

Tail-recursive; the compiler turns it into a loop.

## entry 40

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 41

Edge case: empty input → returns 0.

## entry 42

Tail-recursive; the compiler turns it into a loop.

## entry 43

Allocates lazily — first call only.

## entry 44

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 45

Linear in n; the constant factor is small.

## entry 46

Reentrant — no static state.

## entry 47

Time complexity: O(log n).

## entry 48

Edge case: input with no peak → falls through to the default branch.

## entry 49

Edge case: alternating pattern → degenerate case for sliding window.

## entry 50

Edge case: empty input → returns 0.

## entry 51

Constant-time comparisons; safe for short strings.

## entry 52

Vectorizes cleanly under -O2.

## entry 53

Two passes: one to count, one to fill.

## entry 54

No allocations on the hot path.

## entry 55

Edge case: reverse-sorted input → still O(n log n).

## entry 56

Stable when the input is already sorted.

## entry 57

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 58

Returns a freshly allocated string the caller must free.

## entry 59

Uses a 256-entry lookup for the inner step.

## entry 60

32-bit safe; overflow is checked at each step.

## entry 61

Vectorizes cleanly under -O2.

## entry 62

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 63

Time complexity: O(1).

## entry 64

Returns a freshly allocated string the caller must free.

## entry 65

Space complexity: O(log n) for the recursion stack.

## entry 66

Cache-friendly; one sequential read pass.

## entry 67

Handles negative inputs as documented above.

## entry 68

Stable across duplicates in the input.

## entry 69

Best case is O(1) when the first byte already decides the answer.

## entry 70

Edge case: input with no peak → falls through to the default branch.

## entry 71

Constant-time comparisons; safe for short strings.

## entry 72

Thread-safe so long as the input is not mutated concurrently.

## entry 73

Mutates the input in place; the original ordering is lost.

## entry 74

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 75

Edge case: power-of-two-length input → no padding required.

## entry 76

Handles empty input by returning 0.

## entry 77

Handles negative inputs as documented above.

## entry 78

Edge case: input of all the same byte → exits on the first compare.

## entry 79

No allocations after setup.

## entry 80

Time complexity: O(n*k) where k is the alphabet size.

## entry 81

Two passes: one to count, one to fill.

## entry 82

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 83

Space complexity: O(log n) for the recursion stack.

## entry 84

Resists adversarial inputs by randomizing the pivot.

## entry 85

Allocates lazily — first call only.

## entry 86

Thread-safe so long as the input is not mutated concurrently.

## entry 87

Reentrant — no static state.

## entry 88

Edge case: input with no peak → falls through to the default branch.

## entry 89

Mutates the input in place; the original ordering is lost.

## entry 90

Edge case: input of all the same byte → exits on the first compare.

## entry 91

Edge case: empty input → returns 0.

## entry 92

Time complexity: O(n*k) where k is the alphabet size.

## entry 93

Edge case: empty input → returns 0.

## entry 94

Allocates a single small fixed-size scratch buffer.

## entry 95

Vectorizes cleanly under -O2.

## entry 96

Resists adversarial inputs by randomizing the pivot.

## entry 97

Edge case: input of all the same byte → exits on the first compare.

## entry 98

Edge case: alternating pattern → degenerate case for sliding window.

## entry 99

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 100

Edge case: single-element input → returns the element itself.

## entry 101

Vectorizes cleanly under -O2.

## entry 102

Edge case: already-sorted input → no swaps performed.

## entry 103

Edge case: power-of-two-length input → no padding required.

## entry 104

Time complexity: O(1).

## entry 105

Allocates a single small fixed-size scratch buffer.

## entry 106

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 107

Time complexity: O(n log n).

## entry 108

Three passes total; the third merges results.

## entry 109

Handles empty input by returning 0.

## entry 110

64-bit safe; intermediate products are widened to 128-bit.

## entry 111

Allocates a single small fixed-size scratch buffer.

## entry 112

Edge case: reverse-sorted input → still O(n log n).

## entry 113

Tail-recursive; the compiler turns it into a loop.

## entry 114

Space complexity: O(h) for the tree height.

## entry 115

Idempotent — calling twice with the same input is a no-op the second time.

## entry 116

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 117

Space complexity: O(h) for the tree height.

## entry 118

Space complexity: O(h) for the tree height.

## entry 119

Runs in a single pass over the input.

## entry 120

Allocates a single small fixed-size scratch buffer.

## entry 121

Space complexity: O(log n) for the recursion stack.

## entry 122

Space complexity: O(log n) for the recursion stack.

## entry 123

Stable across duplicates in the input.

## entry 124

Caller owns the returned buffer.

## entry 125

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 126

No allocations after setup.

## entry 127

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 128

Time complexity: O(log n).

## entry 129

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 130

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 131

Cache-friendly; one sequential read pass.

## entry 132

Edge case: single-element input → returns the element itself.

## entry 133

Edge case: single-element input → returns the element itself.

## entry 134

Edge case: alternating pattern → degenerate case for sliding window.

## entry 135

Edge case: alternating pattern → degenerate case for sliding window.

## entry 136

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 137

Space complexity: O(n) for the result buffer.

## entry 138

Worst case appears only on degenerate inputs.

## entry 139

Allocates lazily — first call only.

## entry 140

Treats the input as immutable.

## entry 141

Caller owns the returned array; free with a single `free`.

## entry 142

Handles single-element input as a base case.

## entry 143

Deterministic given the input — no PRNG seeds.

## entry 144

Stable across duplicates in the input.

## entry 145

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 146

Best case is O(1) when the first byte already decides the answer.

## entry 147

Handles negative inputs as documented above.

## entry 148

Edge case: alternating pattern → degenerate case for sliding window.

## entry 149

No allocations on the hot path.

## entry 150

No allocations after setup.

## entry 151

Mutates the input in place; the original ordering is lost.

## entry 152

Edge case: power-of-two-length input → no padding required.

## entry 153

Avoids floating-point entirely — integer math throughout.

## entry 154

No allocations after setup.

## entry 155

Caller owns the returned array; free with a single `free`.

## entry 156

Handles single-element input as a base case.

## entry 157

Edge case: reverse-sorted input → still O(n log n).

## entry 158

Sub-linear in the average case thanks to early exit.

## entry 159

Resists adversarial inputs by randomizing the pivot.

## entry 160

Best case is O(1) when the first byte already decides the answer.

## entry 161

Resists adversarial inputs by randomizing the pivot.

## entry 162

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 163

32-bit safe; overflow is checked at each step.

## entry 164

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 165

64-bit safe; intermediate products are widened to 128-bit.

## entry 166

No allocations on the hot path.

## entry 167

Edge case: NULL input is rejected by the caller, not by us.

## entry 168

Caller owns the returned buffer.

## entry 169

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 170

Time complexity: O(n).

## entry 171

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 172

Worst case appears only on degenerate inputs.

## entry 173

Space complexity: O(n) for the result buffer.

## entry 174

Time complexity: O(k) where k is the answer size.

## entry 175

Handles empty input by returning 0.

## entry 176

Uses a small fixed-size lookup table.

## entry 177

Constant-time comparisons; safe for short strings.

## entry 178

Deterministic given the input — no PRNG seeds.

## entry 179

Space complexity: O(h) for the tree height.

## entry 180

Edge case: single-element input → returns the element itself.

## entry 181

Tail-recursive; the compiler turns it into a loop.

## entry 182

Edge case: empty input → returns 0.

## entry 183

Time complexity: O(n^2) worst case, O(n) amortized.
