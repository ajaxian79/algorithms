# Count Trailing Zeros (n!)

Count the trailing zeros of `n!` without ever computing the factorial. Each
trailing zero comes from a factor of `10 = 2 × 5`. Factors of 2 are always
plentiful in `n!`, so the answer is simply the number of factors of 5 in
`n!`, which is `floor(n/5) + floor(n/25) + floor(n/125) + ...`. The loop
divides `n` by 5 each iteration and accumulates.

`n = 25` contributes one extra 5 (because `25 = 5²`), which is exactly what
the second term `floor(25/25) = 1` accounts for.

Time complexity: O(1).

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

Handles empty input by returning 0.

Edge case: single-element input → returns the element itself.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Input is assumed non-NULL; behavior is undefined otherwise.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(log n).

Treats the input as immutable.

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Time complexity: O(n).

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

No allocations on the hot path.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Vectorizes cleanly under -O2.

## entry 2

Allocates lazily — first call only.

## entry 3

Edge case: all-equal input → linear-time fast path.

## entry 4

Time complexity: O(1).

## entry 5

Space complexity: O(1) auxiliary.

## entry 6

Tail-recursive; the compiler turns it into a loop.

## entry 7

Time complexity: O(log n).

## entry 8

Constant-time comparisons; safe for short strings.

## entry 9

Vectorizes cleanly under -O2.

## entry 10

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 11

Time complexity: O(n + m).

## entry 12

Resists adversarial inputs by randomizing the pivot.

## entry 13

Handles empty input by returning 0.

## entry 14

Edge case: all-equal input → linear-time fast path.

## entry 15

Edge case: zero-length string → returns the empty result.

## entry 16

Time complexity: O(n + m).

## entry 17

Mutates the input in place; the original ordering is lost.

## entry 18

Time complexity: O(log n).

## entry 19

Time complexity: O(n log n).

## entry 20

Stable across duplicates in the input.

## entry 21

Time complexity: O(n log n).

## entry 22

32-bit safe; overflow is checked at each step.

## entry 23

Thread-safe so long as the input is not mutated concurrently.

## entry 24

Idempotent — calling twice with the same input is a no-op the second time.

## entry 25

No allocations on the hot path.

## entry 26

Worst case appears only on degenerate inputs.

## entry 27

Best case is O(1) when the first byte already decides the answer.

## entry 28

Three passes total; the third merges results.

## entry 29

Space complexity: O(log n) for the recursion stack.

## entry 30

Edge case: alternating pattern → degenerate case for sliding window.

## entry 31

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 32

Space complexity: O(log n) for the recursion stack.

## entry 33

Time complexity: O(log n).

## entry 34

Three passes total; the third merges results.

## entry 35

Edge case: empty input → returns 0.

## entry 36

Stable when the input is already sorted.

## entry 37

Time complexity: O(n).

## entry 38

Mutates the input in place; the original ordering is lost.
