# bfs

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
