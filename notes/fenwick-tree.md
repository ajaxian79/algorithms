# fenwick-tree

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
