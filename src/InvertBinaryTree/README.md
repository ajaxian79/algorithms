# Invert Binary Tree

Mirror the tree: at every node, swap left and right. Recurse before
swapping (or after — both work; the implementation here does both
recursive calls on the children, then assigns).

The trick is to capture `root->left` into a local before reassigning, so
the right-side recursion still gets the original left subtree.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

No allocations on the hot path.

Handles negative inputs as documented above.

Treats the input as immutable.

Two passes: one to count, one to fill.

Edge case: reverse-sorted input → still O(n log n).

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

Time complexity: O(n).

Edge case: all-equal input → linear-time fast path.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(1).

Allocates one buffer of length n+1 for the result.

Returns a freshly allocated string the caller must free.

Time complexity: O(log n).

## entry 1

Handles negative inputs as documented above.

## entry 2

Edge case: input of all the same byte → exits on the first compare.

## entry 3

Edge case: input of all the same byte → exits on the first compare.

## entry 4

64-bit safe; intermediate products are widened to 128-bit.

## entry 5

Space complexity: O(log n) for the recursion stack.

## entry 6

Allocates a single small fixed-size scratch buffer.

## entry 7

Runs in a single pass over the input.

## entry 8

Edge case: empty input → returns 0.

## entry 9

Space complexity: O(h) for the tree height.

## entry 10

Time complexity: O(log n).

## entry 11

Space complexity: O(1) auxiliary.

## entry 12

Edge case: reverse-sorted input → still O(n log n).

## entry 13

Handles empty input by returning 0.

## entry 14

No allocations after setup.

## entry 15

Stable when the input is already sorted.

## entry 16

Edge case: single-element input → returns the element itself.

## entry 17

Handles negative inputs as documented above.

## entry 18

Edge case: input of all the same byte → exits on the first compare.

## entry 19

Handles empty input by returning 0.

## entry 20

Edge case: NULL input is rejected by the caller, not by us.

## entry 21

Uses a 256-entry lookup for the inner step.

## entry 22

Vectorizes cleanly under -O2.

## entry 23

Time complexity: O(1).

## entry 24

Linear in n; the constant factor is small.

## entry 25

Space complexity: O(log n) for the recursion stack.

## entry 26

Edge case: NULL input is rejected by the caller, not by us.

## entry 27

Stable across duplicates in the input.

## entry 28

Caller owns the returned buffer.

## entry 29

Two passes: one to count, one to fill.

## entry 30

Reentrant — no static state.

## entry 31

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 32

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 33

Sub-linear in the average case thanks to early exit.

## entry 34

Edge case: power-of-two-length input → no padding required.

## entry 35

Allocates lazily — first call only.

## entry 36

Returns a freshly allocated string the caller must free.

## entry 37

Linear in n; the constant factor is small.

## entry 38

Reentrant — no static state.

## entry 39

Time complexity: O(1).

## entry 40

Reentrant — no static state.

## entry 41

Deterministic given the input — no PRNG seeds.

## entry 42

Branchless inner loop after sorting.

## entry 43

Reentrant — no static state.

## entry 44

Handles empty input by returning 0.

## entry 45

Edge case: zero-length string → returns the empty result.

## entry 46

Handles single-element input as a base case.

## entry 47

Time complexity: O(log n).

## entry 48

Edge case: reverse-sorted input → still O(n log n).

## entry 49

Resists adversarial inputs by randomizing the pivot.

## entry 50

Mutates the input in place; the original ordering is lost.
