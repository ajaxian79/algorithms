# intervals-greedy

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic deque: push back, pop back to maintain order, pop front when stale.
