# Merge Two Sorted Lists

In-place merge of two singly-linked lists already sorted in non-decreasing
order. Walk both with a dummy head; pick the smaller current and re-point
`next`. Whichever list runs out first lets the other tail through
unchanged.

Time complexity: O(n + m).

Space complexity: O(1) auxiliary — no allocations during the merge.

Mutates the input in place; the original ordering is lost.

Edge case: either input NULL → returns the other (NULL too if both).

Edge case: identical values across lists → ties go to the left input
(`<=`), which keeps the merge stable.
