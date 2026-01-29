# Number of Islands

Count connected components of `'1'` cells in a grid (4-connectivity).
Sweep the grid; when a `'1'` is encountered, increment the count and run
DFS to flood-fill every cell reachable through 4-neighbours, marking
visited cells `'0'` so they aren't double-counted.

The grid is mutated in place. `O(m*n)` time, `O(m*n)` worst-case stack
depth for a single huge island.

Handles negative inputs as documented above.

Time complexity: O(n log n).

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Time complexity: O(n).

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: NULL input is rejected by the caller, not by us.

Runs in a single pass over the input.
