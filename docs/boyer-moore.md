# boyer-moore

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Pick a pivot, partition, recurse on the side that contains the kth slot.
