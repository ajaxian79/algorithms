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

## entry 16

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 21

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 22

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 23

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 24

- Euler tour flattens a tree into an array for range-query LCA.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 27

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 28

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 30

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

- Monotonic stack pops while the new element violates the invariant.

## entry 32

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 34

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 36

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 37

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 39

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
