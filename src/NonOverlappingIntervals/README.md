# Non-Overlapping Intervals

Find the minimum number of intervals you must remove so that the rest do
not overlap. Equivalent to a classic activity-selection problem: count the
maximum number of mutually non-overlapping intervals (greedy by *end*),
then subtract from `n`.

Sorting by end time and always greedily picking the next interval whose
start is at or after the current end gives the largest such set.

Space complexity: O(n) for the result buffer.

Two passes: one to count, one to fill.

Edge case: single-element input → returns the element itself.

Time complexity: O(1).
