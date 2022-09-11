# kosaraju

## entry 1

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 10

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 11

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 12

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 13

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 14

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 15

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 16

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 18

- Greedy by end-time picks the most non-overlapping intervals.

## entry 19

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 20

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 21

- Stable sort matters when a secondary key was set in a prior pass.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 25

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 27

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 28

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 29

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 30

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 31

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 32

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
