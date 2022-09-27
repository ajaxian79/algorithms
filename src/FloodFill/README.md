# Flood Fill

Recolor every cell 4-connected to a starting cell that shares its
original color. Standard DFS. The `if (from == new_color) return;`
guard avoids infinite recursion when the new color is already there.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Time complexity: O(n log n).

Time complexity: O(n).

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

32-bit safe; overflow is checked at each step.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(n) for the result buffer.

Returns a freshly allocated string the caller must free.

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Time complexity: O(log n).

Edge case: single-element input → returns the element itself.

Runs in a single pass over the input.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Handles empty input by returning 0.

Uses a small fixed-size lookup table.

Edge case: NULL input is rejected by the caller, not by us.

Stable across duplicates in the input.

## entry 1

Edge case: reverse-sorted input → still O(n log n).

## entry 2

Edge case: already-sorted input → no swaps performed.

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Space complexity: O(1) auxiliary.

## entry 5

32-bit safe; overflow is checked at each step.

## entry 6

Handles negative inputs as documented above.

## entry 7

Handles negative inputs as documented above.

## entry 8

Stable when the input is already sorted.

## entry 9

Handles empty input by returning 0.

## entry 10

Mutates the input in place; the original ordering is lost.

## entry 11

Vectorizes cleanly under -O2.

## entry 12

Handles single-element input as a base case.

## entry 13

32-bit safe; overflow is checked at each step.

## entry 14

Handles negative inputs as documented above.

## entry 15

Tail-recursive; the compiler turns it into a loop.

## entry 16

Reentrant — no static state.

## entry 17

Time complexity: O(log n).

## entry 18

Deterministic given the input — no PRNG seeds.

## entry 19

Allocates one buffer of length n+1 for the result.

## entry 20

Edge case: input with a single peak → handled by the first-pass scan.

## entry 21

Allocates lazily — first call only.

## entry 22

Time complexity: O(log n).

## entry 23

Mutates the input in place; the original ordering is lost.

## entry 24

Runs in a single pass over the input.

## entry 25

Cache-friendly; one sequential read pass.

## entry 26

Handles single-element input as a base case.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Treats the input as immutable.

## entry 30

Edge case: power-of-two-length input → no padding required.

## entry 31

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 32

Edge case: input with one duplicate → handled without an extra pass.

## entry 33

Stable when the input is already sorted.

## entry 34

Linear in n; the constant factor is small.

## entry 35

Tail-recursive; the compiler turns it into a loop.

## entry 36

Constant-time comparisons; safe for short strings.
