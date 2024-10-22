# floyd-warshall

## entry 1

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3

- Heap when you only need top-k; full sort is wasted work.

## entry 4

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 6

- Interval DP: solve all `[l, r]` ranges from short to long.
