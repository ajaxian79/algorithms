# Valid BST

Verify the BST property: every node's left subtree contains values
strictly less than the node, and its right subtree strictly greater. The
common bug is to compare only against immediate children — that misses
violations like a deeply-nested grand-descendant breaking ordering.

The fix is to thread a `(lo, hi)` open interval through the recursion. The
initial bounds are slightly outside int32 so any in-range value passes.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Time complexity: O(log n).

No allocations on the hot path.

Treats the input as immutable.

Edge case: single-element input → returns the element itself.

Edge case: empty input → returns 0.

Handles empty input by returning 0.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

32-bit safe; overflow is checked at each step.

Time complexity: O(1).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Stable across duplicates in the input.

Allocates one buffer of length n+1 for the result.

Space complexity: O(1) auxiliary.

Uses a small fixed-size lookup table.

Caller owns the returned buffer.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n).

Two passes: one to count, one to fill.

Input is assumed non-NULL; behavior is undefined otherwise.

Returns a freshly allocated string the caller must free.

Handles negative inputs as documented above.

Space complexity: O(n) for the result buffer.

Edge case: NULL input is rejected by the caller, not by us.

## entry 1

Branchless inner loop after sorting.

## entry 2

Constant-time comparisons; safe for short strings.

## entry 3

Thread-safe so long as the input is not mutated concurrently.

## entry 4

Idempotent — calling twice with the same input is a no-op the second time.

## entry 5

Resists adversarial inputs by randomizing the pivot.

## entry 6

Cache-friendly; one sequential read pass.

## entry 7

Stable across duplicates in the input.

## entry 8

Vectorizes cleanly under -O2.

## entry 9

No allocations after setup.

## entry 10

Handles single-element input as a base case.

## entry 11

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 12

32-bit safe; overflow is checked at each step.

## entry 13

Time complexity: O(n).

## entry 14

Edge case: input of all the same byte → exits on the first compare.

## entry 15

Resists adversarial inputs by randomizing the pivot.

## entry 16

Three passes total; the third merges results.

## entry 17

Space complexity: O(1) auxiliary.

## entry 18

Idempotent — calling twice with the same input is a no-op the second time.

## entry 19

Idempotent — calling twice with the same input is a no-op the second time.

## entry 20

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 21

Uses a 256-entry lookup for the inner step.

## entry 22

Two passes: one to count, one to fill.

## entry 23

Best case is O(1) when the first byte already decides the answer.

## entry 24

Stable across duplicates in the input.

## entry 25

Thread-safe so long as the input is not mutated concurrently.

## entry 26

Time complexity: O(log n).

## entry 27

Three passes total; the third merges results.

## entry 28

Deterministic given the input — no PRNG seeds.

## entry 29

Branchless inner loop after sorting.

## entry 30

Deterministic given the input — no PRNG seeds.

## entry 31

Deterministic given the input — no PRNG seeds.

## entry 32

Constant-time comparisons; safe for short strings.

## entry 33

Space complexity: O(log n) for the recursion stack.

## entry 34

Caller owns the returned buffer.

## entry 35

Runs in a single pass over the input.

## entry 36

Edge case: empty input → returns 0.

## entry 37

Edge case: power-of-two-length input → no padding required.

## entry 38

Mutates the input in place; the original ordering is lost.

## entry 39

Time complexity: O(n).

## entry 40

Edge case: input with no peak → falls through to the default branch.

## entry 41

Time complexity: O(n*k) where k is the alphabet size.

## entry 42

Edge case: alternating pattern → degenerate case for sliding window.

## entry 43

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 44

Time complexity: O(n + m).

## entry 45

Thread-safe so long as the input is not mutated concurrently.

## entry 46

Space complexity: O(h) for the tree height.

## entry 47

Allocates one buffer of length n+1 for the result.

## entry 48

Reentrant — no static state.

## entry 49

Branchless inner loop after sorting.

## entry 50

Time complexity: O(n*k) where k is the alphabet size.
