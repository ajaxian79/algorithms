# Binary Tree Preorder (iterative)

Iterative preorder using an explicit stack. Push the root, then loop: pop,
emit the value, push the right child first then the left so that left
comes off the stack next. Output buffer doubles when full to keep
amortized cost `O(n)`.

Time complexity: O(n log n).

Space complexity: O(n) for the result buffer.

Edge case: empty input → returns 0.

Tail-recursive; the compiler turns it into a loop.

Space complexity: O(1) auxiliary.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

Edge case: reverse-sorted input → still O(n log n).

Handles negative inputs as documented above.
