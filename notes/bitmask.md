# bitmask

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
