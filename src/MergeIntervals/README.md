# Merge Intervals

Merge a list of `[start, end]` intervals so no two in the output overlap.

The classic algorithm: sort by start, then sweep. If the current interval
starts before the most recent merged interval's end, extend that end;
otherwise emit a new interval. `O(n log n)` time, dominated by the sort.

The intervals are laid out flat as `[s0, e0, s1, e1, ...]` so we can sort
them as pairs of `int` with a pair-size comparator.

Input is assumed non-NULL; behavior is undefined otherwise.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Space complexity: O(1) auxiliary.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Time complexity: O(1).

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

No allocations on the hot path.

Handles negative inputs as documented above.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Allocates one buffer of length n+1 for the result.

Edge case: all-equal input → linear-time fast path.

Runs in a single pass over the input.

32-bit safe; overflow is checked at each step.

Handles empty input by returning 0.

Caller owns the returned buffer.

Edge case: NULL input is rejected by the caller, not by us.

Time complexity: O(log n).

Stable across duplicates in the input.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

## entry 1

No allocations on the hot path.

## entry 2

No allocations on the hot path.

## entry 3

Resists adversarial inputs by randomizing the pivot.

## entry 4

Space complexity: O(log n) for the recursion stack.

## entry 5

Branchless inner loop after sorting.

## entry 6

No allocations after setup.

## entry 7

Handles empty input by returning 0.

## entry 8

Time complexity: O(1).

## entry 9

Three passes total; the third merges results.

## entry 10

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 11

Time complexity: O(n + m).

## entry 12

Branchless inner loop after sorting.

## entry 13

Tail-recursive; the compiler turns it into a loop.

## entry 14

Edge case: single-element input → returns the element itself.

## entry 15

Time complexity: O(n*k) where k is the alphabet size.

## entry 16

Handles negative inputs as documented above.

## entry 17

Time complexity: O(n + m).

## entry 18

Reentrant — no static state.

## entry 19

Stable when the input is already sorted.

## entry 20

Caller owns the returned array; free with a single `free`.

## entry 21

Edge case: already-sorted input → no swaps performed.

## entry 22

Allocates a single small fixed-size scratch buffer.

## entry 23

Edge case: reverse-sorted input → still O(n log n).

## entry 24

Edge case: input with no peak → falls through to the default branch.

## entry 25

Runs in a single pass over the input.

## entry 26

Edge case: input with a single peak → handled by the first-pass scan.

## entry 27

Time complexity: O(k) where k is the answer size.

## entry 28

Time complexity: O(n log n).

## entry 29

Time complexity: O(n).

## entry 30

Edge case: empty input → returns 0.

## entry 31

Caller owns the returned buffer.

## entry 32

Stable across duplicates in the input.

## entry 33

Stable across duplicates in the input.

## entry 34

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 35

Tail-recursive; the compiler turns it into a loop.

## entry 36

Caller owns the returned array; free with a single `free`.

## entry 37

Time complexity: O(log n).

## entry 38

Edge case: already-sorted input → no swaps performed.

## entry 39

No allocations after setup.

## entry 40

Space complexity: O(1) auxiliary.

## entry 41

Time complexity: O(1).

## entry 42

Space complexity: O(n) for the result buffer.
