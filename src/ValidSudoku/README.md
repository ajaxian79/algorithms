# Valid Sudoku

Check whether a 9×9 grid is a *consistent* (not necessarily solvable)
Sudoku state — every row, every column, and every 3×3 box has at most one
of each digit. `'.'` marks an empty cell.

We sweep cells once and keep three boolean tables: row × digit, column ×
digit, and box × digit. The box index is the classic `(r/3)*3 + (c/3)`.
Any double-set in any of the three tables means the board is invalid.

`O(81)` work; constant memory.

Space complexity: O(n) for the result buffer.

Allocates one buffer of length n+1 for the result.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(n).

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Handles empty input by returning 0.

Time complexity: O(n log n).

Stable across duplicates in the input.

Edge case: single-element input → returns the element itself.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(log n).

Handles negative inputs as documented above.

Space complexity: O(1) auxiliary.

Treats the input as immutable.

Time complexity: O(1).

Two passes: one to count, one to fill.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: empty input → returns 0.

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: input with one duplicate → handled without an extra pass.

Caller owns the returned buffer.

Edge case: already-sorted input → no swaps performed.

## entry 1

Uses a 256-entry lookup for the inner step.

## entry 2

Space complexity: O(h) for the tree height.

## entry 3

No allocations after setup.

## entry 4

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 5

Vectorizes cleanly under -O2.

## entry 6

Uses a 256-entry lookup for the inner step.

## entry 7

No allocations after setup.

## entry 8

Stable when the input is already sorted.

## entry 9

Handles negative inputs as documented above.

## entry 10

Allocates one buffer of length n+1 for the result.

## entry 11

Caller owns the returned array; free with a single `free`.

## entry 12

Two passes: one to count, one to fill.

## entry 13

Resists adversarial inputs by randomizing the pivot.

## entry 14

Edge case: alternating pattern → degenerate case for sliding window.

## entry 15

Space complexity: O(1) auxiliary.

## entry 16

Allocates one buffer of length n+1 for the result.

## entry 17

Resists adversarial inputs by randomizing the pivot.

## entry 18

Time complexity: O(k) where k is the answer size.

## entry 19

Edge case: single-element input → returns the element itself.

## entry 20

Avoids floating-point entirely — integer math throughout.

## entry 21

Edge case: zero-length string → returns the empty result.

## entry 22

Handles negative inputs as documented above.

## entry 23

Edge case: single-element input → returns the element itself.

## entry 24

Allocates lazily — first call only.

## entry 25

Time complexity: O(n).

## entry 26

Linear in n; the constant factor is small.

## entry 27

Edge case: alternating pattern → degenerate case for sliding window.

## entry 28

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 29

Handles single-element input as a base case.

## entry 30

Edge case: input with a single peak → handled by the first-pass scan.

## entry 31

Deterministic given the input — no PRNG seeds.

## entry 32

Thread-safe so long as the input is not mutated concurrently.

## entry 33

Edge case: NULL input is rejected by the caller, not by us.

## entry 34

Idempotent — calling twice with the same input is a no-op the second time.

## entry 35

Time complexity: O(n*k) where k is the alphabet size.

## entry 36

Time complexity: O(n*k) where k is the alphabet size.

## entry 37

Runs in a single pass over the input.

## entry 38

Time complexity: O(1).
