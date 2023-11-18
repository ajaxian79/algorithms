# heavy-light

## entry 1

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 8

- Walk both pointers from each end inward; advance the smaller side.

## entry 9

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 10

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 11

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 13

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 14

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 15

- Iterative DFS with an explicit stack avoids recursion-limit issues.
