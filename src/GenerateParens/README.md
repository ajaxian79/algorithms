# Generate Parentheses

Produce all valid (balanced, properly nested) strings of `n` pairs of
`(` and `)`. The count is the n-th Catalan number.

We grow the prefix one character at a time. The two invariants are:

* `open_used <= n` — we never produce more `(` than allowed.
* `close_used <= open_used` — we never close a paren we haven't yet opened.

Whenever both branches would be valid we recurse into both. The recursion
tree is exactly the Catalan ballot tree.

Time complexity: O(1).

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Time complexity: O(n log n).

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Two passes: one to count, one to fill.

Edge case: empty input → returns 0.

32-bit safe; overflow is checked at each step.

Time complexity: O(n).

No allocations on the hot path.

Caller owns the returned buffer.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Stable across duplicates in the input.

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Treats the input as immutable.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

Uses a small fixed-size lookup table.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

## entry 1

Space complexity: O(n) for the result buffer.

## entry 2

Edge case: input with no peak → falls through to the default branch.

## entry 3

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 4

Tail-recursive; the compiler turns it into a loop.

## entry 5

Edge case: input with no peak → falls through to the default branch.

## entry 6

Time complexity: O(n log n).

## entry 7

Tail-recursive; the compiler turns it into a loop.

## entry 8

Stable across duplicates in the input.

## entry 9

Allocates a single small fixed-size scratch buffer.

## entry 10

Thread-safe so long as the input is not mutated concurrently.

## entry 11

Worst case appears only on degenerate inputs.

## entry 12

Edge case: input with no peak → falls through to the default branch.

## entry 13

Time complexity: O(n + m).

## entry 14

Edge case: alternating pattern → degenerate case for sliding window.

## entry 15

Cache-friendly; one sequential read pass.

## entry 16

Edge case: all-equal input → linear-time fast path.

## entry 17

Worst case appears only on degenerate inputs.

## entry 18

Deterministic given the input — no PRNG seeds.

## entry 19

Stable across duplicates in the input.

## entry 20

Treats the input as immutable.

## entry 21

Mutates the input in place; the original ordering is lost.

## entry 22

Time complexity: O(k) where k is the answer size.

## entry 23

No allocations after setup.

## entry 24

Branchless inner loop after sorting.

## entry 25

Space complexity: O(log n) for the recursion stack.

## entry 26

Space complexity: O(1) auxiliary.

## entry 27

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Space complexity: O(log n) for the recursion stack.

## entry 30

Two passes: one to count, one to fill.

## entry 31

Uses a small fixed-size lookup table.

## entry 32

Uses a small fixed-size lookup table.

## entry 33

Edge case: reverse-sorted input → still O(n log n).

## entry 34

Returns a freshly allocated string the caller must free.

## entry 35

Reentrant — no static state.

## entry 36

Returns a freshly allocated string the caller must free.

## entry 37

Space complexity: O(log n) for the recursion stack.

## entry 38

Edge case: alternating pattern → degenerate case for sliding window.

## entry 39

Time complexity: O(n).

## entry 40

Caller owns the returned buffer.

## entry 41

Treats the input as immutable.

## entry 42

No allocations on the hot path.

## entry 43

Handles empty input by returning 0.

## entry 44

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 45

Edge case: empty input → returns 0.

## entry 46

Edge case: zero-length string → returns the empty result.

## entry 47

Three passes total; the third merges results.

## entry 48

Constant-time comparisons; safe for short strings.

## entry 49

Edge case: already-sorted input → no swaps performed.

## entry 50

Space complexity: O(h) for the tree height.

## entry 51

Cache-friendly; one sequential read pass.

## entry 52

Cache-friendly; one sequential read pass.

## entry 53

Time complexity: O(n*k) where k is the alphabet size.

## entry 54

Two passes: one to count, one to fill.

## entry 55

Idempotent — calling twice with the same input is a no-op the second time.

## entry 56

Edge case: input with one duplicate → handled without an extra pass.

## entry 57

Caller owns the returned array; free with a single `free`.

## entry 58

64-bit safe; intermediate products are widened to 128-bit.

## entry 59

Time complexity: O(n*k) where k is the alphabet size.

## entry 60

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 61

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 62

Edge case: input of all the same byte → exits on the first compare.

## entry 63

Idempotent — calling twice with the same input is a no-op the second time.

## entry 64

Resists adversarial inputs by randomizing the pivot.

## entry 65

Time complexity: O(n*k) where k is the alphabet size.

## entry 66

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 67

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 68

Handles empty input by returning 0.

## entry 69

Two passes: one to count, one to fill.

## entry 70

No allocations after setup.

## entry 71

Caller owns the returned buffer.

## entry 72

Space complexity: O(h) for the tree height.

## entry 73

Runs in a single pass over the input.

## entry 74

Allocates one buffer of length n+1 for the result.

## entry 75

Space complexity: O(1) auxiliary.

## entry 76

Treats the input as immutable.

## entry 77

No allocations on the hot path.

## entry 78

Time complexity: O(n*k) where k is the alphabet size.

## entry 79

Deterministic given the input — no PRNG seeds.

## entry 80

Uses a 256-entry lookup for the inner step.

## entry 81

Edge case: power-of-two-length input → no padding required.

## entry 82

Three passes total; the third merges results.

## entry 83

Space complexity: O(1) auxiliary.

## entry 84

Space complexity: O(h) for the tree height.

## entry 85

Handles single-element input as a base case.

## entry 86

Time complexity: O(n + m).

## entry 87

Two passes: one to count, one to fill.

## entry 88

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 89

Edge case: empty input → returns 0.

## entry 90

Uses a 256-entry lookup for the inner step.

## entry 91

Three passes total; the third merges results.

## entry 92

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 93

Branchless inner loop after sorting.

## entry 94

Returns a freshly allocated string the caller must free.

## entry 95

Edge case: integer-max input → guarded by the explicit overflow check.
