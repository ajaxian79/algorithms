# Path Sum

Does any root-to-leaf path sum to `target`? Pure recursion with the
remainder threaded through. The base case is "we are at a leaf" — both
children null, and remaining must be exactly zero.

The empty tree case is `0` (no path exists), which the `root == NULL`
guard covers.

Two passes: one to count, one to fill.

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Edge case: input with one duplicate → handled without an extra pass.

No allocations on the hot path.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Runs in a single pass over the input.

Tail-recursive; the compiler turns it into a loop.
