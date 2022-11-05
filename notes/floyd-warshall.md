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

## entry 7

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 9

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 10

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

- StringBuilder: amortize allocation by doubling on grow.

## entry 12

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 13

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 14

- Heap when you only need top-k; full sort is wasted work.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 17

- Walk both pointers from each end inward; advance the smaller side.

## entry 18

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 19

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 20

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 21

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
