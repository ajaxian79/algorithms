# Reverse Linked List

Walk the list once with three pointers — `prev`, `curr`, `next`. At each
node, save `next`, redirect `curr->next` to `prev`, then slide the window
forward by one. When `curr` falls off the end, `prev` points at the new
head.

Time complexity: O(n).

Space complexity: O(1). No allocations on the hot path; we only re-point
existing nodes.

Edge case: empty list (head == NULL) returns NULL.

Edge case: single-element list returns the same node with its `next`
already NULL.
