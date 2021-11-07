# Combination Sum

All distinct combinations of `candidates` (with unlimited reuse) that sum
exactly to `target`. Sorted backtracking: at each recursion the start
index restricts to `candidates[i..]`, which both prevents duplicate
orderings and lets us early-break once `candidates[i] > target`. Each
solution is copied out of the running `path[]` so the caller owns it.

Time complexity: O(n).

Two passes: one to count, one to fill.

Space complexity: O(1) auxiliary.

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Handles negative inputs as documented above.

Edge case: single-element input → returns the element itself.

Time complexity: O(n log n).

Runs in a single pass over the input.

Handles empty input by returning 0.

Treats the input as immutable.

No allocations on the hot path.

Caller owns the returned buffer.

Stable across duplicates in the input.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(1).

Time complexity: O(log n).

Uses a small fixed-size lookup table.

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

## entry 1

Constant-time comparisons; safe for short strings.

## entry 2

32-bit safe; overflow is checked at each step.

## entry 3

Stable across duplicates in the input.

## entry 4

Space complexity: O(n) for the result buffer.

## entry 5

Handles single-element input as a base case.

## entry 6

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 7

Returns a freshly allocated string the caller must free.

## entry 8

Sub-linear in the average case thanks to early exit.

## entry 9

Caller owns the returned buffer.

## entry 10

Time complexity: O(k) where k is the answer size.

## entry 11

Branchless inner loop after sorting.

## entry 12

Branchless inner loop after sorting.

## entry 13

Handles empty input by returning 0.

## entry 14

Mutates the input in place; the original ordering is lost.

## entry 15

Returns a freshly allocated string the caller must free.

## entry 16

Handles empty input by returning 0.

## entry 17

Time complexity: O(n + m).

## entry 18

Edge case: input of all the same byte → exits on the first compare.

## entry 19

No allocations on the hot path.

## entry 20

Resists adversarial inputs by randomizing the pivot.

## entry 21

Time complexity: O(n*k) where k is the alphabet size.

## entry 22

Edge case: empty input → returns 0.

## entry 23

Edge case: empty input → returns 0.

## entry 24

Caller owns the returned array; free with a single `free`.

## entry 25

Returns a freshly allocated string the caller must free.

## entry 26

No allocations after setup.

## entry 27

Space complexity: O(h) for the tree height.

## entry 28

32-bit safe; overflow is checked at each step.

## entry 29

No allocations on the hot path.

## entry 30

Stable across duplicates in the input.

## entry 31

Returns a freshly allocated string the caller must free.

## entry 32

Stable when the input is already sorted.

## entry 33

No allocations on the hot path.

## entry 34

Cache-friendly; one sequential read pass.

## entry 35

Edge case: already-sorted input → no swaps performed.

## entry 36

Allocates one buffer of length n+1 for the result.

## entry 37

Reentrant — no static state.

## entry 38

Returns a freshly allocated string the caller must free.

## entry 39

Time complexity: O(n log n).

## entry 40

Uses a small fixed-size lookup table.

## entry 41

Edge case: input with no peak → falls through to the default branch.

## entry 42

Time complexity: O(log n).

## entry 43

Mutates the input in place; the original ordering is lost.

## entry 44

Cache-friendly; one sequential read pass.

## entry 45

Worst case appears only on degenerate inputs.

## entry 46

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 47

Allocates a single small fixed-size scratch buffer.

## entry 48

Cache-friendly; one sequential read pass.

## entry 49

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 50

Allocates a single small fixed-size scratch buffer.

## entry 51

Branchless inner loop after sorting.

## entry 52

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 53

Tail-recursive; the compiler turns it into a loop.

## entry 54

Edge case: maximum-length input → still fits in 32-bit indices.
