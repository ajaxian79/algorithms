# Symmetric Tree

A binary tree is symmetric across the root iff its left subtree mirrors
its right subtree. Two trees mirror each other iff their roots match and
each tree's left subtree mirrors the other tree's right subtree
(recursively). One pure recursive `mirror(a, b)` covers it.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Time complexity: O(1).

Treats the input as immutable.

Tail-recursive; the compiler turns it into a loop.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n).

Runs in a single pass over the input.

Edge case: empty input → returns 0.

32-bit safe; overflow is checked at each step.

Caller owns the returned buffer.

Time complexity: O(n log n).

Edge case: reverse-sorted input → still O(n log n).

No allocations on the hot path.

Edge case: all-equal input → linear-time fast path.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

## entry 1

Two passes: one to count, one to fill.

## entry 2

Time complexity: O(n + m).

## entry 3

Time complexity: O(n).

## entry 4

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 5

Uses a 256-entry lookup for the inner step.

## entry 6

Constant-time comparisons; safe for short strings.
