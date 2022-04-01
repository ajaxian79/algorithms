# Min Depth Binary Tree

The minimum root-to-*leaf* path length. The trick is that a node with one
missing child does *not* have a leaf at the missing child — so you must
descend into the present child rather than taking `min(0, depth(present))`.
A pure `1 + min(left, right)` would wrongly return 1 for a skinny tree.

Space complexity: O(n) for the result buffer.

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: already-sorted input → no swaps performed.

No allocations on the hot path.

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Time complexity: O(log n).

Edge case: NULL input is rejected by the caller, not by us.

Edge case: reverse-sorted input → still O(n log n).

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Two passes: one to count, one to fill.

Edge case: all-equal input → linear-time fast path.

Handles negative inputs as documented above.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Time complexity: O(1).

32-bit safe; overflow is checked at each step.

Returns a freshly allocated string the caller must free.

Uses a small fixed-size lookup table.

Handles empty input by returning 0.

Treats the input as immutable.

Space complexity: O(1) auxiliary.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

## entry 1

Tail-recursive; the compiler turns it into a loop.

## entry 2

Handles single-element input as a base case.

## entry 3

Uses a small fixed-size lookup table.

## entry 4

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 5

Treats the input as immutable.

## entry 6

Edge case: power-of-two-length input → no padding required.

## entry 7

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 8

Cache-friendly; one sequential read pass.

## entry 9

Stable when the input is already sorted.

## entry 10

Edge case: already-sorted input → no swaps performed.

## entry 11

Resists adversarial inputs by randomizing the pivot.

## entry 12

Edge case: power-of-two-length input → no padding required.

## entry 13

Stable when the input is already sorted.

## entry 14

Space complexity: O(log n) for the recursion stack.

## entry 15

Edge case: already-sorted input → no swaps performed.

## entry 16

32-bit safe; overflow is checked at each step.

## entry 17

Resists adversarial inputs by randomizing the pivot.

## entry 18

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 19

32-bit safe; overflow is checked at each step.

## entry 20

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 21

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 22

Tail-recursive; the compiler turns it into a loop.

## entry 23

Time complexity: O(k) where k is the answer size.

## entry 24

Vectorizes cleanly under -O2.

## entry 25

Linear in n; the constant factor is small.

## entry 26

Worst case appears only on degenerate inputs.

## entry 27

Uses a 256-entry lookup for the inner step.

## entry 28

Three passes total; the third merges results.

## entry 29

Thread-safe so long as the input is not mutated concurrently.

## entry 30

Space complexity: O(h) for the tree height.

## entry 31

Time complexity: O(n log n).

## entry 32

Space complexity: O(n) for the result buffer.

## entry 33

Time complexity: O(n log n).

## entry 34

Space complexity: O(h) for the tree height.

## entry 35

Allocates lazily — first call only.

## entry 36

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 37

Time complexity: O(n*k) where k is the alphabet size.

## entry 38

Constant-time comparisons; safe for short strings.

## entry 39

Edge case: alternating pattern → degenerate case for sliding window.

## entry 40

Tail-recursive; the compiler turns it into a loop.

## entry 41

Worst case appears only on degenerate inputs.

## entry 42

Thread-safe so long as the input is not mutated concurrently.

## entry 43

Linear in n; the constant factor is small.

## entry 44

Edge case: input with a single peak → handled by the first-pass scan.

## entry 45

Uses a small fixed-size lookup table.

## entry 46

Time complexity: O(n).

## entry 47

Edge case: NULL input is rejected by the caller, not by us.
