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
