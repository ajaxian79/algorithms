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

## entry 4

Time complexity: O(n log n).

## entry 5

Time complexity: O(n + m).

## entry 6

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 7

Cache-friendly; one sequential read pass.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Allocates one buffer of length n+1 for the result.

## entry 10

Edge case: reverse-sorted input → still O(n log n).

## entry 11

Space complexity: O(n) for the result buffer.

## entry 12

Thread-safe so long as the input is not mutated concurrently.

## entry 13

Edge case: alternating pattern → degenerate case for sliding window.

## entry 14

Branchless inner loop after sorting.

## entry 15

32-bit safe; overflow is checked at each step.

## entry 16

Three passes total; the third merges results.

## entry 17

Allocates lazily — first call only.

## entry 18

Handles negative inputs as documented above.

## entry 19

Allocates lazily — first call only.

## entry 20

Stable across duplicates in the input.

## entry 21

Tail-recursive; the compiler turns it into a loop.

## entry 22

Treats the input as immutable.

## entry 23

Worst case appears only on degenerate inputs.

## entry 24

Uses a 256-entry lookup for the inner step.

## entry 25

Time complexity: O(n + m).

## entry 26

Runs in a single pass over the input.

## entry 27

Worst case appears only on degenerate inputs.

## entry 28

Edge case: input of all the same byte → exits on the first compare.

## entry 29

Linear in n; the constant factor is small.

## entry 30

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 31

Allocates one buffer of length n+1 for the result.

## entry 32

Vectorizes cleanly under -O2.

## entry 33

Time complexity: O(n + m).

## entry 34

Time complexity: O(n^2) worst case, O(n) amortized.
