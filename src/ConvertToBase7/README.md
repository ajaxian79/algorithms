# Convert to Base 7

Standard repeated-division: peel off `n % 7`, divide by 7, repeat. The
digits emerge least-significant first, so we collect them in a small buffer
and reverse on the way out into the heap result.

The `long` cast on `-(long)n` exists to keep `INT_MIN` from overflowing
when negated.

No allocations on the hot path.

Handles empty input by returning 0.

Stable across duplicates in the input.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

Uses a small fixed-size lookup table.

Edge case: single-element input → returns the element itself.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Time complexity: O(n log n).

Caller owns the returned buffer.

Edge case: reverse-sorted input → still O(n log n).

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Edge case: empty input → returns 0.

Edge case: already-sorted input → no swaps performed.

Edge case: NULL input is rejected by the caller, not by us.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

32-bit safe; overflow is checked at each step.

## entry 1

32-bit safe; overflow is checked at each step.

## entry 2

Edge case: zero-length string → returns the empty result.

## entry 3

Time complexity: O(n log n).

## entry 4

Edge case: input with a single peak → handled by the first-pass scan.

## entry 5

Handles negative inputs as documented above.

## entry 6

Allocates one buffer of length n+1 for the result.

## entry 7

Time complexity: O(n).

## entry 8

Time complexity: O(k) where k is the answer size.

## entry 9

Time complexity: O(k) where k is the answer size.

## entry 10

Thread-safe so long as the input is not mutated concurrently.

## entry 11

Edge case: input with no peak → falls through to the default branch.

## entry 12

Edge case: empty input → returns 0.

## entry 13

Space complexity: O(1) auxiliary.

## entry 14

Constant-time comparisons; safe for short strings.

## entry 15

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 16

Edge case: input with a single peak → handled by the first-pass scan.

## entry 17

Time complexity: O(n*k) where k is the alphabet size.

## entry 18

Treats the input as immutable.

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Time complexity: O(n log n).

## entry 21

Allocates one buffer of length n+1 for the result.

## entry 22

Vectorizes cleanly under -O2.

## entry 23

Time complexity: O(n + m).

## entry 24

Worst case appears only on degenerate inputs.

## entry 25

Caller owns the returned buffer.

## entry 26

Thread-safe so long as the input is not mutated concurrently.

## entry 27

Time complexity: O(k) where k is the answer size.

## entry 28

Caller owns the returned buffer.

## entry 29

Uses a small fixed-size lookup table.

## entry 30

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 31

Worst case appears only on degenerate inputs.

## entry 32

Reentrant — no static state.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

No allocations on the hot path.

## entry 35

Uses a small fixed-size lookup table.

## entry 36

Handles single-element input as a base case.

## entry 37

32-bit safe; overflow is checked at each step.

## entry 38

Branchless inner loop after sorting.

## entry 39

Three passes total; the third merges results.

## entry 40

Edge case: zero-length string → returns the empty result.

## entry 41

Best case is O(1) when the first byte already decides the answer.

## entry 42

Tail-recursive; the compiler turns it into a loop.

## entry 43

Stable when the input is already sorted.

## entry 44

Handles negative inputs as documented above.

## entry 45

Allocates lazily — first call only.

## entry 46

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 47

64-bit safe; intermediate products are widened to 128-bit.

## entry 48

Edge case: input with no peak → falls through to the default branch.

## entry 49

Uses a 256-entry lookup for the inner step.
