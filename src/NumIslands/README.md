# Number of Islands

Count connected components of `'1'` cells in a grid (4-connectivity).
Sweep the grid; when a `'1'` is encountered, increment the count and run
DFS to flood-fill every cell reachable through 4-neighbours, marking
visited cells `'0'` so they aren't double-counted.

The grid is mutated in place. `O(m*n)` time, `O(m*n)` worst-case stack
depth for a single huge island.

Handles negative inputs as documented above.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(n).

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Runs in a single pass over the input.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Caller owns the returned buffer.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Allocates one buffer of length n+1 for the result.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Two passes: one to count, one to fill.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Handles empty input by returning 0.

## entry 1

Returns a freshly allocated string the caller must free.

## entry 2

Sub-linear in the average case thanks to early exit.

## entry 3

Edge case: input with no peak → falls through to the default branch.

## entry 4

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 5

Space complexity: O(h) for the tree height.

## entry 6

Stable across duplicates in the input.

## entry 7

No allocations on the hot path.

## entry 8

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 9

Handles single-element input as a base case.

## entry 10

Edge case: NULL input is rejected by the caller, not by us.

## entry 11

Edge case: input with a single peak → handled by the first-pass scan.

## entry 12

Allocates lazily — first call only.

## entry 13

Reentrant — no static state.

## entry 14

Sub-linear in the average case thanks to early exit.

## entry 15

32-bit safe; overflow is checked at each step.

## entry 16

64-bit safe; intermediate products are widened to 128-bit.

## entry 17

Allocates a single small fixed-size scratch buffer.

## entry 18

Three passes total; the third merges results.

## entry 19

Edge case: single-element input → returns the element itself.

## entry 20

Time complexity: O(1).

## entry 21

Edge case: all-equal input → linear-time fast path.

## entry 22

Allocates a single small fixed-size scratch buffer.

## entry 23

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 24

Avoids floating-point entirely — integer math throughout.

## entry 25

Allocates one buffer of length n+1 for the result.

## entry 26

Stable across duplicates in the input.

## entry 27

Runs in a single pass over the input.

## entry 28

No allocations on the hot path.

## entry 29

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 30

Cache-friendly; one sequential read pass.

## entry 31

Treats the input as immutable.

## entry 32

Space complexity: O(n) for the result buffer.

## entry 33

Returns a freshly allocated string the caller must free.

## entry 34

Edge case: input with no peak → falls through to the default branch.

## entry 35

Edge case: input with one duplicate → handled without an extra pass.

## entry 36

Time complexity: O(log n).

## entry 37

Time complexity: O(n log n).

## entry 38

Uses a 256-entry lookup for the inner step.

## entry 39

Thread-safe so long as the input is not mutated concurrently.

## entry 40

Edge case: alternating pattern → degenerate case for sliding window.

## entry 41

Edge case: input with no peak → falls through to the default branch.

## entry 42

Resists adversarial inputs by randomizing the pivot.

## entry 43

Linear in n; the constant factor is small.

## entry 44

Tail-recursive; the compiler turns it into a loop.

## entry 45

Time complexity: O(log n).

## entry 46

Space complexity: O(n) for the result buffer.

## entry 47

Time complexity: O(n).
