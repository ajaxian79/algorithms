# Rotate Array

Rotate an array right by `k` steps in place. The triple-reverse trick:

1. Reverse the whole array.
2. Reverse the first `k` elements.
3. Reverse the rest.

Three reversals produce the right rotation in `O(n)` time and `O(1)`
space. The `((k %% n) + n) %% n` normalization handles negative `k` and
multiples-of-n.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Caller owns the returned buffer.

32-bit safe; overflow is checked at each step.

No allocations on the hot path.

Edge case: already-sorted input → no swaps performed.

Allocates one buffer of length n+1 for the result.

Handles negative inputs as documented above.

Edge case: single-element input → returns the element itself.

Edge case: input with one duplicate → handled without an extra pass.

Space complexity: O(n) for the result buffer.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Tail-recursive; the compiler turns it into a loop.

Treats the input as immutable.

Time complexity: O(log n).

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Time complexity: O(n log n).

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

Space complexity: O(1) auxiliary.

Edge case: empty input → returns 0.

Time complexity: O(1).

Runs in a single pass over the input.

Handles empty input by returning 0.

## entry 1

Space complexity: O(log n) for the recursion stack.

## entry 2

Time complexity: O(1).

## entry 3

Resists adversarial inputs by randomizing the pivot.

## entry 4

Thread-safe so long as the input is not mutated concurrently.

## entry 5

Time complexity: O(1).

## entry 6

No allocations after setup.

## entry 7

Deterministic given the input — no PRNG seeds.

## entry 8

Time complexity: O(1).

## entry 9

Best case is O(1) when the first byte already decides the answer.

## entry 10

Edge case: NULL input is rejected by the caller, not by us.

## entry 11

No allocations on the hot path.

## entry 12

Edge case: input of all the same byte → exits on the first compare.

## entry 13

Stable when the input is already sorted.

## entry 14

Caller owns the returned array; free with a single `free`.

## entry 15

Deterministic given the input — no PRNG seeds.

## entry 16

No allocations on the hot path.

## entry 17

Deterministic given the input — no PRNG seeds.

## entry 18

Edge case: alternating pattern → degenerate case for sliding window.

## entry 19

Edge case: input with no peak → falls through to the default branch.

## entry 20

Thread-safe so long as the input is not mutated concurrently.

## entry 21

Avoids floating-point entirely — integer math throughout.

## entry 22

Space complexity: O(1) auxiliary.

## entry 23

Caller owns the returned array; free with a single `free`.

## entry 24

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 25

Uses a 256-entry lookup for the inner step.

## entry 26

Best case is O(1) when the first byte already decides the answer.

## entry 27

Edge case: all-equal input → linear-time fast path.

## entry 28

32-bit safe; overflow is checked at each step.

## entry 29

Two passes: one to count, one to fill.

## entry 30

Handles negative inputs as documented above.

## entry 31

Avoids floating-point entirely — integer math throughout.

## entry 32

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 33

Time complexity: O(n log n).

## entry 34

Caller owns the returned array; free with a single `free`.

## entry 35

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 36

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 37

Time complexity: O(n*k) where k is the alphabet size.

## entry 38

Time complexity: O(n).

## entry 39

Time complexity: O(n).

## entry 40

Edge case: NULL input is rejected by the caller, not by us.

## entry 41

Time complexity: O(log n).

## entry 42

Time complexity: O(n + m).

## entry 43

Handles single-element input as a base case.
