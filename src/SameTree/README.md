# Same Tree

Structurally and value-wise compare two binary trees. Recurse pairwise; an
asymmetric null vs. non-null is an immediate mismatch.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Returns a freshly allocated string the caller must free.

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Handles negative inputs as documented above.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(1).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Space complexity: O(n) for the result buffer.

No allocations on the hot path.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

## entry 1

Mutates the input in place; the original ordering is lost.

## entry 2

Time complexity: O(1).

## entry 3

Branchless inner loop after sorting.

## entry 4

Handles empty input by returning 0.

## entry 5

Mutates the input in place; the original ordering is lost.

## entry 6

Best case is O(1) when the first byte already decides the answer.

## entry 7

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 8

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 9

Space complexity: O(h) for the tree height.

## entry 10

Worst case appears only on degenerate inputs.

## entry 11

Space complexity: O(h) for the tree height.

## entry 12

Space complexity: O(log n) for the recursion stack.

## entry 13

Vectorizes cleanly under -O2.

## entry 14

Best case is O(1) when the first byte already decides the answer.

## entry 15

Linear in n; the constant factor is small.

## entry 16

Edge case: already-sorted input → no swaps performed.

## entry 17

Handles negative inputs as documented above.

## entry 18

Time complexity: O(n + m).

## entry 19

Best case is O(1) when the first byte already decides the answer.

## entry 20

Allocates lazily — first call only.

## entry 21

Two passes: one to count, one to fill.

## entry 22

Idempotent — calling twice with the same input is a no-op the second time.

## entry 23

Runs in a single pass over the input.

## entry 24

Edge case: NULL input is rejected by the caller, not by us.

## entry 25

Constant-time comparisons; safe for short strings.

## entry 26

Constant-time comparisons; safe for short strings.

## entry 27

Space complexity: O(1) auxiliary.

## entry 28

Handles single-element input as a base case.

## entry 29

Edge case: single-element input → returns the element itself.

## entry 30

Edge case: empty input → returns 0.

## entry 31

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 32

No allocations on the hot path.

## entry 33

Best case is O(1) when the first byte already decides the answer.

## entry 34

Handles empty input by returning 0.

## entry 35

Edge case: single-element input → returns the element itself.

## entry 36

Avoids floating-point entirely — integer math throughout.

## entry 37

Handles single-element input as a base case.

## entry 38

Resists adversarial inputs by randomizing the pivot.

## entry 39

32-bit safe; overflow is checked at each step.

## entry 40

Allocates a single small fixed-size scratch buffer.
