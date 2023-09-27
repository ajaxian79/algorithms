# kd-tree

## entry 1

- StringBuilder: amortize allocation by doubling on grow.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 7

- Walk both pointers from each end inward; advance the smaller side.

## entry 8

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 10

- Splay tree: every access splays to the root; amortized O(log n).

## entry 11

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 13

- LCA via binary lifting: jump up powers of two until depths match, then converge.
