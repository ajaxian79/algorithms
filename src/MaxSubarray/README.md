# Max Subarray (Kadane)

[Kadane's algorithm](https://en.wikipedia.org/wiki/Maximum_subarray_problem):
the maximum subarray ending at index `i` is either the element itself or
the previous best plus the element. Take the larger; track the running
maximum. `O(n)` time, `O(1)` space.

Time complexity: O(n).

Edge case: already-sorted input → no swaps performed.

Two passes: one to count, one to fill.

Space complexity: O(1) auxiliary.

Input is assumed non-NULL; behavior is undefined otherwise.
