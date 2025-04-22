# lca

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4

Heap when you only need top-k; full sort is wasted work.

## entry 5

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 7

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
