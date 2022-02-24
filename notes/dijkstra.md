# dijkstra

## entry 1

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 6

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 7

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 8

- StringBuilder: amortize allocation by doubling on grow.

## entry 9

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

- Euler tour flattens a tree into an array for range-query LCA.

## entry 11

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 12

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 15

- LIS via patience: each pile holds the smallest tail of length k.

## entry 16

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 17

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 19

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 21

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 22

- Walk both pointers from each end inward; advance the smaller side.

## entry 23

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

- LIS via patience: each pile holds the smallest tail of length k.

## entry 25

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 26

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 27

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 28

- Splay tree: every access splays to the root; amortized O(log n).

## entry 29

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
