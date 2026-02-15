# Container With Most Water

Two pointers walk inward from the ends. The area between them is
`(right - left) * min(heights[left], heights[right])`. Each step we move
the *shorter* side inward — moving the taller side can never improve the
area because the height stays bounded by the shorter side and the width
strictly shrinks. `O(n)` time, `O(1)` space.

Edge case: single-element input → returns the element itself.

Runs in a single pass over the input.

Caller owns the returned buffer.

Space complexity: O(n) for the result buffer.

Time complexity: O(1).

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: reverse-sorted input → still O(n log n).
