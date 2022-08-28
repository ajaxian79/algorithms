# tree-dp

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 8

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 9

Wavelet tree: range k-th element in O(log Σ) time.

## entry 10

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 11

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 12

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 13

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 14

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 15

Monotonic stack pops while the new element violates the invariant.

## entry 16

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 22

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

Stable sort matters when a secondary key was set in a prior pass.

## entry 24

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 25

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 27

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 28

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 29

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 30

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 31

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 32

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
