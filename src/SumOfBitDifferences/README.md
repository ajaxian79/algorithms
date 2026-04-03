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
