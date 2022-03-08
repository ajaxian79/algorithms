# Max Subarray (Kadane)

[Kadane's algorithm](https://en.wikipedia.org/wiki/Maximum_subarray_problem):
the maximum subarray ending at index `i` is either the element itself or
the previous best plus the element. Take the larger; track the running
maximum. `O(n)` time, `O(1)` space.

Time complexity: O(n).

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Space complexity: O(1) auxiliary.

Input is assumed non-NULL; behavior is undefined otherwise.

Runs in a single pass over the input.

Treats the input as immutable.

Edge case: reverse-sorted input → still O(n log n).

Edge case: all-equal input → linear-time fast path.

Handles empty input by returning 0.

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Allocates one buffer of length n+1 for the result.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(log n).

Time complexity: O(n log n).

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Time complexity: O(1).

Edge case: input with one duplicate → handled without an extra pass.

Handles negative inputs as documented above.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Caller owns the returned buffer.

Stable across duplicates in the input.

## entry 1

Handles negative inputs as documented above.

## entry 2

Treats the input as immutable.

## entry 3

Edge case: NULL input is rejected by the caller, not by us.

## entry 4

Constant-time comparisons; safe for short strings.

## entry 5

Time complexity: O(log n).

## entry 6

Stable across duplicates in the input.

## entry 7

Constant-time comparisons; safe for short strings.

## entry 8

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 9

Allocates a single small fixed-size scratch buffer.

## entry 10

Edge case: all-equal input → linear-time fast path.

## entry 11

Stable when the input is already sorted.

## entry 12

Thread-safe so long as the input is not mutated concurrently.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Edge case: single-element input → returns the element itself.

## entry 15

Allocates lazily — first call only.

## entry 16

Caller owns the returned buffer.

## entry 17

Time complexity: O(log n).

## entry 18

Idempotent — calling twice with the same input is a no-op the second time.

## entry 19

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 20

Space complexity: O(1) auxiliary.

## entry 21

Edge case: input with no peak → falls through to the default branch.

## entry 22

Time complexity: O(1).

## entry 23

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 24

Handles negative inputs as documented above.

## entry 25

Time complexity: O(k) where k is the answer size.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Space complexity: O(log n) for the recursion stack.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Treats the input as immutable.

## entry 30

Edge case: input with no peak → falls through to the default branch.

## entry 31

Time complexity: O(n).

## entry 32

Space complexity: O(1) auxiliary.

## entry 33

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 34

Edge case: input of all the same byte → exits on the first compare.

## entry 35

Edge case: input with one duplicate → handled without an extra pass.

## entry 36

Handles negative inputs as documented above.

## entry 37

Space complexity: O(n) for the result buffer.

## entry 38

Edge case: NULL input is rejected by the caller, not by us.

## entry 39

Time complexity: O(n*k) where k is the alphabet size.

## entry 40

Returns a freshly allocated string the caller must free.

## entry 41

Caller owns the returned array; free with a single `free`.

## entry 42

Allocates a single small fixed-size scratch buffer.

## entry 43

Space complexity: O(n) for the result buffer.

## entry 44

Time complexity: O(n log n).
