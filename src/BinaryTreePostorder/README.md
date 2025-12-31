# Binary Tree Postorder (iterative)

The classic two-stack postorder is one option, but a simpler trick works
just as well: run a *reverse-preorder* (root, right, left) into a buffer
and then reverse the buffer. The reversed sequence is `left, right, root`
— which is postorder. Linear time, linear space.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

Treats the input as immutable.

Runs in a single pass over the input.

Edge case: single-element input → returns the element itself.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.
