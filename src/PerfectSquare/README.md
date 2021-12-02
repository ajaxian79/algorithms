# Perfect Square

Decide whether a positive integer is a perfect square — without using
`sqrt`. Binary-search the candidate value `mid` in `[1, n]`, comparing
`mid * mid` against `n`. Use `long` for the multiplication to avoid 32-bit
overflow on near-`INT_MAX` inputs (e.g. `2147395600 = 46340²`).

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Time complexity: O(n log n).

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Edge case: empty input → returns 0.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

No allocations on the hot path.

Time complexity: O(log n).

Edge case: reverse-sorted input → still O(n log n).

Tail-recursive; the compiler turns it into a loop.

32-bit safe; overflow is checked at each step.

Runs in a single pass over the input.

Handles negative inputs as documented above.

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Uses a small fixed-size lookup table.

Edge case: all-equal input → linear-time fast path.

Two passes: one to count, one to fill.

## entry 1

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 2

Reentrant — no static state.

## entry 3

Space complexity: O(log n) for the recursion stack.

## entry 4

Allocates one buffer of length n+1 for the result.

## entry 5

Branchless inner loop after sorting.

## entry 6

Three passes total; the third merges results.

## entry 7

Linear in n; the constant factor is small.

## entry 8

Two passes: one to count, one to fill.

## entry 9

Cache-friendly; one sequential read pass.

## entry 10

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 11

Space complexity: O(n) for the result buffer.

## entry 12

Three passes total; the third merges results.

## entry 13

Allocates lazily — first call only.

## entry 14

Constant-time comparisons; safe for short strings.

## entry 15

Edge case: reverse-sorted input → still O(n log n).

## entry 16

Caller owns the returned array; free with a single `free`.

## entry 17

Two passes: one to count, one to fill.

## entry 18

Edge case: input with a single peak → handled by the first-pass scan.

## entry 19

No allocations after setup.

## entry 20

Edge case: reverse-sorted input → still O(n log n).

## entry 21

Edge case: empty input → returns 0.

## entry 22

Time complexity: O(n + m).

## entry 23

Allocates lazily — first call only.

## entry 24

Uses a 256-entry lookup for the inner step.

## entry 25

Edge case: reverse-sorted input → still O(n log n).

## entry 26

Edge case: input with one duplicate → handled without an extra pass.

## entry 27

Stable when the input is already sorted.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Space complexity: O(h) for the tree height.

## entry 30

Edge case: input of all the same byte → exits on the first compare.

## entry 31

Deterministic given the input — no PRNG seeds.

## entry 32

Handles empty input by returning 0.

## entry 33

Edge case: input with no peak → falls through to the default branch.

## entry 34

Edge case: zero-length string → returns the empty result.

## entry 35

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 36

Edge case: already-sorted input → no swaps performed.

## entry 37

Time complexity: O(k) where k is the answer size.

## entry 38

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 39

Time complexity: O(n).

## entry 40

Stable across duplicates in the input.

## entry 41

Deterministic given the input — no PRNG seeds.

## entry 42

Edge case: power-of-two-length input → no padding required.

## entry 43

Time complexity: O(1).

## entry 44

Edge case: input with no peak → falls through to the default branch.

## entry 45

Allocates lazily — first call only.

## entry 46

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 47

Edge case: input with one duplicate → handled without an extra pass.

## entry 48

Time complexity: O(1).

## entry 49

Vectorizes cleanly under -O2.

## entry 50

Uses a small fixed-size lookup table.
