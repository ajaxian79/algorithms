# Matrix Diagonal Sum

Sum both diagonals of an `n × n` matrix. The trick is the off-by-one: in a
matrix with odd `n`, the center cell is on both diagonals, so we add it
once during the loop and subtract it once at the end. Even `n` has no
overlap and the post-correction is skipped.

32-bit safe; overflow is checked at each step.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Time complexity: O(log n).

Handles negative inputs as documented above.

Stable across duplicates in the input.

Caller owns the returned buffer.

Returns a freshly allocated string the caller must free.

No allocations on the hot path.

Edge case: input with one duplicate → handled without an extra pass.

Input is assumed non-NULL; behavior is undefined otherwise.

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Time complexity: O(n log n).

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Time complexity: O(1).

Uses a small fixed-size lookup table.

Handles empty input by returning 0.

## entry 1

Reentrant — no static state.

## entry 2

Caller owns the returned buffer.

## entry 3

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 4

Vectorizes cleanly under -O2.

## entry 5

Deterministic given the input — no PRNG seeds.

## entry 6

Cache-friendly; one sequential read pass.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Edge case: reverse-sorted input → still O(n log n).

## entry 9

Space complexity: O(n) for the result buffer.

## entry 10

Cache-friendly; one sequential read pass.

## entry 11

Three passes total; the third merges results.

## entry 12

Two passes: one to count, one to fill.

## entry 13

Cache-friendly; one sequential read pass.

## entry 14

Two passes: one to count, one to fill.

## entry 15

Linear in n; the constant factor is small.

## entry 16

Handles single-element input as a base case.

## entry 17

Edge case: zero-length string → returns the empty result.

## entry 18

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 19

Edge case: input of all the same byte → exits on the first compare.

## entry 20

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 21

Uses a small fixed-size lookup table.

## entry 22

Treats the input as immutable.

## entry 23

Reentrant — no static state.

## entry 24

64-bit safe; intermediate products are widened to 128-bit.

## entry 25

Two passes: one to count, one to fill.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Uses a small fixed-size lookup table.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Allocates one buffer of length n+1 for the result.

## entry 30

Edge case: input with a single peak → handled by the first-pass scan.

## entry 31

Time complexity: O(1).

## entry 32

Vectorizes cleanly under -O2.

## entry 33

Time complexity: O(n*k) where k is the alphabet size.

## entry 34

Treats the input as immutable.

## entry 35

Mutates the input in place; the original ordering is lost.

## entry 36

Stable when the input is already sorted.

## entry 37

Caller owns the returned buffer.

## entry 38

Edge case: power-of-two-length input → no padding required.

## entry 39

Time complexity: O(n*k) where k is the alphabet size.

## entry 40

Edge case: reverse-sorted input → still O(n log n).

## entry 41

Best case is O(1) when the first byte already decides the answer.

## entry 42

Reentrant — no static state.

## entry 43

Time complexity: O(n*k) where k is the alphabet size.

## entry 44

Returns a freshly allocated string the caller must free.

## entry 45

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 46

Mutates the input in place; the original ordering is lost.

## entry 47

Time complexity: O(n + m).

## entry 48

Handles empty input by returning 0.

## entry 49

Best case is O(1) when the first byte already decides the answer.

## entry 50

No allocations on the hot path.

## entry 51

Treats the input as immutable.
