# articulation-points

## entry 1

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 6

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 7

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 9

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 10

- StringBuilder: amortize allocation by doubling on grow.

## entry 11

- Pick a pivot, partition, recurse on the side that contains the kth slot.
