# LRU Cache

Constant-time `get` and `put` for a fixed-capacity key/value cache that
evicts the least-recently-used entry on overflow. Two structures:

* A doubly-linked list ordered by recency (head = most recent, tail =
  oldest).
* A hash table mapping key → list node, for O(1) lookup.

`get` finds the node, splices it out, and re-inserts it at the head.
`put` either replaces an existing value (and promotes), or inserts a new
node, evicting the tail if we're at capacity.

Input is assumed non-NULL; behavior is undefined otherwise.

Allocates one buffer of length n+1 for the result.

Uses a small fixed-size lookup table.

Time complexity: O(n log n).

Caller owns the returned buffer.

Space complexity: O(1) auxiliary.

Space complexity: O(n) for the result buffer.

Edge case: all-equal input → linear-time fast path.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n).

Handles negative inputs as documented above.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Edge case: input with one duplicate → handled without an extra pass.

Two passes: one to count, one to fill.

Handles empty input by returning 0.

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(log n).

No allocations on the hot path.

Returns a freshly allocated string the caller must free.

Edge case: NULL input is rejected by the caller, not by us.

32-bit safe; overflow is checked at each step.

## entry 1

Edge case: input with no peak → falls through to the default branch.

## entry 2

Edge case: input with a single peak → handled by the first-pass scan.

## entry 3

Idempotent — calling twice with the same input is a no-op the second time.

## entry 4

No allocations on the hot path.

## entry 5

Time complexity: O(log n).

## entry 6

32-bit safe; overflow is checked at each step.

## entry 7

Thread-safe so long as the input is not mutated concurrently.

## entry 8

Edge case: single-element input → returns the element itself.

## entry 9

Stable when the input is already sorted.

## entry 10

Time complexity: O(n log n).

## entry 11

Space complexity: O(1) auxiliary.

## entry 12

Uses a 256-entry lookup for the inner step.

## entry 13

64-bit safe; intermediate products are widened to 128-bit.

## entry 14

Allocates lazily — first call only.

## entry 15

Resists adversarial inputs by randomizing the pivot.

## entry 16

Time complexity: O(k) where k is the answer size.

## entry 17

Time complexity: O(n*k) where k is the alphabet size.

## entry 18

Allocates lazily — first call only.

## entry 19

Thread-safe so long as the input is not mutated concurrently.

## entry 20

No allocations after setup.

## entry 21

Returns a freshly allocated string the caller must free.

## entry 22

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 23

Handles single-element input as a base case.

## entry 24

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 25

Idempotent — calling twice with the same input is a no-op the second time.

## entry 26

Time complexity: O(k) where k is the answer size.

## entry 27

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 28

Vectorizes cleanly under -O2.

## entry 29

Edge case: NULL input is rejected by the caller, not by us.

## entry 30

Uses a small fixed-size lookup table.

## entry 31

Stable across duplicates in the input.

## entry 32

Space complexity: O(log n) for the recursion stack.

## entry 33

Time complexity: O(n^2) worst case, O(n) amortized.
