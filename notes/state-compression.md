# state-compression

## entry 1

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

- Walk both pointers from each end inward; advance the smaller side.

## entry 5

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- k-d tree: median-split each axis; nearest-neighbor average O(log n).
