# Sum of Bit Differences

Total hamming distance summed over every unordered pair of values. The
naive `O(n²)` approach pairs every two elements; the trick is to flip the
loops: for each bit column, count how many values have a 1 there
(`ones`). Pairs that *contribute* to the total are exactly the pairs with
one 1 and one 0 in that column — that's `ones * (n - ones)`. Sum across
32 columns and you're done in `O(32 n)`.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Runs in a single pass over the input.

Returns a freshly allocated string the caller must free.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Edge case: already-sorted input → no swaps performed.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Caller owns the returned buffer.

Time complexity: O(1).

Space complexity: O(n) for the result buffer.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n).

Allocates one buffer of length n+1 for the result.

No allocations on the hot path.

Two passes: one to count, one to fill.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

## entry 1

Treats the input as immutable.

## entry 2

No allocations on the hot path.

## entry 3

64-bit safe; intermediate products are widened to 128-bit.

## entry 4

Linear in n; the constant factor is small.

## entry 5

Edge case: NULL input is rejected by the caller, not by us.

## entry 6

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Stable when the input is already sorted.

## entry 9

Handles negative inputs as documented above.

## entry 10

Edge case: NULL input is rejected by the caller, not by us.

## entry 11

Three passes total; the third merges results.

## entry 12

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 13

Allocates one buffer of length n+1 for the result.

## entry 14

Handles empty input by returning 0.

## entry 15

Worst case appears only on degenerate inputs.

## entry 16

Returns a freshly allocated string the caller must free.

## entry 17

Tail-recursive; the compiler turns it into a loop.

## entry 18

Edge case: NULL input is rejected by the caller, not by us.

## entry 19

Uses a 256-entry lookup for the inner step.

## entry 20

Allocates one buffer of length n+1 for the result.

## entry 21

Allocates one buffer of length n+1 for the result.

## entry 22

Idempotent — calling twice with the same input is a no-op the second time.

## entry 23

Allocates a single small fixed-size scratch buffer.

## entry 24

Time complexity: O(n log n).

## entry 25

Avoids floating-point entirely — integer math throughout.

## entry 26

32-bit safe; overflow is checked at each step.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Treats the input as immutable.

## entry 29

Allocates a single small fixed-size scratch buffer.

## entry 30

Linear in n; the constant factor is small.

## entry 31

Handles empty input by returning 0.
