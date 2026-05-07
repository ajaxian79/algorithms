# Middle of the Linked List

Two-pointer slow/fast traversal. Each iteration `slow` moves one step and
`fast` moves two; when `fast` falls off the end (either NULL or a NULL
`next`), `slow` has reached the midpoint. Single pass, no length count
needed up front.

For even-length lists this returns the second of the two middle nodes —
matches the LeetCode contract.

Time complexity: O(n).

Space complexity: O(1).

Edge case: NULL head returns NULL.

Edge case: single-node list returns the head itself.
