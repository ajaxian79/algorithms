# lru-cache

## entry 1

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 6

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
