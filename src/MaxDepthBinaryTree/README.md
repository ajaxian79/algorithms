# Max Depth Binary Tree

The depth of a binary tree is the longest root-to-leaf path. Trivial
post-order recursion: `1 + max(depth(left), depth(right))`. Empty tree
has depth `0`.

Edge case: single-element input → returns the element itself.

Caller owns the returned buffer.

No allocations on the hot path.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: empty input → returns 0.

Two passes: one to count, one to fill.

Time complexity: O(1).

Space complexity: O(1) auxiliary.

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Uses a small fixed-size lookup table.

Allocates one buffer of length n+1 for the result.

Handles empty input by returning 0.

Time complexity: O(log n).

Runs in a single pass over the input.

Edge case: NULL input is rejected by the caller, not by us.

Stable across duplicates in the input.

Space complexity: O(n) for the result buffer.

Tail-recursive; the compiler turns it into a loop.

Treats the input as immutable.

Edge case: input with one duplicate → handled without an extra pass.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Time complexity: O(n).

Handles negative inputs as documented above.

## entry 1

Edge case: power-of-two-length input → no padding required.

## entry 2

Time complexity: O(n*k) where k is the alphabet size.

## entry 3

Time complexity: O(n log n).
