# Linked List Cycle

Floyd's tortoise-and-hare. Two pointers walk the list at different speeds:
`slow` advances one step per iteration, `fast` advances two. If the list
is acyclic, `fast` falls off the end. If it loops, the speed difference of
one step per round means `fast` eventually laps `slow` and they collide
inside the cycle.

Time complexity: O(n).

Space complexity: O(1) — two pointers, no allocation.

Edge case: empty list or single node with `next == NULL` returns 0.

Edge case: a self-loop (`head->next == head`) is caught on the first
iteration.
